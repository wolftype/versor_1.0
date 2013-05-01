//
//  Mesh.h
//  vsr
//
//  Created by Pablo Colapinto on 4/5/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef vsr_Mesh_h
#define vsr_Mesh_h

#include <iostream>
#include <fstream>
#include <sstream>

#include "vsr_frame.h"
#include "vsr_matrix.h"
#include "vsr_gl.h"
#include "vsr_glyph.h"
#include "vsr_interp.h"

using namespace std;

namespace vsr {
    
    //VERTEX DATA STRUCT
    struct Vertex {
        Vec3<float> Pos;        ///< 3d Position
        Vec3<float> Norm;       ///< 3d normal
        Vec4<float> Col;        ///< RGBA Color (could be uchar)
        Vec2<float> Tex;        ///< UV Coordinates
                
        Vertex(const Vec3f& pos = Vec3f(0,0,0), 
               const Vec3f& norm = Vec3f(0,0,1), 
               const Vec4f& col = Vec4f(1,1,1,1), 
               const Vec2f& tex = Vec2f(0,0) )  
        
        : Pos(pos), Norm(norm),  Col(col), Tex(tex) 
        
        {}
        
        Vertex(float x, float y, float z) : Pos(x,y,z), Norm(0,0,1), Col(1,1,1,1), Tex(0.0,0.0) {}
        
        float * pos() { return &Pos[0]; }
        float * col() { return &Col[0]; }
        float * norm() { return &Norm[0]; }
        float * tex() { return &Tex[0]; }
        
        static GLvoid * on() { return (GLvoid*)sizeof(Vec3f); }
        static GLvoid * oc() { return (GLvoid*)( 2 * sizeof(Vec3f) ) ; }
        static GLvoid * ot() { return (GLvoid*)( 2 * sizeof(Vec3f) + sizeof(Vec4f) ); }
//        static GLvoid * oc() { return (GLvoid*)( 2 * sizeof(Vec3f) ); }
//        static GLvoid * ot() { return (GLvoid*)( 3 * sizeof(Vec3f) ); }

        //friend ostream& operator << (ostream& os, Vertex v);
        void print() { cout <<  Tex << endl; }
    };
//    
//    inline ostream& operator << (ostream& os, Vertex v){
// //       stringstream td;
//        os << v.Pos; os << v.Norm; os << v.Col;
////        os << "pos: " << v.Pos << "norm: " << v.Norm << "col: " << v.Col;
//        
//        return os;
//    }
    
    struct Mesh { //: public Frame {
        
    private:
        
        /// Draw Mode
        GL::MODE mMode;
        
        /// Base Color
        Vec4f mColor;
        
        /// Vertices for VertexArray
        vector< Vertex > mVertex;
        
        ///Indices for ElementArray
        vector< unsigned int > mIndex;
        
        ///Storage of Points in GA format
       // vector< Vector > mPoint;
        
    public:
        
        void clear() {
            mVertex.clear();
            mIndex.clear();
        }
        /// Set Draw Mode
        void mode( GL::MODE m) { mMode = m; }
        
        /// Default Line Loop Mode
        Mesh(GL::MODE m = GL::LL) : mMode(m) {}
        
        Mesh(const Mesh& m){
            
            mMode = m.mMode;
            
            for (int i = 0; i < m.num(); ++i){
                mVertex.push_back( m[i] );
            }
            
            for (int i = 0; i < m.mIndex.size(); ++i){
                mIndex.push_back(m.mIndex[i]);
            }
        }
        
        /// Create Mesh from an OBJ file
        Mesh( string s) { load(s); }
                
        /// GETTER AND SETTER of VERTEX DATA
        Vertex& operator[] (int idx) { return mVertex[idx]; }
        Vertex operator[] (int idx) const { return mVertex[idx]; }
        
        unsigned int& idx(int ix) { return mIndex[ix]; }
        unsigned int idx(int ix) const { return mIndex[ix]; }
        
