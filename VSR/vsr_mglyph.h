//
//  vsr_mglyph.h
//  Versor
//  
//  MESH GLYPHS (for better GL pipeline )
//
//  Created by Pablo Colapinto on 10/22/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Versor_vsr_mglyph_h
#define Versor_vsr_mglyph_h

#include "vsr_mesh.h"

namespace vsr {
    namespace GL{
        namespace MGlyph {
        
            static Mesh Point(float x, float y, float z){
                Mesh m;
                m.add(x,y,z);
                m.mode( GL::P );
                return m;
            }
        
            static Mesh Rect( float w, float h){
                Mesh m;
                m.add( -w/2.0,-h/2.0, 0 );
                m.add( w/2.0,-h/2.0, 0 );
                m.add( -w/2.0,h/2.0, 0 );
                m.add( -w/2.0,-h/2.0, 0 );
                m.add(0).add(1).add(2).add(3).add(0);
                return m;
            }

            static Mesh Circle (float scale){
        
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
            
            /*! A Mesh of Skinned Circles 
                @param Pointer to an Circle array
                @param number of Circles in array
                @param resolution (default 100)
            */
            static Mesh Skin (Cir * cir, int num, int res = 100){
                
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
            
            
           static Mesh Cylinder (float scale, float length){
           
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
            
           }
        } // MGlyph::
    } // GL::
} // vsr ::

#endif
