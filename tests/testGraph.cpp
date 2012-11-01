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

#include <iostream>

#include "vsr_exptemp.h"


using namespace vsr;

using glv::GLV;
using glv::Window;

Window * win;


struct Command {
    
    vector< Generic * > args;
    
//    template< class L, class R >
    
    
    void operator()() {
        
    }

};

struct OpApp : public GLVApp {

    OpApp(Window * win) : GLVApp(win) { }
    
    virtual void onDraw();
    
    void add( Generic& g ){ data.push_back(&g); }
    vector< Generic * > data;
    
    typedef void (*Opera)(const Generic&, const Generic&);
    vector< Opera > ops;
    void addOp(const Opera& o) { ops.push_back(o); }    

    template<class T>
    void reg( T * t) {
        stringstream ss; ss << t; string as = ss.str();
    }
    
    //Bake a generic MV into a specific type and add to appropriate stack
    void bake( Generic& g ) {

    }

    template<class A>
    void gop(const A& a, const Generic& b){
        switch(b.id){
            case PNT: DRAW( op(a, b.pnt() ) ); break; 
            case PAR: DRAW( op(a, b.par() ) ); break;
            case CIR: DRAW( op(a, b.cir() ) ); break;
            case SPH: DRAW( op(a, b.sph() ) ); break;
        }    
    }
    
    void gop(const Generic& a, const Generic& b){
        switch(a.id){
            case PNT: gop(a.pnt(), b ); break; 
            case PAR: gop(a.par(), b ); break;
            case CIR: gop(a.cir(), b ); break;
            case SPH: gop(a.sph(), b ); break;
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

    for (int i = 0; i < data.size(); ++i){
        DRAW( *data[i] );
    }
    
    for (int i = 0; i < data.size(); ++i){
        interface.touch( *data[i] );
    }
    
    for (int i = 0; i < ops.size(); ++i){
    
    }
    
    
    Var< Vec > vx;
    Var< Vec > vy;
    
    Exp< Var<Vec> > ex ( vx );
    Exp< Var<Vec> > ey ( vy );
    
    cout << ex( Vec(3,2,1) ) * ey ( Vec(3,4,4) ) << endl; 
    
//    static Cir cir2 = CXY(1).trs(2,0,0);
//    
//    DRAW(cir2);
//    interface.touch(cir2);
//    
//    DRAW( Ro::sur(cir2) );
    
    
    
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
    
    Cir c = CXY(1);
    Pnt p = PT(3,0,0);

    app -> add(c);
    app -> add(p);
    
    glv << app;          
    
    pthread_t commandThread;
	int errval = pthread_create(&commandThread, NULL, commandLine, app);
        
    Application::run();
    
    return 0;
}


