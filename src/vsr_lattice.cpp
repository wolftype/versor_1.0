/*
 *  Lattice.cpp
 *  Versor
 *
 *  Created by wolftype on 1/28/10.
 *  Copyright 2010 wolftype. All rights reserved.
 *
 */

#include "vsr.h"

#include "vsr_lattice.h"
//#include "Opera.h"

namespace vsr {

	#define BEGIN_BOUNDED_LOOP \
				for (int i = 1; i < mWidth-1; ++i){ \
				for (int j = 1; j < mHeight-1; ++j){ \
				for (int k = 1; k < mDepth-1; ++k){ \
					int ix = idx(i,j,k);
	#define END_BOUNDED_LOOP \
				}}}
				
	#define BEGIN_LOOP \
				for (int i = 0; i < mWidth; ++i){ \
				for (int j = 0; j < mHeight; ++j){ \
				for (int k = 0; k < mDepth; ++k){ \
					int ix = idx(i,j,k);
	#define END_LOOP \
				}}}			

	template < class T >
	Lattice < T >  :: Lattice () : 
	Frame(), mWidth(10), mHeight(10), mDepth(10),
	mNum(1000), mNumVxl( (mWidth-1) * (mHeight-1) * (mDepth-1) ), 
	mSpacing(.5), mType(0) { alloc(); init(); copyPrev(); }//networkData();}

	template < class T >
	Lattice < T > :: Lattice (int _w, int _h, int _d, float _s ) : 
	Frame(), mWidth(_w), mHeight(_h), mDepth(_d), 
	mNum(_w * _h * _d), mNumVxl( (mWidth-1) * (mHeight-1) * (mDepth-1) ),
	mSpacing(_s) { alloc(); init();  copyPrev(); }//networkData(); }
	
	template < class T >
	Lattice < T >  :: ~Lattice () { 
		delete[] mData; delete[] mPrev; delete[] mGrid; delete[] mVxl; delete[] mNbr; delete[] mVNbr;
		//delete[] mFace; delete[] mEdge; 
		//delete[] mFaceVxl; delete[] mEdgeVxl;
	} 

	template < class T >
	void Lattice< T > :: alloc() {
        
        /// Current Data
		mData		= new T[mNum];
        
        /// Data Storage for previous Time Step (for Simulations)
		mPrev		= new T[mNum];
        
		/// Position Information
        mGrid		= new Pnt[mNum];

        mNbr		= new Nbr[mNum];                ///< Neighbor Idx Data
		mVxl		= new Vxl[mNumVxl];             ///< Voxel Idx Data
		mVNbr		= new Nbr[mNumVxl];             ///< Voxel Neighbor Idx Data

		//Set Dimensions
		mDim = 3;
		int t[] = {mWidth, mHeight, mDepth};
		for (int i =0; i < 3; ++i){
			if (t[i] == 1) mDim -= 1; 
		}
		
		//Make Grid of Spheres
		BEGIN_LOOP									
            int idx = _indexOf(i,j,k, *this);
            mGrid[idx] = Ro::dls ( px(i), py(j), pz(k), mSpacing/2.0 );
                                
            //assign nbrs
            int type = 0;
            type |= (k==0) ? _FRONT : 0;
            type |= (k==mDepth-1) ? _BACK: 0;					
            type |= (j==0) ? _BOTTOM : 0;
            type |= (j==mHeight-1) ? _TOP: 0;					
            type |= (i==0) ? _LEFT : 0;
            type |= (i==mWidth-1) ? _RIGHT: 0;					

            mNbr[idx] = nbr(idx, *this, type);
		END_LOOP
		
		//Assign Vxls
		for (int i = 0; i < mWidth-1; ++i){
			for (int j = 0; j < mHeight-1; ++j) {
				for (int k = 0; k < mDepth-1; ++k) {					
					int ix = i * (mHeight-1) * (mDepth-1) + j * (mDepth-1) + k;
					Vec v( px(i) + mSpacing/2.0, py(j) + mSpacing/2.0, pz(k) - mSpacing/2.0);
					mVxl[ix] = vxl(v);
					
					//assign vnbrs
					int type = 0;
					type |= (k==0) ? _FRONT : 0;
					type |= (k==mDepth-2) ? _BACK: 0;					
					type |= (j==0) ? _BOTTOM : 0;
					type |= (j==mHeight-2) ? _TOP: 0;					
					type |= (i==0) ? _LEFT : 0;
					type |= (i==mWidth-2) ? _RIGHT: 0;	
					
					mVxl[ix].type = type;					
					mVNbr[ix] = vnbr(ix, *this, type);
				}
			}
		}
		
		//Assign Corner Vals
//		mCorner = Vxl( idx(0,0,0), idx(mWidth-1,0,0), idx(mWidth-1,mHeight-1,0), idx(0,mHeight-1,0),
//		idx(0,0,mDepth-1), idx(mWidth-1,0,mDepth-1), idx(mWidth-1,mHeight-1,mDepth-1), idx(0,mHeight-1,mDepth-1) );
		
//		//Assign Edges and Faces idx
		for (int i = 0; i < mNum; ++i){
			FE(mNbr[i]);
			//facesAndEdges( mNbr[i], mFace, mEdge );
		}
//		
//		//Assign EdgeVxl and FaceVxl idx
		for (int i = 0; i < mNumVxl; ++i){
			vxlFE(mVNbr[i]);
			//facesAndEdgesVxl( mVNbr[i], mFaceVxl, mEdgeVxl );
		}
		
		mNumFace = mFace.size(); mNumEdge = mEdge.size();
	}
	
	template < class T > 
	void Lattice < T > :: copyPrev(){
		for (int i = 0; i < mNum; ++i){
			mPrev[i] = T(mData[i]);
		}
	}
	
	template < class T > 
	void Lattice < T > :: resize(int w, int h, int d, float spacing){
		mWidth = w; mHeight = h, mDepth = d; mSpacing = spacing;
		mNum = w * h * d; 
		mNumVxl = (mWidth-1) * (mHeight-1) * (mDepth-1);
		if (mData) delete[] mData; 
		if (mPrev) delete[] mPrev;
		if (mVxl) delete[] mVxl;
		if (mGrid) delete[] mGrid;
		if (mNbr) delete[] mNbr;
		if (mVNbr) delete[] mVNbr;	
		
		if (!mFace.empty() ) mFace.clear();
		if (!mEdge.empty() ) mEdge.clear();
		if (!mCorner.empty()) mCorner.clear();
		if (!mFaceVxl.empty()) mFaceVxl.clear();
		if (!mEdgeVxl.empty()) mEdgeVxl.clear();
		if (!mCornerVxl.empty()) mCornerVxl.clear();
				
		alloc(); init();  copyPrev(); //networkData();
	}
	
