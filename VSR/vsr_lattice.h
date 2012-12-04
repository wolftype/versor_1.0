/*
 *  LATTICE.h
 *  
 *
 *  Created by Pablo Colapinto on 1/28/10.
 *  Copyright 2010 x. All rights reserved.
 *
 */
 
/*!
	
    
    THIS FILE IS DEPRECATED AND BEING REPLACED BY VSR_FIELD.H
    
	A templated 1, 2 or 3D array of multivectors.
	
	Lattice includes diffusion, advection, projection functions for conservation
	laws.  It can be used to generate a field of bivector generators, for instance.
	Can create Gauge Lattices out of Lie Algebras, quantized results are Gauge Bosons, etc.
	
	Builds 1, 2, 3 or n dimensional Lattices of data as single arrays of
		
		Vecs or Matrices
		
		Scalars,
		Vectors,
		Bivectors,
		Trivectors,
		Lie Type Generators (Rotors, Motors, Translators, Transversions)
		
		Conformal Elements (Flats, Directions, Rounds, Point Pairs)
		Or Multivectors in general
		
	A Combination of elements by templating it as a Lattice of Multivectors or Bases is possible
	(000 = scalar, 001 = vector, 011 = bivector, etc)
	
	The Lattice could thereby  have different types of effects at different points - some which rotate, some which screw,
	some which spin a particle.
	
	Two Lattices should be able to influence each other -- a Lattice of scalars, for instance, could serve as a gradient on top
	of another Lattice of directions (effectively weighting them
	
	To Do:
		operators:  multiply, add etc, 
					convolve, correlate, transform (into power spectrum),
					BSP using hyperbolic indexing
					wavelets ('surflets') that taper to zero.

					
	Since Lattices may be of different dimensions, that info should be used to interpolate the effects, so some
	interpolation curves are needed.
	
	Basic abilities to jump to neighbor, or to all four neighbors, or to diagonal neighbors, a la space group geometry

	Integration:
	
	The particle only needs to know which cell it is currently in, and integrate over the differential parameters of 
	some number of neighboring cells (a single particle could also integrate over the whole Lattice
				
	Default Setting is a Vector Lattice (of Euclidean Vectors) 
	
	A 3D "Direction" Vector Lattice can be parameterized as three functions of f(X,Y,Z) g(X,Y,Z) and h(X,Y,Z), 
	specifying the x,y,z direction
	of the vectore 
		
		
	Notes:  Instead of Voxels ( and vxlAt(vec) ) uses Spheres at each lattice point 
	with radius of spread - perhaps spheres of charge q+ or q, or just varying density - 
	(sources and sinks, or vector potential voltage Lattice)  
	
	Maxwell famously related electric fields (displacement currents) to magnetic fields
	
	
*/ 

#ifndef VSR_LATTICE_H_INCLUDED
#define VSR_LATTICE_H_INCLUDED

//#include "vsr_gl.h"
#include "vsr_gfxdata.h"

#include "vsr.h"
#include "vsr_op.h"
#include "vsr_frame.h"
#include "vsr_matrix.h"

//#include "vsr_draw.h"

using std::ostream;

namespace vsr {

	enum {
		_LEFT	= 1,
		_RIGHT	= 1 << 1,
		_BOTTOM	= 1 << 2,
		_TOP	= 1 << 3,
		_FRONT	= 1 << 4,
		_BACK	= 1 << 5,
		_ALLSIDES = _LEFT | _RIGHT | _BOTTOM | _TOP | _FRONT | _BACK
	};

	
	//When Templating, Predeclare all friends so compiler knows these are templated functions as well
	template < class T > class Lattice;
	template < class T > ostream& operator << (ostream& os, const Lattice< T >&);

	template < class T = Vec > 
	class Lattice : public Frame {
	
		protected:
			
			//parameters of the Lattice
			int mWidth, mHeight, mDepth, mNum, mDim, mNumVxl, mType;
            int mNumFace, mNumEdge;

            float mSpacing;			

			//data array
			T	* mData;
			//last timestep
			T	* mPrev;

