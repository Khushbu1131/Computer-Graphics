/*
//---------------------------------------RAHI--------------------------------------------------
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h



void _R() {
    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);

    glVertex2f(0,0);glVertex2f(0,3);
    glVertex2f(0,3);glVertex2f(2,3);
    glVertex2f(2,3);glVertex2f(2,1.8);
    glVertex2f(2,1.8);glVertex2f(0,1.8);
    glVertex2f(0,1.8);glVertex2f(2,0);
    glEnd();
}


void _A() {
    //col 1 black
    glColor3ub(0,0,0);
    glBegin(GL_LINES);

    glVertex2f(3,0);glVertex2f(4,3);
    glVertex2f(4,3);glVertex2f(5,0);
    glVertex2f(3.5,1.5);glVertex2f(4.5,1.5);


    glEnd();

}
void _H(){
    glColor3ub(0,0,0);

    glBegin(GL_LINES);

    glVertex2f(6,0);glVertex2f(6,3);
    glVertex2f(8,0);glVertex2f(8,3);
    glVertex2f(6,1.5);glVertex2f(8,1.5);


    glEnd();

}
void _I(){
    //col 3 black
    glColor3ub(0,0,0);
    glBegin(GL_LINES);

    glVertex2f(10,3);glVertex2f(10,0);


    glEnd();



}



void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

    _R();
    _A();
    _H();
    _I();
	glFlush();
}




int main(int argc, char** argv) {
	glutInit(&argc, argv);

	glutInitWindowSize(600, 600);
	glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-600)/2,(glutGet(GLUT_SCREEN_HEIGHT)-600)/2);;
	glutCreateWindow("RAHI");

    //this line must be below of glutCreateWindow();
    gluOrtho2D(-12, 12, -12, 12);
	glutDisplayFunc(display);

	glutMainLoop();
	return 0;
}
*/


/*
//---------------------------------------AIUB--------------------------------------------------
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h



void _A() {
    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);

    glVertex2f(-5,0);glVertex2f(-4,3);
    glVertex2f(-4,3);glVertex2f(-3,0);
    glVertex2f(-4.5,1.5);glVertex2f(-3.5,1.5);

    glEnd();
}


void _I() {
    //col 1 black
    glColor3ub(0,0,0);
    glBegin(GL_LINES);

    glVertex2f(-2,3);glVertex2f(-2,0);


    glEnd();

}
void _U(){
    glColor3ub(0,0,0);

    glBegin(GL_LINES);

    glVertex2f(-1,3);glVertex2f(-1,0);
    glVertex2f(-1,0);glVertex2f(1,0);
    glVertex2f(1,0);glVertex2f(1,3);


    glEnd();

}
void _B(){
    //col 3 black
    glColor3ub(0,0,0);
    glBegin(GL_LINES);

    glVertex2f(2,0);glVertex2f(2,3);
    glVertex2f(2,3);glVertex2f(4,3);
    glVertex2f(4,3);glVertex2f(4,0);
    glVertex2f(4,0);glVertex2f(2,0);
    glVertex2f(2,1.5);glVertex2f(4,1.5);



    glEnd();



}



void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

    _A();
    _I();
    _U();
    _B();
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

*/





















//----------------------------------------------NEPTUNE--------------------------------------




#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h






void _N1()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(-6,2);glVertex2f(-6,0);
    glVertex2f(-6,0);glVertex2f(-6.5,0);
    glVertex2f(-6.5,0);glVertex2f(-6.5,3);
    glVertex2f(-6.5,3);glVertex2f(-6,3);
    glVertex2f(-6,3);glVertex2f(-5,1);


glEnd();
}
void _N2()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-5,1);glVertex2f(-5,3);
    glVertex2f(-5,3);glVertex2f(-4.5,3);
    glVertex2f(-4.5,3);glVertex2f(-4.5,0);

    glVertex2f(-4.5,0);glVertex2f(-5,0);
    glVertex2f(-5,0);glVertex2f(-6,2);


glEnd();
}

void _E1()
{
    glColor3f(0,0,0);

    glBegin(GL_POLYGON);
    glVertex2f(-4,3);glVertex2f(-2,3);
    glVertex2f(-2,3);glVertex2f(-2,2.4);
    glVertex2f(-2,2.4);glVertex2f(-4,2.4);
    glVertex2f(-4,2.4);glVertex2f(-4,3);
    glEnd();
}

void _E2()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-4,1.8);glVertex2f(-2,1.8);
    glVertex2f(-2,1.8);glVertex2f(-2,1.4);
    glVertex2f(-2,1.4);glVertex2f(-4,1.4);
    glVertex2f(-4,1.4);glVertex2f(-4,1.8);



    glEnd();
}