	/* Default Generic Initialization */
    template<class T>
   void  Lattice<T> :: init() {
        for(int i = 0; i < mNum; ++i){
        double t= 1.0 * i/mNum;
        mData[i] = T(t);
        }
    }
	
	/* Specialized Initializations for Positioning of Data */
    
	template <> 
	void Lattice< Vec > :: init(){
		for (int i = 0; i < mNum; ++i){
			mData[i] = Vec(mGrid[i]).unit() * mSpacing;
		}
	}

	template <> 
	void Lattice< Pnt > :: init(){
		for (int i = 0; i < mNum; ++i){
			mData[i] = Ro::null(mGrid[i]);
		}
	}
	
	template <> 
	void Lattice< Par > :: init(){
		for (int i = 0; i < mNum; ++i){
			//Biv b = Op::dle( Vec( mGrid[i] ) );						
			mData[i] = Ro::par( Ro::null(mGrid[i]), Vec(mGrid[i]).unit(), mSpacing/2.0 );
		}
	}
	
	template <> 
	void Lattice< Cir > :: init(){
		for (int i = 0; i < mNum; ++i){
			Biv b = Op::dle( Vec( mGrid[i] ) ).unit();						
			mData[i] =  Ro::cir( Ro::null(mGrid[i]), b, mSpacing/2.0 );
		}
	}	
	
	template <> 
	void Lattice< Dll > :: init(){
		for (int i = 0; i < mNum; ++i){
            double t= 1.0 * i/mNum;
            Lin lin = mGrid[i] ^ Drv( mGrid[i] ).rot( Vec(mGrid[i]).unit() ^ Vec::y );
            mData[i] = lin.dual().runit();
//			Rot rot = Gen::rot( Op::dl ( Vec( mGrid[i] ) ) );
//			Trs trs = Gen::trs( Vec( mGrid[i] ) );
//			Mot mot = trs * rot;
//			mData[i] = Gen::log_mot( mot / mot.rnorm() );
		}
	}

	template <> 
	void Lattice< Tnv > :: init(){
		for (int i = 0; i < mNum; ++i){
			mData[i] = Tnv(mGrid[i]) * .3;
		}
	}
	template <> 
	void Lattice< Drv > :: init(){
		for (int i = 0; i < mNum; ++i){
			mData[i] = Drv(mGrid[i]) * .3;
		}
	}
	template <> 
	void Lattice< Drb > :: init(){
		for (int i = 0; i < mNum; ++i){
			mData[i] = Drb(mGrid[i]) * .3;
		}
	}
	template <> 
	void Lattice< Biv > :: init(){
		for (int i = 0; i < mNum; ++i){
			mData[i] = Op::dle( Vec( mGrid[i] ) ); //Euclidean Dual			
		}
	}

	template <> 
	void Lattice< Dlp > :: init(){
		for (int i = 0; i < mNum; ++i){
			mData[i] = Fl::pnt_drv( mGrid[i], Drv(mGrid[i]));			
		}
	}
    
    
    // RANDOMIZATION

	//Jitter Samples
	template < class T >
	void Lattice < T > :: jitter(double x, double y, double z){
		Trs trs; double rx, ry, rz;
		for (int i = 0; i < mNum; ++i){
		
			rx = ( (double) rand() / RAND_MAX ) * mSpacing * x; //Random Values
			ry = ( (double) rand() / RAND_MAX ) * mSpacing * y;
			rz = ( (double) rand() / RAND_MAX ) * mSpacing * z;
			
			trs = Gen::trs(rx,ry,rz);
			mData[i] = Op::sp(mData[i], trs);
		}
	}
    

	//Jitter Samples
	template < class T >
	void Lattice < T > :: jitterGrid(double s){
		Trs trs; double rx, ry, rz;
		for (int i = 0; i < mNum; ++i){
		
			rx = ( (double) rand() / RAND_MAX ) * mSpacing * s; //Random Values
			ry = ( (double) rand() / RAND_MAX ) * mSpacing * s;
			rz = ( (double) rand() / RAND_MAX ) * mSpacing * s;
			
			trs = Gen::trs(rx,ry,rz);
			mGrid[i] = Op::sp(mGrid[i], trs);
		}
	}	
		
    // NEIGHBORS
    
	//idx of neighbors
	template < class T >
	Nbr Lattice < T > :: nbr(int idx, const Lattice& f, int type) {	
	
			return Nbr(
				//id
				idx,
				//x left and right
				(type & _LEFT) ? -1 : idx - f.h() * f.d(),
				(type & _RIGHT) ? -1 : idx + f.h() * f.d(),
				//y bottom and top
				(type & _BOTTOM) ? - 1 : idx - f.d(),
				(type & _TOP) ? - 1 : idx + f.d(),
				//z front and back
				(type & _FRONT) ? - 1 : idx - 1,
				(type & _BACK) ? - 1 : idx + 1
			);
	
	}

	//idx of vxl neighbors
	template < class T >
	Nbr Lattice < T > :: vnbr(int idx, const Lattice& f, int type) {	
	
			return Nbr(
				//id
				idx,
				//x left and right
				(type & _LEFT) ? -1 : idx - (f.h()-1) * (f.d()-1),
				(type & _RIGHT) ? -1 : idx + (f.h()-1) * (f.d()-1),
				//y bottom and top
				(type & _BOTTOM) ? - 1 : idx - f.d()-1,
				(type & _TOP) ? - 1 : idx + f.d()-1,
				//z front and back
				(type & _FRONT) ? - 1 : idx - 1,
				(type & _BACK) ? - 1 : idx + 1
			);
	
	}
	