			//vxl access
			Vxl * mVxl;
			//nbr access
			Nbr * mNbr, *mVNbr;
			
			//Fixed Reference (spheres)
			Dls * mGrid;
			
            vector <int> mFace;
			vector <int> mEdge;
			vector <int> mCorner;
			vector <int> mFaceVxl;
			vector <int> mEdgeVxl;
			vector <int> mCornerVxl; 						
								
            /// Routines to Find Face and Edge Boundary 
			void vxlFE( Nbr nb );
			void FE(Nbr nb );

        //Deprecated 
        //            void facesAndEdges( Nbr nb, int *, int *);
        //			void facesAndEdgesVxl( Nbr nb, int *, int *);	
			
		public:
		
			Lattice();
			~Lattice();			
			Lattice (int w, int h, int d, float s =.1);
			void resize(int w, int h, int d, float s = .1);
			
            /*! Allocate Memory */
            void alloc();
            /*! Initialize or Reset */
			void init();
			/*! copy into "previous" container */
			void copyPrev();
			/*! Swap Previous and Current Values */
			void swap() { T * tmp = mPrev; mPrev = mData; mData = tmp; }
			
			/*! Add All Data to Scene Observer Chain (so it can access Scene Data) */
//			void networkData(){ 
//				for (int i = 0; i < mNum; ++i) {
//					mNetwork.push_back((Observer*)&(mData[i]));
//					mNetwork.push_back((Observer*)&(mPrev[i]));  
//				}
//			}
        
            bool hit(Pnt p, int idx, double threshold = 0) { return ( ( p <= mGrid[idx] )[0] <= threshold ) ? 1 : 0; }
					
			/*! Set Data by Index*/
			T&	operator [] (int i)	{ return ( ( (T*) mData ) [i] ); }
			/*! Get Data by Index*/						
			T	operator [] (int i) const { return ( (T*) ( mData ) ) [i]; }
			
			/*! Set Data by Coordinate */
			T&  at(int w = 0, int h = 0, int d = 0) { return (*this)[ idx(w, h, d)  ]; }   
			/*! Get Data by Coordinate */
			T	at(int w = 0, int h = 0, int d = 0) const { return (*this)[ idx(w, h, d)  ]; }  

			/*! Return Ptr to Current Data */
			T * data()		{ return mData; }
			/*! Return Ptr to Previous Data */
			T * prev()		{ return mPrev; }
			/*! Return Ptr to Grid */
			Dls * grid()    { return mGrid; }
			/*! Return Ptr to Voxels */
			Vxl * vxl()		{ return mVxl;  }
			/*! Return Face Idxs */
			//int * face() { return mFace; }
			int face(int idx) const { return mFace[idx]; } 
			/*! Return Edge Idxs */
			//vector <int>& edge() { return mEdge; }
			int edge(int idx) const { return mEdge[idx]; } 
			/*! Return Corner Idx */
			int corner(int idx) const { return mCorner[idx]; }
			vector<int>& corner() { return mCorner; }
			/*! Return Face Vxl Idxs */
			//int * faceVxl() { return mFaceVxl; }
			int faceVxl(int idx) const { return mFaceVxl[idx]; }
			/*! Return Edge Vxl Idxs */
			//int * edgeVxl() { return mEdgeVxl; }
			int edgeVxl(int idx) const { return mEdgeVxl[idx]; }

			
			T& prev(int idx)		{ return mPrev[idx]; }		T prev(int idx)   const { return mPrev[idx]; }
			Dls& grid(int idx)      { return mGrid[idx]; }		Dls grid(int idx) const { return mGrid[idx]; }
			T& data(int idx)		{ return mData[idx]; }		T data(int idx)	  const { return mData[idx]; }
			Nbr& nbr(int idx)		{ return mNbr[idx];  }  Nbr nbr(int idx)  const { return mNbr[idx];  }

