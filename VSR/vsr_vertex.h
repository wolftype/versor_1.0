//
//  vsr_vertex.h
//  opengles_00
//
//  Created by Pablo Colapinto on 10/17/11.
//  Copyright 2011 x. All rights reserved.
//

#ifndef opengles_00_vsr_vertex_h
#define opengles_00_vsr_vertex_h

#include <vector>
#include <iostream>
#include <fstream>
#include <sstream>

#include "vsr_gxlib.h"
#include "vsr_data.h"
#include "vsr_file.h"
#include "vsr_matrix.h"

#include "vsrtypes.h"

//#include "vsrcga.h"
//#include "vsr_gl_varray.h"
//#include "vsr_gl_shader.h"

using namespace std;

namespace vsr {

struct Vertex {
    Vec3<float> Pos;
    Vec3<float> Norm;
    Vec4<float> Col;
    Vec2<float> Tex;
    
    //            Vertex() : Pos(0,0,0), Norm(0,0,0), Col(1,1,1,1), Tex(0,0){}

    Vertex(const Vec3f& pos = Vec3f(0,0,0), 
           const Vec4f& col = Vec4f(1,1,1,1), 
           const Vec3f& norm = Vec3f(0,0,0), 
           const Vec2f& tex = Vec2f(0,0) )  
    
    : Pos(pos), Col(col), Norm(norm), Tex(tex) 
    
    {}
    
};
    
//struct Frame {
//
//    Rot rot;    
//    Vec pos;
//
//    Frame(Rot r = Rot(1,0,0,0), Vec v = Vec(0,0,0)) : pos(v), rot(r) {}
//};
    
struct Mesh {//: public Frame {

private:
    GL::MODE mMode;

    vector< Vertex > mVertex;
    vector< unsigned char > mIndex;

    
    
public:
    void mode( GL::MODE m) { mMode = m; }
    
    Mesh() : mMode(GL::LL) {}
    
    Mesh(const Mesh& m){
        for (int i = 0; i < m.num(); ++i){
            mVertex.push_back( m[i] );
        }
    }
    
    Mesh( string s) { load(s); }
        
 
    Vertex& operator[] (int idx) { return mVertex[idx]; }
    Vertex operator[] (int idx) const { return mVertex[idx]; }
    

    
    int num() const { return mVertex.size(); }
    int numIdx() const { return mIndex.size(); }
    
    Mesh& add(const Vertex& v) { mVertex.push_back(v); return *this;}

    Mesh& add(const Vec3f& v) { mVertex.push_back( Vertex(v) ); return *this; }

    Mesh& add(Vec3f * v, int n) { 
        for (int i = 0; i < n; ++i) { mVertex.push_back( Vertex(v[i]) ); } 
        return *this;
    }
    
    /// Add Indices List
    Mesh& add(int idx) {
        mIndex.push_back(idx); return *this;
    }
    /// Add an array of Indices
    Mesh& add(int * idx, int n) {
        for (int i = 0; i < n; ++i) { mIndex.push_back( idx[i] ); } 
        return *this;
    }
    

    GL::MODE mode() { return mMode; }
    
    unsigned char * indices() { return &(mIndex[0]); }
    
    vector<Vertex>::iterator vertices() { return mVertex.begin(); }
//    int index(int n) { return mIndex[n]; }
    
    void translate(float x, float y, float z){
        
        for (int i = 0; i < num(); ++i){
            mVertex[i].Pos[0] -= x;
            mVertex[i].Pos[1] -= y;
            mVertex[i].Pos[2] -= z;
        }
    }
    
    void load(string s) {
        
        string line;
        string fname = File::resources + s;
        ifstream myfile(fname.c_str());
        
        cout << "loading " << s << " from " << fname << " . . . " <<  endl;
        
        if (myfile.is_open()){
            while (!myfile.eof()){
                
                getline(myfile, line);
                int in = line.find_first_of(" ");
                string a = line.substr(0,in);
                
                if (a=="v"){
                    
                    string fvs  = line.substr(2);
                    int fi      = fvs.find_first_of(" ");
                    string fv1  = fvs.substr(0,fi);
                    string fvs2 = fvs.substr(fi+1);
                    fi          = fvs2.find_first_of(" ");
                    string fv2  = fvs2.substr(0,fi);
                    string fv3  = fvs2.substr(fi+1,10);
                    
                    Vec3f v;
                    stringstream(fv1)>>v[0];
                    stringstream(fv2)>>v[1];
                    stringstream(fv3)>>v[2];
                    
                    //                    v[1] -= 120;
                    add(v);                        
                    
                }
                
                if (a=="f"){
                    
                    
                }
                
            }
            myfile.close();            
        }
        
        printf("# of vertices: %d\n", (int)mVertex.size() );
    }    
};


    
//    GLuint positionSlot = glGetAttribLocation(m_simpleProgram, "Position");
//    GLuint colorSlot = glGetAttribLocation(m_simpleProgram, "SourceColor");
//    
//    glEnableVertexAttribArray(positionSlot);
//    glEnableVertexAttribArray(colorSlot);
//    
//    GLsizei stride = sizeof(Vertex);
//    
//    const GLvoid * pCoords = &Vertices[0].Position[0];
//    const GLvoid * pColors = &Vertices[0].Color[0];
//    
//    glVertexAttribPointer(positionSlot, 2, GL_FLOAT, GL_FALSE, stride, pCoords);
//    glVertexAttribPointer(colorSlot, 4, GL_FLOAT, GL_FALSE, stride, pColors);
//    
//    GLsizei vertexCount = sizeof(Vertices) / sizeof(Vertex);
//    glDrawArrays(GL_TRIANGLES, 0, vertexCount);
//    
//    glDisableVertexAttribArray(positionSlot);
//    glDisableVertexAttribArray(colorSlot);    
    
} //vsr

#endif
