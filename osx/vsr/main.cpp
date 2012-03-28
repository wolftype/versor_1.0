#include <iostream>
#include <GLUT/GLUT.h>

#include "vsr.h"


using namespace vsr;

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    
	//Vec v(0,1,0);
	Cir c = CXY(.5);
	
	Dlp d (0,1,0,0);
	
	Cir c2 = Op::dl( c )  ^ d ;

	glColor3f(1,1,1);
	d.draw();
	
	glColor3f(1,1,0);
	c.draw();
	
	glColor3f(1,0,0);
	c2.draw();
	
	Par p = Op::dl(c2);
	
	glColor3f(0,0,1);
	p.draw();
	
    glutSwapBuffers();
}

void reshape(int width, int height)
{
    glViewport(0, 0, width, height);
}

void idle(void)
{
    glutPostRedisplay();
}


void init(int argc, char ** argv){

	glutInit(&argc, argv);
    
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE | GLUT_DEPTH);
    glutInitWindowSize(640, 480);
    
    glutCreateWindow("versor test");
    
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutIdleFunc(idle);	
	
	glPointSize(10);


}

int main (int argc, char ** argv ) {
	
	/* Bind Dynamic Library libconga */
	CongaTypes::BindAll();
	
	init(argc, argv);
	
	glutMainLoop();
	
	return 0;
}