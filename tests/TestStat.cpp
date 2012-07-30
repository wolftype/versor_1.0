//
//  TestStat.cpp
//  vsr
//
//  Created by Pablo Colapinto on 5/2/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#include <iostream>
#include "vsr.h"
#include "GLVInterfaceImpl.h"
#include "Stat.h"

using namespace glv;
using namespace vsr;

Window * win;
GLVApp * app;

void distributions(GLVApp& app){
    
    static double a, b, c, d, e, f;

    SET
        app.gui(a)(b)(c);
        app.gui(d)(e,"exp",-10,10)(f, "range",-10,10);
    END 
    
    int n = 100;
    
    ITJ(i,n) VAL(n)
        
        double tmp = Eval::Gaussian( t, b, c, a);
        if (Stat::Gaussian( t, b, c, a) ) Glyph::Point(Vec(5 * t, tmp, 0));

        tmp = d * pow(t * f, e);
        if ( Stat::Power(t*f, e, d) ) Glyph::Point( Vec(f * t, tmp, 0) );
    
    END 
    
    //if ( Stat::Prob(.001) ) printf("true\n");
    
}


void powerlaw(GLVApp& app){
    
    int num = 1000;
    
    int numbins = 100;
    int * bins = new int[numbins];
    
    ITJ(i,numbins) bins[i] = 0; END
    
    static float scale,shape;
    SET
    app.gui(scale,"scale",0,100)(shape,"shape",0,100);
    END 
    
    IT (num)
    
        double sample = Rand::Pareto(scale, shape);
        cout << sample << endl; 
        ITJ(j,numbins) VAL(numbins)
            if ( sample>t ) {
                //cout << "yes" << endl; 
                       bins[j] += 1;
            }   
        }
        
    END 
    
    //ITJ(i,numbins)  cout << bins[i] << endl; END

    glBegin(GL_LINE_STRIP);
    ITJ(i,numbins)
        glVertex3f( i * .01, 2.0 * bins[i] / num, 0);
    END 
    glEnd();

    delete[] bins;
}

void exponential(GLVApp& app){
    static double rate;
  SET
    app.gui(rate,"rate",-10,10);
    END 
    
    
    
    double t = Rand::Exponential(rate) / rate;
    
    cout << t << endl; 
    
}

void GLVApp :: onDraw(){
    
//    Glyph::SolidGrid(10,10,.5);    
//    distributions(*this);
//   powerlaw(*this);
    exponential(*this);
}


int main(int argc, char * const argv[]) {
    
    /* Bind CGA Framework */
	CongaTypes::BindAll();
    
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);	
	
	win = new Window(500,500,"VSR",&glv);    
    app = new GLVApp(win);    
    glv << app;

    
    Rand::Seed();
    ITJ(i,10)
    //cout << RAND_MAX << endl; 
    cout << fixed << Rand::Normal(2,.2) << endl;
    //cout << Rand::Pareto(10,1) << endl; 
    END 
    
    Application::run();
    
    return 0;
}