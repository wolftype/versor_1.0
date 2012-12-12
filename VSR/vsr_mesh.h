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

using namespace std;

namespace vsr {
    
    //VERTEX DATA STRUCT
    struct Vertex {
        Vec3<float> Pos;        ///< 3d Position
        Vec3<float> Norm;       ///< 3d normal
        Vec4<float> Col;        ///< RGBA Color
        Vec2<float> Tex;        ///< UV Coordinates
                
        Vertex(const Vec3f& pos = Vec3f(0,0,0), 
               const Vec4f& col = Vec4f(1,1,1,1), 
               const Vec3f& norm = Vec3f(0,0,1), 
               const Vec2f& tex = Vec2f(0,0) )  
        
        : Pos(pos), Col(col), Norm(norm), Tex(tex) 
        
        {}
        
        float * pos() { return &Pos[0]; }
        float * col() { return &Col[0]; }
        float * norm() { return &Norm[0]; }
        float * tex() { return &Tex[0]; }
        
        static GLvoid * on() { return (GLvoid*)sizeof(Vec3f); }
        static GLvoid * oc() { return (GLvoid*)( 2 * sizeof(Vec3f) ); }
        static GLvoid * ot() { return (GLvoid*)( 3 * sizeof(Vec3f) ); }
        
    };
    
    struct Mesh : public Frame {
        
    private:
        
        /// Draw Mode
        GL::MODE mMode;
        
        /// Vertices for VertexArray
        vector< Vertex > mVertex;
        
        ///Indices for ElementArray
        vector< GLuint > mIndex;
        
    public:
        
        /// Set Draw Mode
        void mode( GL::MODE m) { mMode = m; }
        
        /// Default Line Loop Mode
        Mesh() : mMode(GL::LL) {}
        
        Mesh(const Mesh& m){
            for (int i = 0; i < m.num(); ++i){
                mVertex.push_back( m[i] );
            }
        }
        
        /// Create Mesh from an OBJ file
        Mesh( string s) { load(s); }
                
        /// GETTER AND SETTER of VERTEX DATA
        Vertex& operator[] (int idx) { return mVertex[idx]; }
        Vertex operator[] (int idx) const { return mVertex[idx]; }
        
        int num() const { return mVertex.size(); }
        int numIdx() const { return mIndex.size(); }
        
        Mesh& add(const Vertex& v) { mVertex.push_back(v); return *this;}        
        Mesh& add(const Vec3f& v) { mVertex.push_back( Vertex(v) ); return *this; }
        Mesh& add(float x, float y, float z) { mVertex.push_back( Vertex( Vec3f(x,y,z) ) ); return *this; }
        
        /// ADD N VERTICES
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
        
//        virtual void draw(){
//            glBegin(GL_POINTS);
//            glNormal3f(0,0,1);
//            for (int i = 0; i < mVertex.size(); ++i){
//                Vec3<float> v = mVertex[i].Pos; 
//                glVertex3f(v[0], v[1], v[2]);
//            }
//            glEnd();
//        }
        
        GL::MODE mode() { return mMode; }
        
        vector<GLuint>::iterator indices() { return mIndex.begin(); }        
        vector<Vertex>::iterator vertices() { return mVertex.begin(); }
        
        Vertex& last() { return mVertex[ mVertex.size() - 1 ]; }
        
//        GLubyte * indices() { return &mIndex[0]; }
//        float * vertices() { return &mVertex[0].Pos[0]; }
        
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
    
        ///Skin a bunch of Circles
        void skinCirc (Cir * s, int num, int res = 10){

           int mU = res;
           int mV = num;
                                    
            if (!mVertex.empty() ) mVertex.clear();	

            for (int j = 0; j < mU; ++j){
                double t = 2 * PI * j/mU;
                for (int i = 0 ; i < mV; ++i){					
                    Par p = Ro::par_cir( s[ i ], t );
                    Pnt tp =  Ro::cen( Ro::split(p)[0] );
                    mVertex.push_back( Vertex( Vec3f(tp[0], tp[1], tp[2]) ) ) ;
                }
            }
            
            //store quad indices and normals

            if (!mIndex.empty()) mIndex.clear();
            
            for (int j = 0; j < mU-1; ++j){
                for (int i = 0; i < mV-1; ++i){
                    int idx = j * mV + i;
                    int idx2 = idx + mV;
                    mIndex.push_back( idx);
                    mIndex.push_back( idx+1);
                    mIndex.push_back( idx2+1);
                    mIndex.push_back( idx2);
                }
            }
            //last strip
            for (int i = 0; i < mV-1; ++i){
                int idx = (mU-1) * mV + i; 
                int idx2 = i;
                 mIndex.push_back( idx);
                 mIndex.push_back( idx+1);
                 mIndex.push_back( idx2+1);
                 mIndex.push_back( idx2);
            }

        }
        
        static Mesh Circle(double scale = 1);        
        static Mesh Rect(float w, float h);
    };
    
    
    inline Mesh Mesh::Circle (double scale){
        
        int res = floor( scale * 100);
        Mesh m;
        m.add( Vec3f(0,0,0) );
        
        for (int i = 0; i <= res; ++i){
            float rad = 2.0 * PI * i / res;
            float x = cos(rad);
            float y = sin(rad);
            
            m.add( Vec3f(x,y,0) );
            
            int idx[2] = {i,0};
            m.add(idx, 2);
            
        }
        
        m.add(1).add(0);
        
        return m;
    }
    
    inline Mesh Mesh::Rect (float w, float h) {
        
        Mesh m;
        
        Vec3f lt (-w/2.0,-h/2.0, 0 );
        Vec3f rt = lt + Vec3f(w,0,0);
        Vec3f rb = rt + Vec3f(0,h,0);
        Vec3f lb = lt + Vec3f(0,h,0);
        
        Vec3f normal(0,0,1);
        Vertex va( lt, Vec4f(lt,1), normal, Vec2f(0,0));
        Vertex vb( rt, Vec4f(lt,1), normal, Vec2f(1,0));
        Vertex vc( rb, Vec4f(lt,1), normal, Vec2f(1,1));
        Vertex vd( lb, Vec4f(lt,1), normal, Vec2f(0,1));
        
        m.add(va).add(vb).add(vc).add(vd);
        
        int idx[4] = {0,1,3,2};
        m.add(idx,4);
                
        m.mode(GL::TS);
        return m;
    }
    
    
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

struct UVMesh{
    vector<Pnt> vp;
    int u, v;
    bool bFlipNormals;
    UVMesh(int _u, int _v) : u(_u), v(_v), bFlipNormals(0) {}
    void add(const Pnt& p) { vp.push_back(p); }
    
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