	template < class T >
	int Lattice < T > :: faceOrEdge( Nbr nb){
		int type = 0;
		for (int i = 0; i < 6; ++i){
			if ( nb[i+1]==-1) type |= (1 << i);
		}
		return type;
	}
	
//	template < class T >
//	void Lattice < T > :: facesAndEdges( Nbr nb, int * faces, int * edges ) {
//		//face?
//		int i = 0;  static int tot = 0;
//		static int * ptr = faces;
//		while (i < 7){
//			if (nb[i] == -1) { 
//				*ptr++ = nb.idx; 
//				tot ++;
//				break; 
//			}
//			i++;
//		}
//		
//		//edge?
//		static int * eptr = edges;
//		i = 0; int n = 0;
//		while (	i < 7 ){
//			if (nb[i] == -1) {
//				n++;
//				if (n==2){
//					*eptr++ = nb.idx;
//					break;
//				}
//			}
//			i++;
//		}
//	}
//
//	template < class T >
//	void Lattice < T > :: facesAndEdgesVxl( Nbr nb, int * faces, int * edges ) {
//		//face?
//		int i = 0;  static int tot = 0;
//		static int * ptr = faces;
//		while (i < 7){
//			if (nb[i] == -1) { 
//				*ptr++ = nb.idx; 
//				tot ++;
//				break; 
//			}
//			i++;
//		}
//		
//		//edge?
//		static int * eptr = edges;
//		i = 0; int n = 0;
//		while (	i < 7 ){
//			if (nb[i] == -1) {
//				n++;
//				if (n==2){
//					*eptr++ = nb.idx;
//					break;
//				}
//			}
//			i++;
//		}
//	}

	template < class T >
	void Lattice < T > :: FE( Nbr nb){
		int i = 0;
		while (i < 7){
			if (nb[i] == -1) { 
				mFace.push_back( nb.idx ); 
				break; 
			}
			i++;
		}
				
		i = 0; int n = 0;		
		while (	i < 7 ){
			if (nb[i] == -1) {
				n++;
				if (n==2){
					mEdge.push_back( nb.idx );
					break;
				}
			}
			i++;
		}
		
		i = 0; n = 0;				
		while (	i < 7 ){
			if (nb[i] == -1) {
				n++;
				if (n==3){
					mCorner.push_back( nb.idx );
					break;
				}
			}
			i++;
		}

	}	
    
	template < class T >
	void Lattice < T > :: vxlFE( Nbr nb){
		int i = 0;
		while (i < 7){
			if (nb[i] == -1) { 
				mFaceVxl.push_back( nb.idx ); 
				break; 
			}
			i++;
		}
				
		i = 0; int n = 0;		
		while (	i < 7 ){
			if (nb[i] == -1) {
				n++;
				if (n==2){
					mEdgeVxl.push_back( nb.idx );
					break;
				}
			}
			i++;
		}
		i = 0; n = 0;
		while (	i < 7 ){
			if (nb[i] == -1) {
				n++;
				if (n==3){
					mCornerVxl.push_back( nb.idx );
					break;
				}
			}
			i++;
		}
	}

	template < class T >
	Vec Lattice < T > :: offset(const Pnt& p){
		//T tdx;
		Vec v = limit(*this,p);							

		Vxl vxl = _vxlOfPnt(p, *this);//(0,1,2,3,4,5,6,7);
		//vxl.limit(); //cout << "euler: " << vxl << endl;
		//int n = vxl[0];//(vxl[0] == -1) ? 0 : vxl[0];
		Vec tp =  v - grid( vxl[0] ); //x,y,z distance from lower front corner
		tp[2] *= -1;
		tp /= spacing();
		
		return tp;
	}

	//deprecated
	template < class T >
	T Lattice < T > :: euler ( const Pnt& p) const {
		
		Vxl vxl = vxlPnt(p);
		T tdx;
		for (int i = 0; i < 8; ++i){
			tdx += mData[ vxl[i] ] * ( 1.0 / Ro::dst ( p , grid ( vxl[i] ) ) );
		}
		return tdx;
	}

	template < class T >
	T Lattice < T > :: eulerPrev ( const Pnt& p) const {
		
		Vxl vxl = vxlPnt(p);
		T tdx;
		for (int i = 0; i < 8; ++i){
			tdx += mPrev[ vxl[i] ] * ( 1.0 / ( p <= grid ( vxl[i] ) )[0] );
		}
		return tdx;
	}
	

	template < class T >
	T Lattice < T > :: sumNbrs ( T * data, Nbr * nb, int idx) {
	 T tdx; 
	 for (int i = 1; i < 7; ++i){ 
		if (nb[idx][i] != -1 ) tdx += data[ nb[idx][i] ]; 
	 }  
	 return tdx; 	
	}

	template < class T >
	T Lattice < T > :: diffNbrs ( T * data, Nbr * nb, int idx) {
		T tdx; 
		tdx += data[ nb[idx].xr ] - data [ nb[idx].xl ]; //xr - xl
		tdx += data[ nb[idx].yt ] - data [ nb[idx].yb ]; //yt - yb
		tdx += data[ nb[idx].zb ] - data [ nb[idx].zf ]; //zb - zf
		return tdx; 
	}
	
	template < class T >
	T Lattice < T > :: diffXNbrs ( T * data, Nbr * nb, int idx) {
		T tdx; 
		tdx += data[ nb[idx].xr ] - data [ nb[idx].xl ]; //xr - xl
		return tdx; 
	}	

	template < class T >
	T Lattice < T > :: diffYNbrs ( T * data, Nbr * nb, int idx) {
		T tdx; 
		tdx += data[ nb[idx].yt ] - data [ nb[idx].yb ]; //xr - xl
		return tdx; 
	}	
	
	template < class T >
	T Lattice < T > :: diffZNbrs ( T * data, Nbr * nb, int idx) {
		T tdx; 
		tdx += data[ nb[idx].zb ] - data [ nb[idx].zf ]; //xr - xl
		return tdx; 
	}		
	
	template < class T >
	double Lattice < T > :: tensNbrs ( T * data, Nbr * nb, int idx) {
		double tdx; 
		tdx += data[ nb[idx].xr ][0] - data [ nb[idx].xl ][0]; //xr - xl
		tdx += data[ nb[idx].yt ][1] - data [ nb[idx].yb ][1]; //yt - yb
		tdx += data[ nb[idx].zb ][2] - data [ nb[idx].zf ][2]; //zb - zf
		return tdx; 
	}

//	template < class T >
//	T Lattice < T > :: euler ( const Lattice& f, T * data, const Pnt& p ) { 
//		Vxl vxl = _vxlOfPnt( p, f );
//		T tdx;
//		double fs = f.spacing() * f.spacing();
//		for (int i = 0; i < 8; ++i){
//			double w = Op::sca( p <= f.grid( vxl[i] ) )  / fs;
//			//cout << w <<  " \t";
//			tdx += data[ vxl[i] ] * ( 1 - w );
//		}
//		return tdx / 8.0;
//	}


	
	template < class T >
	bool Lattice < T > :: inBounds (Vec v) const {
		return 0;
	}
	
