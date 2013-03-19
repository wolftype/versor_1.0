//
//  main.cpp
//  vsr_static
//
//  Created by Pablo Colapinto on 8/16/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//
#include "vsr.h"
#include "vsr_op.h"

#include "vsr_draw.h"
#include "vsr_GLVInterfaceImpl.h"

#include "vsr_tests.h"

#include <iostream>

#include "vsr_exptemp.h"


using namespace vsr;
using namespace std;

using glv::GLV;
using glv::Window;

Window * win;


struct Command {
    
    vector< Generic * > args;
        
    
    void operator()() {
        
    }

};

struct OpApp : public GLVApp {

    OpApp(Window * win) : GLVApp(win) { }
    
    virtual void onDraw();
    
    void add( Generic& g ){ data.push_back(&g); }
    vector< Generic * > data;
    

    typedef Generic (*BinaryFunc)(const Generic&, const Generic&);

    struct Opera {
            
            BinaryFunc op;
            
             Generic * l; 
             Generic * r;
            
            Opera( BinaryFunc bf,  Generic& a,  Generic& b ) :
            op(bf), l(&a), r(&b) {}
            
            Generic operator()(){
                return op(*l,*r);
            }
    };



    vector< Opera > ops;
    void addOp(const Opera& o) { ops.push_back(o); }    

    template<class T>
    void reg( T * t) {
        stringstream ss; ss << t; string as = ss.str();
    }
    
    //Bake a generic MV into a specific type and add to appropriate stack
    void bake( Generic& g ) {

    }

    void drawAndTouch(){
        for (int i = 0; i < data.size(); ++i){
            DRAW( *data[i] );                   // You can pass in generic commands to Draw, it will create the right type to draw
        }
    
        for (int i = 0; i < data.size(); ++i){
            interface.touch( *data[i] );        // Same here
        }
    }
    

    template<class A>
    static Generic op(const A& a, const Generic& b){
        switch(b.id){
            case PNT: return vsr::op( a, b.pnt() ); break;
            case PAR: return vsr::op( a, b.par() ); break;
            case CIR: return vsr::op( a, b.cir() ); break;
            case SPH: return vsr::op( a, b.sph() ); break;
            default: cout << "no outer product found" << endl; break;
        }
    }

    //Function Table?
    static Generic op(const Generic& a, const Generic& b){
        switch(a.id){
            case PNT: return op( a.pnt(), b ); break;
            case PAR: return op( a.par(), b ); break;
            case CIR: return op( a.cir(), b ); break;
            case SPH: return op( a.sph(), b ); break;
        }
    }
        

    
};


void * commandLine (void * arg){
    OpApp& app = *(OpApp*)arg;
    stringstream os;
    string s = "";
    
    cout << "\nTYPE IN SOMETHING:" << endl;
    
    while (true){
        getline(cin,s);
        cout << s << endl; 
        if (s=="cir"){
            Cir * cir = new Cir(CXY(1));
            app.add (*cir);
            app.reg (cir);
        }
    }
}

void OpApp :: onDraw(){

    drawAndTouch();
    
    //do ops
    for (int i = 0; i < ops.size(); ++i){
        Generic g = ops[i]();
        DRAW(g);
    }
    
    SET
        static Dls a = Ro::dls(1,0,0,1);
        static Dls b = Ro::dls(-1,0,0,1);
        
        add(a);
        add(b);
        
        addOp( Opera(op, a, b)  );
        
    END
    
    
//    Var< Vec > vx;
//    Var< Vec > vy;
//    
//    Exp< Var<Vec> > ex ( vx );
//    Exp< Var<Vec> > ey ( vy );
//    
//    cout << ex( Vec(3,2,1) ) * ey ( Vec(3,4,4) ) << endl; 
        
    
    
}

void GLVApp :: onDraw(){}

int main (int argc, const char * argv[])
{



    OpApp * app;
    
    /* Set Up GLV hierarchy */
	GLV glv(0,0);	
	glv.colors().back.set(.3,.3,.3);		
	
    win = new Window(500,500,"VERSOR",&glv);    
    app = new OpApp(win);    
    
    glv << app;          
    
    pthread_t commandThread;
	int errval = pthread_create(&commandThread, NULL, commandLine, app);
        
    Application::run();
    
    return 0;
}