        int num() const { return mVertex.size(); }
        int numIdx() const { return mIndex.size(); }
        
        void color(float r, float g, float b, float a) { mColor.set(r,g,b,a); }
        
        //Add  vertices from another Mesh
        Mesh& add(const Mesh& m){
            for (int i = 0; i < m.num(); ++i) { add(m[i]); }
            for (int i = 0; i < m.numIdx(); ++i) { add( m.idx(i) ); }
        }
        
        Mesh& add(const Vertex& v) { mVertex.push_back(v); return *this;}        
        Mesh& add(const Vec3f& v) { mVertex.push_back( Vertex(v) ); return *this; }
        
        Mesh& add(const Vec& p, const Vec& n) { mVertex.push_back( Vertex( Vec3f(p), Vec3f(n) ) ); return *this; }
        
        Mesh& add(float x, float y, float z) { mVertex.push_back( Vertex( Vec3f(x,y,z) ) ); return *this; }
        //Mesh& add(const Vec& v) { mVertex.push_back( Vertex( Vec3f(v[0], v[1], v[2]) ) ); return *this; }
        
        //for line mesh, value at t [0,1]
        Vec3f at ( double t ) {
            double tidx = t * num();
            double idx = floor(tidx);
            double remainder = tidx - idx;
            return Interp::linear<Vec3f>( mVertex[idx].Pos, mVertex[idx+1].Pos, remainder );
        }
        
        /// ADD N VERTICES
        template<typename T>
        Mesh& add(typename vector<T>::iterator v, int n){
            for (int i = 0; i < n; ++i) { mVertex.push_back( Vertex( Vec3f( v[i][0], v[i][1], v[i][2] ) ) ); }
        }
        
        Mesh& add(Vec3f * v, int n) { 
            for (int i = 0; i < n; ++i) { mVertex.push_back( Vertex(v[i]) ); } 
            return *this;
        }
        
        /// Add Indices List
        Mesh& add(int idx) {
            mIndex.push_back(idx); return *this;
        }
        /// Add N Indices
        Mesh& add(int * idx, int n) {
            for (int i = 0; i < n; ++i) { mIndex.push_back( idx[i] ); } 
            return *this;
        }
        /// Add Last 
        Mesh& add(){ add( num() - 1 ); }
        
        GL::MODE mode() { return mMode; }
        
        vector<unsigned int>::iterator indices() { return mIndex.begin(); }        
        vector<Vertex>::iterator vertices() { return mVertex.begin(); }
        
        Vertex& last() { return mVertex[ mVertex.size() - 1 ]; }
        
        
        #ifdef GL_IMMEDIATE_MODE
        
        //immediate mode!
        void draw(float r = 1.0, float g = 1.0, float b = 1.0, float a = 1.0) {
            glColor4f(r,g,b,a);
            GL::Begin( mMode);
            for (int i = 0; i < mVertex.size(); ++i){
                GL::vertex( mVertex[i].Pos );
            }
            glEnd();
        }
        void drawElements() {
            GL::Begin( mMode);
            for (int i = 0; i < mIndex.size(); ++i){
                GL::vertex( mVertex[ mIndex[i] ].Pos );
            }
            glEnd();
        }
        
        #endif
                
        void translate(float x, float y, float z){
            
            for (int i = 0; i < num(); ++i){
                mVertex[i].Pos[0] -= x;
                mVertex[i].Pos[1] -= y;
                mVertex[i].Pos[2] -= z;
            }
        }
        
        
        //LOAD FROM OBJ FILE
        void load(string s) {
            
            string line;
            string fname = s;
            ifstream myfile(fname.c_str());
            
            cout << "loading " << s << " from " << fname << " . . . " <<  endl;
            
            if (myfile.is_open()){
                printf("file open . . .\n");
                while (!myfile.eof()){
                    
                    getline(myfile, line);
                    int in = line.find_first_of(" ");
                    string a = line.substr(0,in);
                    
                    if (a=="v"){
                        
                        stringstream s; s <<  string(line.substr(2));
                        Vec3<float> v;
                        s >> v[0];  
                        s >> v[1]; 
                        s >> v[2];
                        add(v);
                        
                    }
                    
                    if (a=="f"){
                        
                        
                    }
                    
                }
                myfile.close();            
            }
            
            printf("# of vertices: %d\n", (int)mVertex.size() );
        }    
    