	template < class T >
	Lattice < T > Lattice < T > :: convolve(const Lattice& f ){	
		for (int i = 0; i < mNum; ++i){			
		}	
	}
	
//	template < class T >
//	bool Lattice < T > :: clickedData(int i, Dll dll){
//		return ( Ro::siz( dll ^ grid(i) ) < 0 ) ? 1 : 0;
//	}

//	template <>
//	bool Lattice < Drv > :: clickedData(int i, Dll dll){
//		return ( ( Ro::siz( dll ^ Ro::dls_pnt( grid(i) + data(i) ) ) ) < 0 ) ? 1 : 0;
//	}
	
	template < class T >
	void Lattice < T > :: drawLoop(){
		
		Vec3<> tmp (mPos[0], mPos[1], mPos[2]);		
		
		glPushMatrix();
			
			//glTranslated(tmp.x - tw()/2.0, tmp.y - th()/2.0, tmp.z + td()/2.0);			
			glTranslated(tmp.x, tmp.y, tmp.z);
        
			for (int i = 0; i < mNum; ++i){
				DRAW( mData[i] );	
			}
		
		glPopMatrix();
		
	}
	
	template < class T >
	void Lattice < T > :: drawPush(){
		Vec3<> tmp (mPos[0], mPos[1], mPos[2]);		
		
		glPushMatrix();
			glTranslated(tmp.x, tmp.y, tmp.z);
			for (int i = 0; i < mNum; ++i){
				glPushMatrix();
					GL::translate( mGrid[i].w() );
					DRAW( mData[i] );
				glPopMatrix();	
			}		
		glPopMatrix();		
	}
	
	template < class T >
	void Lattice < T > :: drawBounded(){
		Vec3<> tmp (mPos[0], mPos[1], mPos[2]);					
		glPushMatrix();			
			//glTranslated(tmp.x - tw()/2.0, tmp.y - th()/2.0, tmp.z + td()/2.0);			
			glTranslated(tmp.x, tmp.y, tmp.z);
			BEGIN_BOUNDED_LOOP	
				DRAW( mData[i] );	
			END_BOUNDED_LOOP
		glPopMatrix();	
	}
	
	template < class T >
	void Lattice < T > :: drawBoundedPush(){
		Vec3<> tmp (mPos[0], mPos[1], mPos[2]);		
		glPushMatrix();
			glTranslated(tmp.x, tmp.y, tmp.z);
			BEGIN_BOUNDED_LOOP
				glPushMatrix();
					GL::translate( mGrid[ix].w() );
					DRAW( mData[ix] );
				glPopMatrix();
			END_BOUNDED_LOOP
		glPopMatrix();		
	
	}
	
	template < class T >	
	void Lattice < T > :: drawMesh(int n, bool grid){	
		for (int i = 0; i < mNumVxl; ++i){
			drawVoxel ( mVxl[i], n, grid );
		}
	}

	template < class T >	
	void Lattice < T > :: drawMeshLoc(int n, bool grid){	
		for (int i = 0; i < mNumVxl; ++i){
			drawVoxelLoc ( mVxl[i], 0, n, grid );
		}
	}	
	template < class T >	
	void Lattice < T > :: drawMeshAllLoc(int n, bool grid){	
		for (int i = 0; i < mNumVxl; ++i){
			drawVoxelLoc ( mVxl[i], 1, n, grid );
		}
	}	


	template < class T >
	void Lattice < T > :: drawGrid(){
		for (int i = 0; i < mNum; ++i){
			DRAW( mGrid[i] );
		}
	}
	
	template < class T >
	void Lattice < T > :: drawFaces(bool grid){
		for (int i = 0; i < mNumFace; ++i){
			(grid) ? DRAW( mGrid[mFace[i]] ) : DRAW( mData[ mFace[i] ] );
		}
	}

	template < class T >
	void Lattice < T > :: drawEdges(bool grid){
		for (int i = 0; i < mNumEdge; ++i){
			(grid) ? DRAW( mGrid[mEdge[i]] ) : DRAW( mData[ mEdge[i] ] );
		}	
	}

	template < class T >
	void Lattice < T > :: drawFaceLines(bool grid){
		glBegin(GL_LINES);
		for (int i = 0; i < mNumFace; ++i){
			(grid) ?  GL::vertex( mGrid[mFace[i]].w() ) : GL::vertex( mData[ mFace[i] ].w() );
		}
		glEnd();
	}

	template < class T >
	void Lattice < T > :: drawEdgeLines(bool grid){
		glBegin(GL_LINES);
		for (int i = 0; i < mNumEdge; ++i){
			grid ? GL::vertex( mGrid[mEdge[i]].w() ) : GL::vertex( mData[ mEdge[i] ].w() );
		}
		glEnd();	
	}	
	template < class T >
	void Lattice < T > :: diffusefwd(double rate, bool bounded){
			switch (bounded) {
			
				//unbounded
				case 0:
				//for each data member
				for (int i = 0; i < num(); ++i){
					T tdx;
					//sum up neighboring values
					for (int j = 1; j < 7; ++j){
						if ( nbr(i)[j] != -1 ) tdx += mData[ nbr(i)[j] ];
					}
					//subtract 6 times current value
					tdx -= mData[ i ] * 6;
					//multiply by rate
					tdx *= rate;
					//add to current value
					mData[i] += tdx;
				}
				break;
				//bounded 
				case 1:
				for (int i = 1; i < mWidth -1; ++ i) {
					for (int j = 1; j < mHeight -1; ++ j) {
						for (int k = 1; k < mDepth -1; ++ k) {
							int idx = _indexOf(i,j,k,*this);
							T tdx;
							//sum up neighboring values
							for (int m = 1; m < 7; ++m){
								if ( nbr(idx)[m] != -1 ) tdx += mData[ nbr(idx)[m] ];
							}
							//subtract 6 times current value
							tdx -= mData[ idx ] * 6;
							//multiply by rate
							tdx *= rate;
							//add to current value
							mData[idx] += tdx;
						}
					}
				}
				break;
			}	
	}