			Vxl& vxl(int idx)		{ return mVxl[idx];  }  Vxl vxl(int idx)  const { return mVxl[idx];  }
			Nbr& vnbr(int idx)		{ return mVNbr[idx]; }  Nbr vnbr(int idx) const { return mVNbr[idx]; }
			
			/*! Get vxl position (eight indexes) of position vector v in Lattice*/
			template < class S > 
			static Vxl _vxlOfVec( const Vec&, const Lattice<S>&);
			/*! Get vxl position (eight indexes) of position point p */
			template < class S > 
			static Vxl _vxlOfPnt( const Pnt&, const Lattice<S>&);
            
            /*! Get BL idx at eval u,v,w */
            T surf(double u, double v){
            
                double pw = 1.0 / ( mWidth-1);
                double ph = 1.0/ ( mHeight-1);
                //double pd = 1.0 / mDepth;
                
                double fw = u / pw;
                double fh = v / ph;
                //double fd = w / pd;
                
                int iw = floor ( fw );
                int ih = floor ( fh );
                //int id = floor ( fd );
               // cout << iw << " " << ih << endl; 
                
                double rw = fw - iw;
                double rh = fh - ih;
                //double rd = fd - id;
               // cout << rw << " " << rh << endl; 
                
                T a = at ( iw, ih, 0 );
                T d = at ( iw, ih + 1, 0 );
                T b = at ( iw + 1, ih, 0 );
                T c = at ( iw + 1, ih + 1, 0 );
                
                return Interp::surface<T> (a,b,c,d, rw, rh);
            }
            
            Pnt surfpnt(double u, double v){
                 
                double pw = 1.0 / ( mWidth-1);
                double ph = 1.0/ ( mHeight-1);
                //double pd = 1.0 / mDepth;
                
                double fw = u / pw;
                double fh = v / ph;
                //double fd = w / pd;
                
                int iw = floor ( fw );
                int ih = floor ( fh );
                //int id = floor ( fd );
               // cout << iw << " " << ih << endl; 
                
                double rw = fw - iw;
                double rh = fh - ih;
                //double rd = fd - id;
               // cout << rw << " " << rh << endl; 
                
                Pnt a = grid( idx ( iw, ih, 0 ) );
                Pnt d =grid( idx ( iw, ih + 1, 0 ));
                Pnt b = grid( idx (  iw + 1, ih, 0 ));
                Pnt c = grid( idx (  iw + 1, ih + 1, 0 ));
                
                return Ro::null( Interp::surface<Pnt> (a,b,c,d, rw, rh) );       
            }
			
            Pnt pnt(double u = 0, double v = 0, double w = 0){
                double x = -ow() + tw() * u;
                double y = -oh() + th() * v;
                double z = od() - td() * w;
                return Ro::null(x,y,z);
            }
            
			/*! Get Vec valued offset of point p from vxls */
			Vec offset(const Pnt& p);
			
			/*! get weighted (distance squared) values of current position p */
			T euler ( const Pnt& ) const;
			/*! get weighted (distance squared) values of previous position p */
			T eulerPrev ( const Pnt& ) const;
			/*! get neighbor values */
			T sumNbrs(int idx) { T tdx; for (int i = 1; i < 7; ++i){ if (mNbr[idx][i] != -1 ) tdx += mData[ mNbr[idx][i] ]; }  return tdx; }
			/*! get neighbor values of mPrev (previous) data */
			T sumNbrsPrev(int idx) { T tdx; for (int i = 1; i < 7; ++i){ if (mNbr[idx][i] != -1 ) tdx += mPrev[ mNbr[idx][i] ]; } return tdx; }
			
			/*! Sum of Neighbors of T data */
			static T sumNbrs(T * data, Nbr * nb, int idx) ;
        
			/*! Tensor Difference of Neighbors of T data */
			static T diffNbrs(T * data, Nbr * nb, int idx) ;
			static T diffXNbrs(T * data, Nbr * nb, int idx) ;
			static T diffYNbrs(T * data, Nbr * nb, int idx) ;
			static T diffZNbrs(T * data, Nbr * nb, int idx) ;