        static Mesh Point(float x, float y, float z);
        static Mesh Grid(int w = 10, int h = 10, float spacing = .2);
        static Mesh Sphere(double rad = 1.0, int slices = 20, int stacks = 20);
        static Mesh Line( Vec a, Vec b);
        static Mesh Cone( double rad = 1.0 , double h = 1.0, int slices = 10, int stacks = 4);
        static Mesh Dir();
        static Mesh Circle(double scale = 1);
        static Mesh Disc(double scale = 1);        
        static Mesh Rect(float w, float h);
        static Mesh Cylinder(float r, float h, int slices = 20, int stacks = 2);
        
        /*! A Mesh of Skinned Circles 
            @param Pointer to an Circle array
            @param number of Circles in array
            @param resolution (default 100)
        */
        static Mesh Skin (Cir * cir, int num, int res = 100);
    };
    
    
    inline Mesh Mesh::Point(float x, float y, float z){
        Mesh m;
        m.add(x,y,z);
        m.mode( GL::P );
        return m;
    }
    
    inline Mesh Mesh::Grid(int w, int h, float spacing){
        Mesh m;
        float tw = spacing * w;
        float th = spacing * h;
        
        for (int i = 0; i < w; ++i){
            float tx = (-1.0 + 2.0 * i/w ) * tw;
            float ty = th/2.0;
            m.add(tx,-ty,0).add();
            m.add(tx,ty,0).add();
        }
        
        for (int i = 0; i < h; ++i){
            float ty = (-1.0 + 2.0 * i/h ) * th;
            float tx = tw/2.0;
            m.add(-tx,ty,0).add();
            m.add(tx,ty,0).add();
        }

        m.mode(GL::LS);
        return m;
    }
    
    inline Mesh Mesh::Sphere(double rad, int slices, int stacks){
        Mesh m;
                
        for (int i = 0; i <= stacks; ++i){
        
            float v = -1.0 + 2.0* i/stacks;
            
            for (int j = 0; j < slices; ++j){
                
                float u = 1.0* j/slices;
                Vec tv = Vec::x.sp( Gen::rot( PI * u, PIOVERFOUR * v) ) * rad;
                Vec n = tv.unit();
                m.add( tv, n );

                if (i == 0 || i == stacks) {
                    break;
                }
                                
            }
        }
        
        
        //BOTTOM 
        for (int j = 0; j < slices; ++j){
            m.add(j+1).add(0);
        }
        
        //m.add(1);
        
        for (int i = 0; i < stacks -1; ++i){
            static bool color = 0;
            color = !color;
            for (int j = 0; j < slices; ++j){
                static bool xcolor = 0;
                xcolor = !xcolor;                
                int a = 1 + i * slices + j;
                if (a == 0) continue;
                
                int b =  ( i < stacks - 2) ? a + slices : m.num() - 1;  // Higher Latitue or North Pole
                
               // int c = ( j < slices - 1 ) ? a + 1 : 1 + i * slices;
                
                int idx[2] = {a,b};
                m.add(idx,2);
                m[a].Col.set(color,xcolor,1,1);
                m[b].Col.set(color,xcolor,1,1);
            }
            m.add( 1 + i * slices );
        }
        
        
        m.last().Col.set(0,1,0,1);
        
        m.mode(GL::TS);
        return m;
    }
    
    inline Mesh Mesh::Line (Vec a, Vec b){
    
        Mesh m;
        m.add(a).add(b);
        m.add(0).add(1);
        m.mode( GL::LS );
        return m;
    }
    