	//BACKWARD METHOD (STABLE) From STAM 1999
	template < class T >
	void Lattice < T > :: diffuse(double diff, double dt, bool bounded, bool neg){
	
		static int it = 20;

		double rate = diff * dt;// * num();
		if  (bounded) {
		
			//unbounded (toroidal?)
			//iterate
			for (int k = 0; k < it; ++k){
				//for each data member
				for (int i = 0; i < num(); ++i){
					T tdx;
					//sum up neighboring values
					for (int j = 1; j < 7; ++j){
						if ( nbr(i)[j] != -1 ) tdx += mData[ nbr(i)[j] ];
					}
					//multiply by (rate / 1 + 6*rate )
					tdx *= rate / (1 + 6*rate);
					//add to old value
					mData[i] = mPrev[i] + tdx;
				}
			}
			//break;
        } else {       
			//bounded 
			//iterate
			for (int n = 0; n < it; ++n){
				//cout << "BOUNDED:";
				BEGIN_BOUNDED_LOOP
				
					int idx = _indexOf(i,j,k,*this);
					T tdx;
					//sum up neighboring values
					for (int m = 1; m < 7; ++m){
						//if ( nbr(idx)[m] != -1 ) 
						tdx += mData[ nbr(idx)[m] ]; // Sum up neighbrs
					}
					//multiply by (rate )
					tdx *= rate;					
					//add to old value and divide by (1 + 6 * rate)
					mData[idx] = ( mPrev[idx] + tdx ) / (1 + 6*rate);
					
				END_BOUNDED_LOOP
				
				bound(mData, neg);
			}
			//break;
		}
	}
	

	//incompressibility of fluids
	template < class T >
	void Lattice < T > :: project( int it){
		
		double h = 1.0/w();
        
		T * tmp = new T[ num() ];         
        T nil;

		Sca * tmp1 = new Sca[ num() ];
		Sca * tmp2 = new Sca[ num() ];

		BEGIN_LOOP
			tmp1[ix][0] = 0;//nil;
		END_LOOP

		//Sum Pressure Differences of each Face (TENSOR)
		BEGIN_BOUNDED_LOOP
			tmp2[ix] = Sca( tensNbrs(mData, mNbr, ix) * ( h/ 2.0 ) );			
		END_BOUNDED_LOOP		
		bound(tmp,0); 		
		
		//Iterative Pressure Solver substracts pressure tensor out
		for (int i = 0; i < it; ++i){
			BEGIN_BOUNDED_LOOP
				tmp1[ix] = ( Lattice<Sca>::sumNbrs(tmp1, mNbr, ix) - tmp2[ix] )/ 6.0 ;
			END_BOUNDED_LOOP
			bound(tmp,0);
		}
		
		//Substract out result
		BEGIN_BOUNDED_LOOP
        
			mData[ix][0] -= ( Lattice<Sca>::diffXNbrs(tmp1, mNbr, ix)[0] / (h*2.0) );
			mData[ix][1] -= ( Lattice<Sca>::diffYNbrs(tmp1, mNbr, ix)[0] / (h*2.0) );
			mData[ix][2] -= ( Lattice<Sca>::diffZNbrs(tmp1, mNbr, ix)[0] / (h*2.0) );

		END_BOUNDED_LOOP
		bound(mData, 1);
        
        delete[] tmp;
        delete[] tmp1;
        delete[] tmp2;
	}
	
	template < class T > 
	void Lattice < T > :: fluid( double diff, double adv, double dt){
			swap();
			advect(*this, adv,1,1);
			project();
			swap();
			diffuse(diff,dt,1,1);
			project();		
	}

	
	template < class T >
	void Lattice < T > :: bound(T * pdata, bool neg){
		int i,j, ix, ix2, ixo, ixo2;

		//WALLS repeat inner settings OR reflect them back
		//z component
		//if(neg) cout <<"RE: " << endl;
		for ( i = 1; i < mWidth-1; ++i){
			for ( j = 1; j < mHeight-1; ++j ){
				ix = idx(i,j,0);  ix2 = idx(i,j,mDepth-1);
				
//				pdata[ix]  = (neg) ? pdata[ix+1]  * -1 : pdata[ix+1];//Op::re0( mData[ix+1], Dlp(0,0,1,od()) ) : mData[ix+1];			//FRONT
//				pdata[ix2] = (neg) ? pdata[ix2-1] * -1 : pdata[ix2-1];//Op::re0( mData[ix2-1], Dlp(0,0,1,od()) ) : mData[ix2-1];		//BACK
				pdata[ix] =  (neg) ?  Op::re( pdata[ix+1], Dlp(0,0,1,0) ) : pdata[ix+1];
				pdata[ix2] = (neg) ?  Op::re( pdata[ix2-1], Dlp(0,0,1,0) ) : pdata[ix2-1];

			}
		}
		//x component
		for ( i = 1; i < mWidth-1; ++i){
			for ( j = 1; j < mDepth-1; ++j ){
				 ix = idx(i,0,j);  ixo = idx(i,1,j); 
				 ix2 = idx(i,mHeight-1,j);  ixo2 = idx(i,mHeight-2,j);
				pdata[ix] = neg ? Op::re( mData[ixo], Dlp(0,1,0,0) ): mData[ixo];//pdata[ixo] * -1 : pdata[ixo]; //
				pdata[ix2] = neg ?  Op::re( mData[ixo2], Dlp(0,1,0,0) ): mData[ixo2];//pdata[ixo2] * -1 : pdata[ixo2];//			//RIGHT
			}
		}
		//y component
		for ( i = 1; i < mHeight-1; ++i){
			for ( j = 1; j < mDepth-1; ++j ){
				 ix = idx(0,i,j);  ixo = idx(1,i,j); 
				 ix2 = idx(mWidth-1,i,j);  ixo2 = idx(mWidth-2,i,j);		
				pdata[ix] = neg ?  Op::re( mData[ixo], Dlp(1,0,0,0) ) : mData[ixo];	//pdata[ixo] * -1 : pdata[ixo];//			//TOP
				pdata[ix2] = neg ? Op::re( mData[ixo2], Dlp(1,0,0,0) ) : mData[ixo2];//pdata[ixo2] * -1 : pdata[ixo2];//			//BOTTOM
			}
		}

		
		// EDGES Average Neighbors
		// FRONT
		for ( i = 1; i < mWidth-1; ++i){
			 ix = idx(i,0,0);
			pdata[ ix ] = ( pdata[ mNbr[ ix ].yt ] +  pdata[ mNbr[ ix ].zb ] ) / 2.0;	//BOTTOM		

			 ix = idx(i,mHeight-1,0);
			pdata[ ix ] = ( pdata[ mNbr[ ix ].yb ] +  pdata[ mNbr[ ix ].zb ]  ) / 2.0;   //TOP

			 ix = idx(i, mHeight-1, mDepth -1);
			pdata[ ix ] =  ( pdata[ mNbr[ ix ].yb ] +  pdata[ mNbr[ ix ].zf ] ) / 2.0;   //

			 ix = idx(i,0,mDepth-1);
			pdata[ ix ] = ( pdata[ mNbr[ ix ].yt ] +  pdata[ mNbr[ ix ].zf ] ) / 2.0;
		}
		
		for ( i = 1; i < mHeight-1; ++i){
			 ix = idx(0,i,0);
			pdata[ ix ] = ( pdata[ mNbr[ ix ].xr ] +  pdata[ mNbr[ ix ].zb ] ) / 2.0;

			 ix = idx(mWidth-1,i,0);
			pdata[ ix ] = ( pdata[ mNbr[ ix ].xl ] +  pdata[ mNbr[ ix ].zb ] ) / 2.0;

			 ix = idx(mWidth-1,i,mDepth-1);
			pdata[ ix ] = ( pdata[ mNbr[ ix ].xl] +  pdata[ mNbr[ ix ].zf ] ) / 2.0;

			 ix = idx(0,i,mDepth-1);
			pdata[ ix ] = ( pdata[ mNbr[ ix ].xr ] +  pdata[ mNbr[ ix ].zf ] ) / 2.0;
		}

		for ( i = 1; i < mDepth-1; ++i){
			 ix = idx(0,0,i);
			pdata[ ix ] = ( pdata[ mNbr[ ix ].yt ] +  pdata[ mNbr[ ix ].xr ] ) / 2.0;

			 ix = idx(mWidth-1,0,i);
			pdata[ ix ] = ( pdata[ mNbr[ ix ].yt ] +  pdata[ mNbr[ ix ].xl ] ) / 2.0;

			 ix = idx(mWidth-1,mHeight-1,i);
			pdata[ ix ] = ( pdata[ mNbr[ ix ].yb ] +  pdata[ mNbr[ ix ].xl ] ) / 2.0;

			 ix = idx(0,mHeight-1,i);
			pdata[ ix ] = ( pdata[ mNbr[ ix ].yb ] +  pdata[ mNbr[ ix ].xr ] ) / 2.0;
		}

		//corners average neighbors		
		for ( i = 0; i < 8; ++i){
			pdata [ mCorner[i] ] =  (neg) ? sumNbrs( pdata, mNbr, mCorner[i] ) / -1.0 : sumNbrs( pdata, mNbr, mCorner[i] ) / 3.0;
		}

		
	}