			/*! Tensor Sum of Differences in XYZ directions */
			static double tensNbrs(T * data, Nbr * nb, int idx) ;
			
			/*! Interpolate Voxel's Average in Lattce F, using data, at Point p*/
			template < class S >
			static T euler(const Lattice< S > & f, T * data, Pnt& p) ;

			/*! Interpolate Voxel's Average in Lattice F, using data, at Point p (using just one voxel)*/
			template < class S >
			static T localEuler(const Lattice< S > & f, T * data, Pnt& p) ;
			
			/*! Tensor of Current Data Step at Index idx */
			T diffNbrs(int idx) { 
				T tdx; 
				tdx += mData[ mNbr[idx].xr ] - mData [ mNbr[idx].xl ]; //xr - xl
				tdx += mData[ mNbr[idx].yt ] - mData [ mNbr[idx].yb ]; //yt - yb
				tdx += mData[ mNbr[idx].zb ] - mData [ mNbr[idx].zf ]; //zb - zf
				return tdx;
			}
			
			/*! Tensor of Previous Data Step at Index idx */
			T diffNbrsPrev(int idx) { 
				T tdx; 
				tdx += mPrev[ mNbr[idx][2] ] - mPrev[ mNbr[idx][1] ]; 
				tdx += mPrev[ mNbr[idx][4] ] - mPrev[ mNbr[idx][3] ]; 
				tdx += mPrev[ mNbr[idx][6] ] - mPrev[ mNbr[idx][5] ];
				return tdx;
			}
			
			/*! Voxel of Vector v */						
			Vxl vxl( Vec v ) const { return _vxlOfVec( v, *this ); }
			/*! Voxel of Point p */						
			Vxl vxlPnt( Pnt p ) const { return _vxlOfPnt( p, *this ); }			
			
			/*! Index of i,j,k in Lattice f */
			template < class S > 
			static int _indexOf(int w, int h, int d, const Lattice<S>& f);
			/*! Index of i,j,k */
			int idx( int w, int h, int d ) const { return _indexOf(w,h,d,*this); }
						
			static Vxl vxl ( const Vec& v, const Lattice& f);			///< Get Voxel of Vec v in Lattice f
			static Nbr nbr ( int idx, const Lattice& f, int typ = 0);	///< Create Neighbor of index idx in Lattice f of type typ
			static Nbr vnbr ( int idx, const Lattice& f, int type = 0); ///< Create Voxel Neighbor of voxel index idx in Lattice f of type typ
			int faceOrEdge( Nbr nb);			///< Bitflag of position
			
			/*! Use lattice f to get vec constrain of point p */
			template < class S > 
			static Vec limit( const Lattice< S > & f, const Pnt& p);

			bool inBounds( Vec v) const;		///< is Vec v inside bounds?

			int w() const { return mWidth; }	///< get width
			int h() const { return mHeight; }	///< get height
			int d() const { return mDepth; }	///< get depth
			
			/*! Get Grid Spacing */
			float spacing() const { return mSpacing; } 
			/*! Set Spacing of Grid */
			void spacing(double s) { mSpacing = s; init(); }
					
			/* Totals and Offsets From Center */
			/*! Total Width */
			float tw() const { return (mWidth-1) * mSpacing; }
			/*! Offset Width */
			float ow() const { return tw() / 2.0 ; }
			/*! Total Height */
			float th() const { return (mHeight-1) * mSpacing; }
			/*! Offset Height */
			float oh() const { return th() / 2.0 ; }
			/*! Total Depth */
			float td() const { return (mDepth-1) * mSpacing; }
			/*! Offset Depth */
			float od() const { return td() / 2.0 ; }//0;}//
			
			/*! Spatial Positions of ith element in x direction  */
			float px(int i) const { return -ow() + (mSpacing * i); }
			/*! Spatial Positions of jth element in y direction  */
			float py(int j) const { return -oh() + (mSpacing * j); }
			/*! Spatial Positions of kth element in z direction  */
			float pz(int k) const { return  od() - (mSpacing * k); }
		