    inline Mesh Mesh::Circle (double scale){
        
        int res = floor( scale * 100);
        Mesh m;
        
        for (int i = 0; i <= res; ++i){
            float rad = 2.0 * PI * i / res;
            float x = cos(rad);
            float y = sin(rad);
            
            m.add( Vec3f(x,y,0) );
            m.add(i);
            
        }
        
        m.mode(GL::LL);
        return m;
    }
    

    inline Mesh Mesh::Cone(double r, double h, int slices, int stacks){
        
        Mesh m;
        
        for (int i = 0; i <= stacks; ++i){
            float z = h * i / stacks;
            for (int j = 0; j < slices; ++j){
                float rad = 2.0 * PI * j / slices;
                float x = cos(rad) * (1.0-z) * r;
                float y = sin(rad)  * (1.0-z) * r;
                m.add( Vertex( Vec3f(x,y,z), Vec3f(x,y,z),Vec4f(1,1,1,1), Vec2f(z, 1.0* j/slices) ) );
                m.add(i * slices + j);
            }
            m.add(i*slices);
        }
        
        m.mode(GL::LL);
        return m;
    
    }


    inline Mesh Mesh::Dir(){
        Mesh m = Cone(.3);
        int n = m.num();
        m.add( Vec3f(0,0,-1) );
        m.add( n );
        m.translate(0,0,1);
        m.mode(GL::LS);
        return m;
    
    }

    inline Mesh Mesh::Disc (double scale){
        
        int res = floor( scale * 100);
        Mesh m;
        m.add( Vec3f(0,0,0) );
        
        for (int i = 0; i < res; ++i){
        
            float rad = 2.0 * PI * i / res;
            float x = cos(rad);
            float y = sin(rad);
            
            m.add( Vec3f(x,y,0) );
            
        }

        for (int i = 1; i < res; ++i){    
            int idx[2] = {i,0};
            m.add( idx, 2);
        }


        m.add(1);
        m.mode(GL::TS);
        
        return m;
    }
    
    inline Mesh Mesh::Rect (float w, float h) {
        
        Mesh m;
        
        Vec3f lb (-w/2.0, -h/2.0, 0 );
        Vec3f rb = lb + Vec3f(w,0,0);
        Vec3f rt = rb + Vec3f(0,h,0);
        Vec3f lt = rt - Vec3f(w,0,0);
        
        Vec3f normal(0,0,1);
        Vertex va( lt, normal, Vec4f(lt,1), Vec2f(0,0));
        Vertex vb( rt, normal,  Vec4f(lt,1), Vec2f(1,0));
        Vertex vc( rb, normal, Vec4f(lt,1), Vec2f(1,1));
        Vertex vd( lb,  normal, Vec4f(lt,1), Vec2f(0,1));
        
        m.add(va).add(vb).add(vc).add(vd);
        
        int idx[4] = {0,1,3,2};
        m.add(idx,4);
                
        m.mode(GL::TS);
        return m;
    }
    
    inline Mesh Mesh::Cylinder (float r, float height, int slices, int stacks){
   
        Mesh m;
        m.add( Vec3f(0,0,0) );

        for (int j = 0; j < slices; ++ j){
            float rad = 2.0 * PI * j / slices;
            float x = cos(rad) * r;
            float z = -sin(rad) * r;
        
            for (int i = 0; i < stacks; ++i){
                
                float y = height * i/stacks;
                
                m.add( Vec3f(x,y,z) );
                
                int idx[2] = {i,0};
                m.add(idx, 2);
                
            }
        }
        return m;
    }
    
    