	//DRAW ROUTINES
	template< class T >
	void Lattice < T > :: drawVoxel(Vxl vxl, int s, bool grid){
			
		Lattice < T >& f = *this;
        Dls * g = f.grid();//(grid) ? f.grid() : f.data();
		int typ = vxl.type;
		//cout << vxl << endl;

			//FACES
			Poly4 fr = vxl.fr();
			Poly4 ba = vxl.ba();
			Poly4 ri = vxl.ri();
			Poly4 le = vxl.le();
			Poly4 to = vxl.to();
			Poly4 bo = vxl.bo();

			//NORMALS
			Dls frv = ( g[fr.a] + g[fr.b] + g[fr.c] + g[fr.d]  ) / 4.0;
			Dls bav = ( g[ba.a] + g[ba.b] + g[ba.c] + g[ba.d]  ) / 4.0;
			Dls riv = ( g[ri.a] + g[ri.b] + g[ri.c] + g[ri.d]  ) / 4.0;
			Dls lev = ( g[le.a] + g[le.b] + g[le.c] + g[le.d]  ) / 4.0;
			Dls tov = ( g[to.a] + g[to.b] + g[to.c] + g[to.d]  ) / 4.0;
			Dls bov = ( g[bo.a] + g[bo.b] + g[bo.c] + g[bo.d]  ) / 4.0;

		(s) ? glBegin(GL_QUADS) : glBegin(GL_LINE_LOOP);
			
			if (typ & _FRONT){

			GL::normal( frv.w() );
			GL::vertex( g[fr.a].w() );	
			GL::vertex( g[fr.b].w() );	
			GL::vertex( g[fr.c].w() );	
			GL::vertex( g[fr.d].w() );	
			}
		glEnd();

		(s) ? glBegin(GL_QUADS) : glBegin(GL_LINE_LOOP);
			
			if (typ & _LEFT){
			GL::normal( lev.w() );
			GL::vertex( g[le.a].w() );	
			GL::vertex( g[le.b].w() );	
			GL::vertex( g[le.c].w() );	
			GL::vertex( g[le.d].w() );
			}
		glEnd();

		(s) ? glBegin(GL_QUADS) : glBegin(GL_LINE_LOOP);

			if (typ & _TOP){
			GL::normal( tov.w() );			
			GL::vertex( g[to.a].w() );	
			GL::vertex( g[to.b].w() );	
			GL::vertex( g[to.c].w() );	
			GL::vertex( g[to.d].w() );
			}
		glEnd();


		(s) ? glBegin(GL_QUADS) : glBegin(GL_LINE_LOOP);

			if (typ & _BACK){
			GL::normal( bav.w() );
			GL::vertex( g[ba.a].w() );	
			GL::vertex( g[ba.b].w() );	
			GL::vertex( g[ba.c].w() );	
			GL::vertex( g[ba.d].w() );	
			}
		glEnd();


		(s) ? glBegin(GL_QUADS) : glBegin(GL_LINE_LOOP);

			if (typ & _RIGHT){
			GL::normal( riv.w() );
			GL::vertex( g[ri.a].w() );	
			GL::vertex( g[ri.b].w() );	
			GL::vertex( g[ri.c].w() );	
			GL::vertex( g[ri.d].w() );
			}
		glEnd();

		(s) ? glBegin(GL_QUADS) : glBegin(GL_LINE_LOOP);

			if (typ & _BOTTOM){
			GL::normal( bov.w() );			
			GL::vertex( g[bo.a].w() );	
			GL::vertex( g[bo.b].w() );	
			GL::vertex( g[bo.c].w() );	
			GL::vertex( g[bo.d].w() );
			}
		glEnd();
					
	}