			int num() const { return mNum; }					///< Number of Points
			int numVxl() const { return mNumVxl; }				///< Number of Voxels
			int numEdge() const { return mNumEdge; }			///< Number of Edge Points
			int numFace() const { return mNumFace; }			///< Number of Face Points
			int numEdgeVxl() const { return mEdgeVxl.size(); }	///< Number of Edge Voxels
			int numFaceVxl() const { return mFaceVxl.size(); }	///< Number of Face Voxels
			
			/*! Offset Jitter Coordinates by random percentage of +- s*/
			void jitter(double x = .5, double y = .5, double z = .5 );
			void jitterGrid(double s = .5);

			/*! Convolve with another Lattice (not yet implemented) */
			Lattice convolve(const Lattice&);			
			
			/*! Add Source val at idx */
			void source(T val, int idx) { mData[idx] += val; }
			
			/*! Diffuse w/ Backward Time Step */
			void diffuse(double diff,  double dt, bool bounded, bool neg);
			/*! Diffuse w/ Forward Time Step  */
			void diffusefwd(double rate, bool bounded = 1);
			
			/*! Advect (based on this or another field) */
			template < class S > 
			void advect(  Lattice < S > & v , double dt, bool bounded, bool neg);
			/*! Satisfy Incompressibility of Pressure Differences etc. */
			void project(int it = 20);
			/*! Satisfy Boundary Conditions (pass in a bool to negate inner field or not . . . */
			void bound(T * data, bool neg);
			
			/*! Self-Fluid Step */
			void fluid(double diff, double adv, double dt);
			
			/*! Verlet integration */
			void verlet();
			
			/*! Get Data Type */
			int type() const;

			virtual void drawLoop();
			void drawPush();	///< Push to Grid Position, then Draw Data
			void drawGrid();	///< Draw base grid (as spheres with radius = spacing)
			void drawMesh(int n = 0, bool grid = 0);	///< Draw Mesh with GL Quads, using data (default) or base grid points
			void drawMeshLoc(int n = 0, bool grid = 0);	///< Draw Mesh using Quads or Lines, using data or base grid points and loc alg
			void drawMeshAllLoc(int n = 0, bool grid = 0);	///< Draw Mesh using Quads or Lines, using data or base grid points and loc alg
			void drawVoxel(Vxl, int style = 1, bool grid=1);	///< Draw Voxel as quads using grid or data
			void drawVoxelLoc(Vxl, bool bAll = 0, int style = 1, bool grid=1); ///< Draw Voxel for round data elements (using Ro::cen)
//			void drawVoxelLocAllSides(Vxl, int style = 1, bool grid=1); ///< Draw Voxel for round data elements (using Ro::cen) all Sides
			void drawBounded();	///< draws inner data only
			void drawBoundedPush();	///< draw inner data only pushed to grid position
			void drawFaces(bool grid =0);	///< draw faces only of grid or data
			void drawEdges(bool grid =0);	///< draw edges only of grid or data
			void drawFaceLines(bool grid=0); ///< draw face of grid or data  using GL_LINES
			void drawEdgeLines(bool grid=0); ///< draw edges of grid or data using GL_LINES
			
			bool clickedData(int i, Dll dll);
			
			friend ostream& operator << <> (ostream& os, const Lattice< T >&);
	
	};
	
	template <class T >		
	ostream& operator << (ostream& os, const Lattice< T >& f){	
		os << f[0].name() << " lattice...\nwidth: " << f.w() 
		<< "\t height: " << f.h() << "\t depth: " << f.d() << endl;
		return os;	
	}

    //tmp defs to prevent compilation errors
    template<class T> int Lattice<T> :: type() const {return mData[0].idx; } 
    template<> int Lattice< Frame > ::type() const { return 0; }
    template< > void Lattice <Frame> ::diffusefwd(double d, bool bounded){} 
    template< > void Lattice <Frame> ::diffuse(double d, double dt, bool bounded, bool neg){}
    template< > void Lattice <Frame> ::project(int it){}
    template< > void Lattice <Frame> ::bound(Frame * pdata, bool neg){}
    template< > template < class S > void Lattice <Frame> :: advect( Lattice < S > & v, double dt, bool bounded, bool neg ) {}
    