    inline Mesh Mesh::Skin (Cir * cir, int num, int res){
        
        Mesh m;
        
        for (int i = 0;  i < res; ++i){
            double t= 1.0 * i/res;
            
            for (int j = 0; j < num; ++j){
                double jt = 1.0 * j/num;
                Vec v = Ro::pnt_cir( cir[j], TWOPI * t );
                m.add( v[0], v[1], v[2] );
                m.last().Col = Vec4f(t,jt,1-t,1.0);
                //cout << v << endl; 
            }
        }
        
        //Calc Indices (FOR TRIANGLE STRIP)
        int a,b,c,d;
        for (int i = 0; i < num-1; ++i){
            for (int j = 0; j < res; ++j){
            
                a = j * num + i;                //<-- current idx                        
                b = a + 1;                      //<-- next circle
                if (j>=res-1) { 
                   // cout << "has looped around" << endl; 
                    c = i + 1;
                    d = i;
                }
                else {
                    c = a + 1 + num ;           //<-- next on next circle
                    d = a + num ;               //<-- next on same circle
                }
                int idx[2] = {a,c};
                m.add(idx,2);
            }
            m.add(i).add(i+1+num);
        }                
        
        //calc normals
        for (int i = 0; i < res; ++i){
            for (int j = 0; j < num-1; ++j){
                a = i * num + j;        //<-- current idx
                b = a + 1;              //<-- same on next circle
                
                if (i>=res-1) { 
                    c = j + 1;
                    d = j;
                }
                else {
                    c = a + 1 + num ;           //<-- next on next circle
                    d = a + num ;           //<-- next on same circle
                }
                Vec3f ta = m[b].Pos - m[a].Pos;
                Vec3f tb = m[d].Pos - m[a].Pos;
                Vec3f tc = -ta.cross(tb);
                m[a].Norm = tc.unit();
                //cout << m[a].Norm[0] << " " << m[a].Norm[1] << " " <<  m[a].Norm[2] << endl;
            }
        }
        
        return m;
    
    }
    
    ///////////////
    ///////////////
    ///////////////
    ///////////////
    ///////////////
    
struct CirMesh{

    vector<Cir> vc;
    vector<Pnt> vp;
    int res;
    
    CirMesh& add(const Cir& c) { vc.push_back(c); return *this; }

    void skin() { 
        res = vc.size();
        for (int i = 0; i <= res; ++i){
            double t= 1.0 * i/res;
            for (int j = 0; j < res; ++j){
                vp.push_back( Ro::pnt_cir(vc[j], t * TWOPI) );
            }
        }
    }
    
    void draw(float r = .5, float g=.5, float b=.5, float a = 1.0) {
        for(int i = 0; i < res; ++i){
            for(int j = 0; j < res-2; ++j){
                glColor4f(r,g,b,a);
                glBegin(GL_QUADS);
                int a = i * (res) + j;
                int b = a + 1;
                int c = b + res ;
                int d = c - 1 ;
                Vec n = Ro::dir( vp[a] ^ vp[b] ^ vp[c] ).dual();
                GL::normal( (n.unit() * -1.0).w() );
                GL::Quad( vp[a], vp[d], vp[c], vp[b] );
               // GL::vertex(vp[a].w());
                glEnd();

                //ENABLE for PRINTING
//                glColor3f(.7,.7,.7);
//                glNormal3f(0,0,1);
//                glBegin(GL_LINE_STRIP);
//                GL::Tri( vp[a], vp[b], vp[c] );
//                GL::Tri( vp[a], vp[d], vp[c] );
//                glEnd();
            }
            
        }
    }
};

///Skin a bunch of Circles
//        void skinCirc (Cir * s, int num, int res = 10){
//
//           int mU = res;
//           int mV = num;
//                                    
//            if (!mVertex.empty() ) mVertex.clear();	
//
//            for (int j = 0; j < mU; ++j){
//                double t = 2 * PI * j/mU;
//                for (int i = 0 ; i < mV; ++i){					
//                    Par p = Ro::par_cir( s[ i ], t );
//                    Pnt tp =  Ro::cen( Ro::split(p)[0] );
//                    mVertex.push_back( Vertex( Vec3f(tp[0], tp[1], tp[2]) ) ) ;
//                }
//            }
//            
//            //store quad indices and normals
//
//            if (!mIndex.empty()) mIndex.clear();
//            
//            for (int j = 0; j < mU-1; ++j){
//                for (int i = 0; i < mV-1; ++i){
//                    int idx = j * mV + i;
//                    int idx2 = idx + mV;
//                    mIndex.push_back( idx);
//                    mIndex.push_back( idx+1);
//                    mIndex.push_back( idx2+1);
//                    mIndex.push_back( idx2);
//                }
//            }
//            //last strip
//            for (int i = 0; i < mV-1; ++i){
//                int idx = (mU-1) * mV + i; 
//                int idx2 = i;
//                 mIndex.push_back( idx);
//                 mIndex.push_back( idx+1);
//                 mIndex.push_back( idx2+1);
//                 mIndex.push_back( idx2);
//            }
//
//        }


struct UVMesh{
    int u, v;