	//DRAW ROUTINES
	template< class T >
	void Lattice < T > :: drawVoxelLoc(Vxl vxl, bool bAll, int s, bool grid){
		/*	
		Lattice < T >& f = *this;
		Dls * g = (grid)? f.grid() : f.data();
		int typ = (bAll) ? _ALLSIDES : vxl.type;


			Poly4 fr = vxl.fr();
			Poly4 ba = vxl.ba();
			Poly4 ri = vxl.ri();
			Poly4 le = vxl.le();
			Poly4 to = vxl.to();
			Poly4 bo = vxl.bo();

			//normals
			
			MonoFunc func = Ro::cen;
			
			if (typ & _FRONT){
				State frv = ( g[fr.a] + g[fr.b] + g[fr.c] + g[fr.d]  ) / 4.0;
				(s) ? glBegin(GL_QUADS) : glBegin(GL_LINE_LOOP);
					GL::normal( frv.w() );
					GL::vertex( func( g[fr.a] ).w() );	
					GL::vertex( func( g[fr.b] ).w() );	
					GL::vertex( func( g[fr.c] ).w() );	
					GL::vertex( func( g[fr.d] ).w() );	
				glEnd();
			}

			
			if (typ & _LEFT){
				State lev = ( g[le.a] + g[le.b] + g[le.c] + g[le.d]  ) / 4.0;
				(s) ? glBegin(GL_QUADS) : glBegin(GL_LINE_LOOP);
					GL::normal( lev.w() );
					GL::vertex( func( g[le.a] ).w() );	
					GL::vertex( func( g[le.b] ).w() );	
					GL::vertex( func( g[le.c] ).w() );	
					GL::vertex( func( g[le.d] ).w() );
				glEnd();
			}

			if (typ & _TOP){
				State tov = ( g[to.a] + g[to.b] + g[to.c] + g[to.d]  ) / 4.0;
				(s) ? glBegin(GL_QUADS) : glBegin(GL_LINE_LOOP);
					GL::normal( tov.w() );			
					GL::vertex( func( g[to.a] ).w() );	
					GL::vertex( func( g[to.b] ).w() );	
					GL::vertex( func( g[to.c] ).w() );	
					GL::vertex( func( g[to.d] ).w() );
				glEnd();
			}


			if (typ & _BACK){
				State bav = ( g[ba.a] + g[ba.b] + g[ba.c] + g[ba.d]  ) / 4.0;
				(s) ? glBegin(GL_QUADS) : glBegin(GL_LINE_LOOP);
					GL::normal( bav.w() );
					GL::vertex( func( g[ba.a] ).w() );	
					GL::vertex( func( g[ba.b] ).w() );	
					GL::vertex( func( g[ba.c] ).w() );	
					GL::vertex( func( g[ba.d] ).w() );	
				glEnd();

			}


			if (typ & _RIGHT){
				State riv = ( g[ri.a] + g[ri.b] + g[ri.c] + g[ri.d]  ) / 4.0;
				(s) ? glBegin(GL_QUADS) : glBegin(GL_LINE_LOOP);
					GL::normal( riv.w() );
					GL::vertex( func( g[ri.a] ).w() );	
					GL::vertex( func( g[ri.b] ).w() );	
					GL::vertex( func( g[ri.c] ).w() );	
					GL::vertex( func( g[ri.d] ).w() );
				glEnd();
			}

			if (typ & _BOTTOM){
				State bov = ( g[bo.a] + g[bo.b] + g[bo.c] + g[bo.d]  ) / 4.0;			
				(s) ? glBegin(GL_QUADS) : glBegin(GL_LINE_LOOP);
					GL::normal( bov.w() );			
					GL::vertex( func( g[bo.a] ).w() );	
					GL::vertex( func( g[bo.b] ).w() );	
					GL::vertex( func( g[bo.c] ).w() );	
					GL::vertex( func( g[bo.d] ).w() );
				glEnd();
			}
            */	
	}
	
//	template class Lattice < Frame >;
	template class Lattice < Pnt >;
	template class Lattice < Drv >;
	template class Lattice < Drb >;
	template class Lattice < Biv >;
	template class Lattice < Dll >;
	template class Lattice < Tnv >;
	template class Lattice < Tnb >;
	template class Lattice < Cir >;
	template class Lattice < Par >;
	template class Lattice < Sph >;
	template class Lattice < Vec >;
	template class Lattice < Sca >;

}

//	template < class T >
//	void Lattice < T > :: drawWarp(){
//		for (int i = 0; i < mNumVxl; ++i){
////			drawVoxel2(mVxl[i]);
//		}
//	}

//	template < class T>
//	void Lattice < T > :: drawVoxel2(Vxl vxl, bool s){
//	
//		
//		Lattice < T >& f = *this;
//		(s) ? glBegin(GL_QUADS) : glBegin(GL_LINE_LOOP);
//		
////			GL::vertex( f[vxl.a].pos().w() );	
////			GL::vertex( f[vxl.b].pos().w() );	
////			GL::vertex( f[vxl.c].pos().w() );	
////			GL::vertex( f[vxl.d].pos().w() );	
////
////			GL::vertex( f[vxl.e].pos().w() );	
////			GL::vertex( f[vxl.f].pos().w() );	
////			GL::vertex( f[vxl.g].pos().w() );	
////			GL::vertex( f[vxl.h].pos().w() );	
////
////			GL::vertex( f[vxl.a].pos().w() );	
////			GL::vertex( f[vxl.b].pos().w() );	
////			GL::vertex( f[vxl.f].pos().w() );	
////			GL::vertex( f[vxl.e].pos().w() );	
////			
////			GL::vertex( f[vxl.c].pos().w() );	
////			GL::vertex( f[vxl.d].pos().w() );	
////			GL::vertex( f[vxl.h].pos().w() );	
////			GL::vertex( f[vxl.g].pos().w() );	
////			
////			GL::vertex( f[vxl.a].pos().w() );	
////			GL::vertex( f[vxl.d].pos().w() );	
////			GL::vertex( f[vxl.h].pos().w() );	
////			GL::vertex( f[vxl.e].pos().w() );	
////		
////			GL::vertex( f[vxl.b].pos().w() );	
////			GL::vertex( f[vxl.c].pos().w() );	
////			GL::vertex( f[vxl.g].pos().w() );	
////			GL::vertex( f[vxl.f].pos().w() );	
//		glEnd();
//		
//		
//	}

