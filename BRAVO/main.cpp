/*
 * GLUT Shapes Demo
 *
 * Written by Nigel Stewart November 2003
 *
 * This program is test harness for the sphere, cone
 * and torus shapes in GLUT.
 *
 * Spinning wireframe and smooth shaded shapes are
 * displayed until the ESC or q key is pressed.  The
 * number of geometry stacks and slices can be adjusted
 * using the + and - keys.
 */

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdlib.h>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h


void _B1()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(-9,2.5);glVertex2f(-8.5,3);
    glVertex2f(-7.5,3);glVertex2f(-7,2.5);
    glVertex2f(-7,2);glVertex2f(-7.4,1.5);
    glVertex2f(-9,1.5);



glEnd();
}
void _B2()
{
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(-8.5,2.4);glVertex2f(-7.5,2.4);

    glVertex2f(-7.5,1.8);glVertex2f(-8.5,1.8);





glEnd();
}




void _B3()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(-9,1.5);glVertex2f(-7.4,1.5);
    glVertex2f(-7,1);glVertex2f(-7,0.5);
    glVertex2f(-7.5,0);glVertex2f(-8.5,0);
    glVertex2f(-9,0.5);



glEnd();
}
void _B4()
{
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(-7.5,1);glVertex2f(-7.5,0.4);
    glVertex2f(-8.5,0.4);glVertex2f(-8.5,1);



glEnd();
}




void _R1()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(-6,2.5);glVertex2f(-5.5,3);
    glVertex2f(-4.5,3);glVertex2f(-4,2.5);

 glVertex2f(-4,2);glVertex2f(-4.5,1.5);
    glVertex2f(-6,1.5);


glEnd();
}
void _R2()
{
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(-5.5,2.5);glVertex2f(-5.5,1.8);
    glVertex2f(-4.5,1.8);glVertex2f(-4.5,2.5);




glEnd();
}




void _R3()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(-6,1.5);glVertex2f(-5.5,1.5);
    glVertex2f(-5.5,0);glVertex2f(-6,0);




glEnd();
}
void _R4()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-5.5,1.5);glVertex2f(-5,1.5);
    glVertex2f(-4,0);glVertex2f(-4.5,0);




glEnd();
}




void _A1()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(-3.5,1.5);glVertex2f(-3.5,2);
    glVertex2f(-3,3);glVertex2f(-2,3);

 glVertex2f(-1.5,2);glVertex2f(-1.5,1.5);




glEnd();
}
void _A2()
{
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(-3,1.8);glVertex2f(-2,1.8);
    glVertex2f(-2.8,2.6);glVertex2f(-2.2,2.6);




glEnd();
}




void _A3()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(-3.5,0);glVertex2f(-3.5,1.5);
    glVertex2f(-3,1.5);glVertex2f(-3,0);




glEnd();
}


void _A4()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(-2,0);glVertex2f(-2,1.5);
    glVertex2f(-1.5,1.5);glVertex2f(-1.5,0);




glEnd();
}


void _V1()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(1,3);glVertex2f(1.5,3);
    glVertex2f(0.5,0);glVertex2f(0,0);




glEnd();
}
void _V2()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-1,3);glVertex2f(-0.5,3);
    glVertex2f(0.5,0);glVertex2f(0,0);




glEnd();
}


void _O1()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(2,3.5);glVertex2f(2.5,2.5);
    glVertex2f(2.5,0.5);glVertex2f(2,0);




glEnd();
}
void _O2()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(2.5,0.5);glVertex2f(2,0);
    glVertex2f(4,0);glVertex2f(3.5,0.5);




glEnd();
}

void _O3()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(3.5,2.5);glVertex2f(4,3.5);
    glVertex2f(4,0);glVertex2f(3.5,0.5);




glEnd();
}

void _O4()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(3.5,2.5);glVertex2f(4,3.5);
    glVertex2f(2,3.5);glVertex2f(2.5,2.5);




glEnd();
}







void display(){
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

   _B1();
   _B2();
   _B3();
   _B4();
   //_B5();
   _R1();
   _R2();
   _R3();
   _R4();
   //_R5();
   _A1();
   _A2();
   _A3();
   _A4();
   //_A5();
   _V1();
   _V2();
   _O1();
   _O2();
   _O3();
   _O4();
	glFlush();
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);

	glutInitWindowSize(600, 600);
	glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-600)/2,(glutGet(GLUT_SCREEN_HEIGHT)-600)/2);;
	glutCreateWindow("AIUB");

    //this line must be below of glutCreateWindow();
    gluOrtho2D(-12, 12, -12, 12);
	glutDisplayFunc(display);

	glutMainLoop();
	return 0;
}

