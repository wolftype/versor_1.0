//
//  vsr_gl_pipeline.h
//  Versor
//
//  Created by Pablo Colapinto on 10/26/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Versor_vsr_gl_pipeline_h
#define Versor_vsr_gl_pipeline_h

#include "vsr_gl_vattrib.h"
#include "vsr_gl_vbo.h"

//IN PROGRESS (reworking PIPE from vsr_mdraw.h)

namespace vsr{

    struct Pipeline {

        static std::map<int, DBO> vbo;
    
        ShaderProgram * shaderprogram;

        static VAttrib4 vatt;
    
    static Uniform LightPosition;
    
    void init(){                      
        
        //Only Call After Shader is Bound
        vatt.pos.set( Shader :: Current(), "position", sizeof(Vertex), 3, 0);
        vatt.col.set( Shader :: Current(), "sourceColor", sizeof(Vertex), 4, Vertex::oc() );
        vatt.norm.set( Shader :: Current(), "normal", sizeof(Vertex), 3, Vertex::on() );
        vatt.tex.set( Shader :: Current(), "texCoord", sizeof(Vertex), 2, Vertex::ot() );
    
    };

} //vsr::

#endif