/*

//		cout << vxl.a << " " <<
//		vxl.b << " " <<
//		vxl.c << " " <<
//		vxl.d << " " <<
//		vxl.e << " " <<
//		vxl.f << " " <<
//		vxl.g << " " <<
//		vxl.h << " " << endl;


	template<>
	void Lattice< Frame > :: init(){
		for (int i = 0; i < mNum; ++i){
			double t= i * 1.0/mNum;
			mData[i] = Frame f( Gen::mot_dll( Op::dl(Ori(1) ^ mGrid[i] ^ Inf(1)) );
		}
		
	}
	
	template<>
	void Lattice< Dll > :: init() {
		for (int i = 0; i < mNum; ++i){
			double t = i * 1.0 / mNum;
			mData[i] = Op::dl(mPGrid[i] ^ mPGrid[0]);			
		}
		
		networkData();
	
	}

	template<>
	void Lattice< Cir, Cir > :: init() {
		for (int i = 0; i < mNum; ++i){
			double t = i * 1.0 / mNum;
			mData[i] = Op::dl(mPGrid[i] ^ mPGrid[0]);			
			mLattice[i] = Op::dl(mPGrid[i] ^ mPGrid[mNum-1]);
		}
		
		networkData();
	
	}
	
	//Scalars
	template <>
	void Lattice < double > :: init(){			
		for (int i = 0; i < mNum; ++i){
			double t = i * 1.0 / mNum;
			mData[i] = t;			
			mLattice[i] = mGrid[i];
		}
		networkLattice();
	}
	
	//Points Dispersed in A Continuous Direction Lattice
	template <>
	void Lattice < Pnt, Drv > :: init(){			
		for (int i = 0; i < mNum; ++i){
			mData[i] = Ro::null ( mGrid[i] );
			mLattice[i] = Drv ( mGrid[i] );
		}		
		networkData();		
		networkLattice();
	}
	
	//Points Dispersed in a Continuous Tangent Vector Lattice
	template<>
	void Lattice < Pnt, Tnv > :: init(){		
		for (int i = 0; i < mNum; ++i){
			mData[i] = Ro::null ( mGrid[i] );
			mLattice[i] = Tnv ( mGrid[i] );
		}
		networkData();		
		networkLattice();
	}
	
	//Dual Circles Dispersed in a Continuous Tangent Vector Lattice
	template<>
	void Lattice < Par, Tnv > :: init(){		
		for (int i = 0; i < mNum; ++i){
			mData[i] = Ro::par ( mGrid[i], mSpacing );
			mLattice[i] = Tnv ( mGrid[i] );
		}
		networkData();		
		networkLattice();
	}
	
	//Vectors Dispersed in A Vector Lattice
	template <>
	void Lattice < Vec, Vec > :: init(){			
		for (int i = 0; i < mNum; ++i){
			mLattice[i] = mGrid[i];
			mData[i] = mGrid[i];
		}
		networkData();		
		networkLattice();
	}
	
	//Vectors Dispersed in A Direction Lattice (
	template <>
	void Lattice < Vec, Drv > :: init(){			
		for (int i = 0; i < mNum; ++i){
			mLattice[i] = mGrid[i];
			mData[i] = mGrid[i];
		}
		networkData();		
		networkLattice();
	}
	
	//Dual Spheres or points Dispersed in a Dual Sphere Lattice
	template <>
	void Lattice < Dls, Dls > :: init(){	
				
		for (int i = 0; i < mNum; ++i){
			double t = i * 1.0 / mNum;
			//different pnts
			mData[i] = Ro::null ( mGrid[i] );
			//different weight spheres				
			mLattice[i] = Ro::dls ( mGrid[i], .2) * t;
		}
		
		networkData();		
		networkLattice();
	}

	// Pnts Dispersed in a Dual Lin Lattice (Twist Lattice)
	template <>
	void Lattice < Pnt, Dll > :: init(){	
				
		for (int i = 0; i < mNum; ++i){
			mData[i] = Ro::null ( mGrid[i] );
			mLattice[i] = Op::dl(mData[i] ^ Vec(0,0,1) ^ Inf(1));
		}
		
		networkData();		
		networkLattice();
	}

	// Pnts Dispersed in a Biv Lattice (Magnetics)
	template <>
	void Lattice < Pnt, Biv > :: init(){	
				
		for (int i = 0; i < mNum; ++i){
			mData[i] = Ro::null(mGrid[i]);
			mLattice[i] = Op::dl(mGrid[i]);
		}
		
		networkData();		
		networkLattice();
	}
	
	template<>
	void  Lattice < Par, Par > :: init(){
		for (int i = 0; i < mNum; ++i){
			mData[i] = Ro::null(mGrid[i]) ^ Ro::null(mGrid[0]);
			mLattice[i] = Ro::null(mGrid[i]) ^ Ro::null(mGrid[mNum-1]);
		}
		
		networkData();		
		networkLattice();
	}

	template<>
	void  Lattice < Biv, Biv > :: init(){
		for (int i = 0; i < mNum; ++i){
			mData[i] = Op::dl(mGrid[i]);
			mLattice[i] =  Op::dl(mGrid[i]);
		}
		
		networkData();		
		networkLattice();
	}

	template<>
	void  Lattice < Biv, Biv > :: drawLoop(){
		for (int i = 0; i < mNum; ++i){
			mData[i].draw();
			mLattice[i].draw();
		}
	}
	
		template <>
	void Lattice < double, Vec3<> > :: drawLoop(){
		
		glPushMatrix();			
			glTranslated(mPos[0], mPos[1], mPos[2]);
			
			for (int i = 0; i < mNum; ++i){
				double c = mData[i];				
				glColor3f(c,1,1-c);				
				Glyph::Point(mLattice[i]);
			}
		
		glPopMatrix();
		
	}
	
	template<>
	void Lattice< Pnt, Dll > :: drawLoop(){
		glPushMatrix();			
			glTranslated(mPos[0], mPos[1], mPos[2]);
			
			for (int i = 0; i < mNum; ++i){
				mData[i].draw();			
				mLattice[i].draw();
			}
		
		glPopMatrix();	
	
	}
	
	template<>
	void Lattice< Pnt, Biv > :: drawLoop(){
	
		//cout << "Lattice DRAWN" << endl;
		glPushMatrix();			
			glTranslated(mPos[0], mPos[1], mPos[2]);
			
			for (int i = 0; i < mNum; ++i){
				mData[i].draw();
				glPushMatrix();			
					glTranslated(mPGrid[i][0], mPGrid[i][1], mPGrid[i][2]);
					mLattice[i].draw();
				glPopMatrix();
				//drawGrid();
			}
		
		glPopMatrix();	
	
	}	
	
	template<>
	void Lattice < Par > :: drawLoop(){
				//cout << "Lattice DRAWN" << endl;
		glPushMatrix();			
			glTranslated(mPos[0], mPos[1], mPos[2]);
			
			for (int i = 0; i < mNum; ++i){
				mData[i].draw();
				glPushMatrix();			
					glTranslated(mGrid[i][0], mGrid[i][1], mGrid[i][2]);
					mLattice[i].draw(); mData[i].draw();
				glPopMatrix();
				//drawGrid();
			}
		
		glPopMatrix();		
	}

*/