    vector<Pnt> vp; ///<-- VECTORS
    vector<Vec> np; ///<-- NORMALS
    bool bFlipNormals;
    UVMesh(int _u=0, int _v=0) : u(_u), v(_v), bFlipNormals(0) {}
    void add(const Pnt& p) { vp.push_back(p); }
    void add(const Vec& v) { vp.push_back(v.null()); }
    
    Vec normal(int a, int b, int c){
            Vec dir  = bFlipNormals ?  Ro::dir( vp[a] ^ vp[c] ^ vp[b] ).dual() : Ro::dir( vp[a] ^ vp[b] ^ vp[c] ).dual();
            return dir.unit();
    }
    
    void draw(float rr = 1, float gg = 1, float bb = 1, float aa = 1){
    
        glColor4f(rr,gg,bb,aa);
        glBegin(GL_QUADS);
        for (int i = 0; i < u-1; ++i){
            for (int j = 0; j < v-1; ++j){
                int a = i * v + j;
                int b = a + 1;
                int c = b + v;
                int d = c - 1;
                
                GL::normal(normal(a,b,c).w());
                GL::Quad(vp[a], vp[b], vp[c], vp[d]);
            
            }
        }
        glEnd();
    }
    
    void drawTri(float rr=1, float gg=1, float bb=1, float aa =1){
    
     glColor4f(rr,gg,bb,aa);
      for (int i = 0; i < u-1; ++i){
            for (int j = 0; j < v-1; ++j){
                int a = i * v + j;
                int b = a + 1;
                int c = b + v;
                int d = c - 1;
                
                
                glBegin(GL_LINE_STRIP);
                GL::normal(normal(a,b,c).w());
                GL::Tri( vp[a], vp[b], vp[c]);
                GL::Tri(vp[a], vp[d], vp[c]);
                glEnd();
            }
        }
    }
    
    void drawNormals(float rr = 1, float gg = 1, float bb = 1, float aa = 1){
    
        glColor4f(rr,gg,bb,aa);
        glBegin(GL_QUADS);
        for (int i = 0; i < u-1; ++i){
            for (int j = 0; j < v-1; ++j){
                int a = i * v + j;
                int b = a + 1;
                int c = b + v;
                int d = c - 1;
                
                Vec mid = Interp::surface<Vec>( vp[a], vp[b], vp[c], vp[d], .5, .5);
                GL::Glyph::Line( mid, mid + normal(a,b,c) );
                //GL::Quad(vp[a], vp[b], vp[c], vp[d]);
            
            }
        }
        glEnd();
    
    }
};



struct CubeMesh{
     vector<Pnt> vp;
     void add(const Pnt& p ) { vp.push_back(p); }
     
     void draw(int dim){
        
//        IT3V(dim)
//            int a = i * (dim+1) * (dim+1) + j * (dim+1) + k;
//            int b = a  
//        END 
     }
};
} //vsr

#endif