void _E3()
{
    glColor3f(0,0,0);

    glBegin(GL_POLYGON);
    glVertex2f(-4,0.5);glVertex2f(-2,0.5);
    glVertex2f(-2,0.5);glVertex2f(-2,0);

    glVertex2f(-2,0);glVertex2f(-4,0);
    glVertex2f(-4,0);glVertex2f(-4,0.5);


glEnd();
}
void _E4()
{
    glColor3f(0,0,0);

    glBegin(GL_POLYGON);
    glVertex2f(-4,3);glVertex2f(-3.4,3);
    glVertex2f(-3.4,3);glVertex2f(-3.4,0);

    glVertex2f(-3.4,0);glVertex2f(-4,0);
    glVertex2f(-4,0);glVertex2f(-4,3);


glEnd();
}


void _P1()
{
    glColor3f(0,0,0);

    glBegin(GL_POLYGON);
    glVertex2f(-1.2,0);glVertex2f(-1.5,0);
    glVertex2f(-1.5,0);glVertex2f(-1.5,3);
    glVertex2f(-1.5,3);glVertex2f(-1.2,3);
    glVertex2f(-1.2,3);glVertex2f(-1.2,0);
    glEnd();
}

void _P2()
{
    glColor3f(0,0,0);

    glBegin(GL_POLYGON);
    glVertex2f(-1.5,3);glVertex2f(0,3);
    glVertex2f(0,3);glVertex2f(0,2);
    glVertex2f(0,2);glVertex2f(-1.5,2);
    glVertex2f(-1.5,2);glVertex2f(-1.5,3);
    glEnd();
}


void _T1()
{
    glColor3f(0,0,0);

    glBegin(GL_POLYGON);
    glVertex2f(0.2,3);glVertex2f(1.4,3);
    glVertex2f(1.4,3);glVertex2f(1.4,2.6);
    glVertex2f(1.4,2.6);glVertex2f(0.2,2.6);
    glVertex2f(0.2,2.6);glVertex2f(0.2,3);
    glEnd();
}

void _T2()
{
    glColor3f(0,0,0);

    glBegin(GL_POLYGON);
    glVertex2f(0.6,3);glVertex2f(1,3);
    glVertex2f(1,3);glVertex2f(1,0);
    glVertex2f(1,0);glVertex2f(0.6,0);
    glVertex2f(0.6,0);glVertex2f(0.6,3);
    glEnd();
}


void _U1()
{
    glColor3f(0,0,0);

    glBegin(GL_POLYGON);
    glVertex2f(1.6,3);glVertex2f(2,3);
    glVertex2f(2,3);glVertex2f(2,0);
    glVertex2f(2,0);glVertex2f(1.6,0);
    glVertex2f(1.6,0);glVertex2f(1.6,3);
    glEnd();
}


void _U2()
{
    glColor3f(0,0,0);

    glBegin(GL_POLYGON);
    glVertex2f(1.6,0.5);glVertex2f(3.4,0.5);
    glVertex2f(3.4,0.5);glVertex2f(3.4,0);
    glVertex2f(3.4,0);glVertex2f(1.6,0);
    glVertex2f(1.6,0);glVertex2f(1.6,0.5);
    glEnd();
}

void _U3()
{
    glColor3f(0,0,0);

    glBegin(GL_POLYGON);
    glVertex2f(3,3);glVertex2f(3.4,3);
    glVertex2f(3.4,3);glVertex2f(3.4,0);
    glVertex2f(3.4,0);glVertex2f(3,0);
    glVertex2f(3,0);glVertex2f(3,3);
    glEnd();
}
void _N3()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(4.5,2);glVertex2f(4.5,0);
    glVertex2f(4.5,0);glVertex2f(4,0);
    glVertex2f(4,0);glVertex2f(4,3);
    glVertex2f(4,3);glVertex2f(4.5,3);
    glVertex2f(4.5,3);glVertex2f(5.5,1);


glEnd();
}
void _N4()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(5.5,1);glVertex2f(5.5,3);
    glVertex2f(5.5,3);glVertex2f(6,3);
    glVertex2f(6,3);glVertex2f(6,0);

    glVertex2f(6,0);glVertex2f(5.5,0);
    glVertex2f(5.5,0);glVertex2f(4.5,2);


glEnd();
}

void _E5()
{
    glColor3f(0,0,0);

    glBegin(GL_POLYGON);
    glVertex2f(6.5,3);glVertex2f(9,3);
    glVertex2f(9,3);glVertex2f(9,2.5);
    glVertex2f(9,2.5);glVertex2f(6.5,2.5);
    glVertex2f(6.5,2.5);glVertex2f(6.5,3);
    glEnd();
}