    template<> Frame Lattice< Frame > :: surf(double u, double v){
            
        double pw = 1.0 / ( mWidth-1);
        double ph = 1.0/ ( mHeight-1);
        //double pd = 1.0 / mDepth;
        
        double fw = u / pw;
        double fh = v / ph;
        //double fd = w / pd;
        
        int iw = floor ( fw );
        int ih = floor ( fh );
        //int id = floor ( fd );
       // cout << iw << " " << ih << endl; 
        
        double rw = fw - iw;
        double rh = fh - ih;
        //double rd = fd - id;
       // cout << rw << " " << rh << endl; 
        
        Dll a = at ( iw, ih, 0 ).dll();
        Dll d = at ( iw, ih + 1, 0 ).dll();
        Dll b = at ( iw + 1, ih, 0 ).dll();
        Dll c = at ( iw + 1, ih + 1, 0 ).dll();
                
        return Gen::mot( Interp::surface<Dll> (a,b,c,d, rw, rh) );
            
    }

	//move according to another Lattice field v
	template < class T > template < class S >
	void Lattice < T > :: advect( Lattice < S > & v, double dt, bool bounded, bool neg ) {
		
		//for each cell we trace back a point through vector field v and collect interpolated info
		//currently assumes fields are same dimensions****
		Pnt s; Vxl vxl;
		
//        typedef Generic (*MonoFunc)(const Generic&);
//		MonoFunc func;
//		switch( v.type() ) {
//			case VEC:	func = Gen::trs<>;
//				break;
//			case BIV:	func = Gen::rot<Biv>;
//				break;
//			case DLL:	func = Gen::mot_dll;
//				break;
//			case TNV:	func = Gen::trv;
//				break;
//			case MNK:	func = Gen::dil;
//				break;
//			case DRV:	func = Gen::trs;
//				break;
//		}

		if(bounded){
        
			//case 0:
			for (int i = 0; i < num(); ++i){
				//create backwards transformation that location from v (type dependent)
				s = Op::sp( grid(i), Gen::trs( v[i] * -dt ) );
				mData[i] = euler(v, prev(), s); //eulerPrev(s);
			}
			//break;
			
        }
        else {//case 1:
			
			for (int m = 1; m < mWidth-1; ++m){
				for (int j = 1; j < mHeight-1; ++j){
					for (int k = 1; k < mDepth-1; ++k){
						int i = idx(m,j,k);
						//create backwards transformation that location from v (type dependent)						
//						else if ( v.type() == _SCA) s = grid(i) * v[i] * -dt;

						s = Op::sp( grid(i), Gen::trs( v[i] * -dt ) );						
						mData[i] = euler(v, prev(), s);
					}
				}
			}
			bound(mData, neg);	
        }
	}
    
    //////////////////////////// //////////////////////////// 
    //////////////////////////// EULER INTEGRATING

	template < class T > template < class S > 
	T Lattice < T > :: euler ( const Lattice< S > & f, T * data, Pnt& p ) { 

		//Limit of p in f
		Vec v = limit(f,p);							
        //Vxl of v in f
		Vxl vxl = _vxlOfVec( v, f );
        //x,y,z distance from lower front corner of vxl
		Vec tp = v - f.grid( vxl[0] ); 
        //Adjustment to Y direction and spacing
		tp[2] *= -1;
		tp /= f.spacing();
		
        
		double x = tp[0]; double xo = 1-x;
		double y = tp[1]; double yo = 1-y;
		double z = tp[2]; double zo = 1-z;
				
		T tdx =	(  ( data[ vxl.a ] * xo + data[vxl.b] * x ) * yo 
				 + ( data[ vxl.d ] * xo + data[vxl.c] * x ) * y   ) * zo
				 + ( ( data[ vxl.e ] * xo + data[vxl.f] * x ) * yo
				 + ( data[ vxl.h ] * xo + data[vxl.g] * x ) * y  ) * z;	
		
		return tdx;//Op::err( tdx ) ;
	}
	
