//
//  vsr_gl_material.h
//  opengles_00
//
//  Created by Pablo Colapinto on 10/17/11.
//  Copyright 2011 x. All rights reserved.
//

#ifndef opengles_00_vsr_gl_material_h
#define opengles_00_vsr_gl_material_h

#include <string>

namespace vsr {

    using namespace std; 
    
    struct TexAss {
        
        bool useTexture;
        string texture;
        
    };
    
    class Material {
      
    public:
        
        TexAss emissivemap, specularmap, ambientmap, diffusemap;
        TexAss heightmap, normalmap, shininessmap, displacementmap, opacitymap;
        TexAss lightmap, reflectionmap;
        
    private:
        
    };
    
}

#endif