void _E6()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(6.5,1.8);glVertex2f(9,1.8);
    glVertex2f(9,1.8);glVertex2f(9,1.4);
    glVertex2f(9,1.4);glVertex2f(6.5,1.4);
    glVertex2f(6.5,1.4);glVertex2f(6.5,1.8);



    glEnd();
}

void _E7()
{
    glColor3f(0,0,0);

    glBegin(GL_POLYGON);
    glVertex2f(6.5,0.5);glVertex2f(9,0.5);
    glVertex2f(9,0.5);glVertex2f(9,0);

    glVertex2f(9,0);glVertex2f(6.5,0);
    glVertex2f(6.5,0);glVertex2f(6.5,0.5);


glEnd();
}
void _E8()
{
    glColor3f(0,0,0);

    glBegin(GL_POLYGON);
    glVertex2f(6.5,3);glVertex2f(7,3);
    glVertex2f(7,3);glVertex2f(7,0);

    glVertex2f(7,0);glVertex2f(6.5,0);
    glVertex2f(6.5,0);glVertex2f(6.5,3);


glEnd();
}
void display(){
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

    _N1();
    _N2();
    _E1();
    _E2();
    _E3();
    _E4();
    _P1();
    _P2();
    _T1();
    _T2();
    _U1();
    _U2();
    _U3();
    _N3();
    _N4();
    _E5();
    _E6();
    _E7();
    _E8();

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




/*#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h


void _B1()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(-9,0);glVertex2f(-9,3);
    glVertex2f(-9,3);glVertex2f(-8.6,3);
    glVertex2f(-8.6,3);glVertex2f(-8.6,0);
    glVertex2f(-8.6,0);glVertex2f(-9,0);



glEnd();
}
void _B2()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-9,3);glVertex2f(-7,3);
    glVertex2f(-7,3);glVertex2f(-7,2.4);
    glVertex2f(-7,2.4);glVertex2f(-9,2.6);

    glVertex2f(-9,2.6);glVertex2f(-9,3);



glEnd();
}




void _B3()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(-9,1.6);glVertex2f(-7,1.6);
    glVertex2f(-7,1.6);glVertex2f(-7,1.4);
    glVertex2f(-7,1.4);glVertex2f(-9,1.4);
    glVertex2f(-9,1.4);glVertex2f(-9,1.6);



glEnd();
}
void _B4()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-9,0.4);glVertex2f(-7,0.6);
    glVertex2f(-7,0.6);glVertex2f(-7,0);
    glVertex2f(-7,0);glVertex2f(-9,0);

    glVertex2f(-9,0);glVertex2f(-9,0.4);



glEnd();
}

void _B5()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-7.5,3);glVertex2f(-7,3);
    glVertex2f(-7,3);glVertex2f(-7,0);
    glVertex2f(-7,0);glVertex2f(-7.5,0);

    glVertex2f(-7.5,0);glVertex2f(-7.5,3);



glEnd();
}



void _R1()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(-6,3);glVertex2f(-5.5,3);
    glVertex2f(-6,0);glVertex2f(-5.5,0);




glEnd();
}
void _R2()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-6,3);glVertex2f(-4,3);
    glVertex2f(-6,2.6);glVertex2f(-4,2.6);




glEnd();
}




void _R3()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(-4.4,3);glVertex2f(-4,3);
    glVertex2f(-4.4,1.5);glVertex2f(-4,1.5);




glEnd();
}
void _R4()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-6,1.8);glVertex2f(-4,1.8);
    glVertex2f(-6,1.5);glVertex2f(-4,1.5);




glEnd();
}

void _R5()
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

    glVertex2f(-3,3);glVertex2f(-3.5,2.5);
    glVertex2f(-3.5,0);glVertex2f(-3,0);




glEnd();
}
void _A2()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-3,3);glVertex2f(-2,3);
    glVertex2f(-1.5,2.5);glVertex2f(-1.5,2.5);




glEnd();
}




void _A3()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(-2,3);glVertex2f(-1.5,2.5);
    glVertex2f(-1.5,0);glVertex2f(-2,0);




glEnd();
}


void _A4()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(-3.5,1.5);glVertex2f(-1.5,1.5);
    glVertex2f(-1.5,2);glVertex2f(-3.5,2);




glEnd();
}
void _A5()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(-3.5,2.5);glVertex2f(-1.5,2.5);
    glVertex2f(-3,2);glVertex2f(-3.5,2);

     //glVertex2f(-2,2.5);glVertex2f(-3,2.5);
    //glVertex2f(-1.5,1.5);glVertex2f(-2,1.5);


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
   _B5();
   _R1();
   _R2();
   _R3();
   _R4();
   _R5();
   _A1();
   _A2();
   _A3();
   _A4();
   _A5();
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

*/