	template < class T > template < class S > 
	T Lattice < T > ::  localEuler ( const Lattice< S > & f, T * data, Pnt& tp ) { 
		
		static Vxl vxl(0,1,2,3,4,5,6,7);
		
		double x = tp[0]; double xo = 1-x;
		double y = tp[1]; double yo = 1-y;
		double z = tp[2]; double zo = 1-z;				
				
		T tdx =	(  ( data[ vxl.a ] * xo + data[vxl.b] * x ) * yo 
				 + ( data[ vxl.d ] * xo + data[vxl.c] * x ) * y   ) * zo
				 + ( ( data[ vxl.e ] * xo + data[vxl.f] * x ) * yo
				 + ( data[ vxl.h ] * xo + data[vxl.g] * x ) * y  ) * z;	
		
		return tdx;//Op::err( tdx ) ;
	}


	template < class T > template < class S > 
	Vec Lattice <  T > :: limit ( const Lattice < S > & f, const Pnt& p){
		Vec v(p);        
        
		if ( v[0] < f.px(0) ) v[0] = f.px(0);// + f.spacing()/2.0;
        else if  ( v[0] > f.px(f.w()-1) ) v[0] = f.px(f.w()-1);// - f.spacing()/2.0;

		if ( v[1] < f.py(0) ) v[1] = f.py(0);// + f.spacing()/2.0;	
        else if ( v[1] > f.py(f.h()-1) ) v[1] = f.py(f.h()-1);// - f.spacing()/2.0;	
        
		if ( v[2] > f.pz(0) ) v[2] = f.pz(0);// - f.spacing()/2.0;
		else if ( v[2] < f.pz(f.d()-1) ) v[2] = f.pz(f.d()-1);// + f.spacing()/2.0;	

		return v;
	}	
    
    //////////////////////////// //////////////////////////// 
    //////////////////////////// INDEXING
    
	//what vxl are we in at vec v with regards to lattice f ?
	template < class T > template < class S > 
	Vxl Lattice < T > :: _vxlOfVec( const Vec& tv, const Lattice<S>& f ) {	
		
		Vxl vxl;
		
        Vec v = limit(f, tv);
		//Bottom - Left corner		
		int w = floor((v[0] + f.ow() ) / f.spacing() );
		int h = floor((v[1] + f.oh() ) / f.spacing() );
		int d = floor((-v[2] + f.od() ) / f.spacing() );
        
        if (w > f.w()-2) w = f.w() -2;
        if (h > f.h()-2) h = f.h() -2;
        if (d > f.d() -2) d = f.d() -2;

		vxl.a = _indexOf(w,h,d, f);
		vxl.b = _indexOf(w+1,h,d, f);
		vxl.c = _indexOf(w+1,h+1,d, f);
		vxl.d = _indexOf(w,h+1,d, f);

		vxl.e = _indexOf(w,h,d+1, f);
		vxl.f = _indexOf(w+1,h,d+1, f);
		vxl.g = _indexOf(w+1,h+1,d+1, f);
		vxl.h = _indexOf(w,h+1,d+1, f);
		
		return vxl;
	}
	
	template < class T > template < class S > 
	Vxl Lattice < T > :: _vxlOfPnt( const Pnt& p, const Lattice<S>& f )  {
		return _vxlOfVec(p,f);
	}
	
	//index of w h d
	template < class T > template < class S > 
	int Lattice < T > :: _indexOf(int w, int h, int d, const Lattice<S>& f){
		//limit bounds		
		if (w > f.w() - 1) w = f.w()  -1;
		if (h > f.h() - 1) h = f.h()  -1;
		if (d > f.d() - 1) d = f.d()  -1;

		if (w < 0 ) w = 0;
		if (h < 0 ) h = 0;
		if (d < 0 ) d = 0;
		
		return (w * f.h() * f.d() ) + (h * f.d()) + d; 
	}
} //vsr::
#endif
