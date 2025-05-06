/*#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
using namespace std;
float _move = 0.0f;
//float _move1= 0.0f;
void lava()
{//glMatrixMode(GL_MODELVIEW);

 //glPushMatrix();
 //glTranslatef(0.0f,_move, 0.0f);

    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(1.45,1.2);glVertex2f(1.45,1.15);
    glVertex2f(1.55,1.15);glVertex2f(1.55,1.2);
    glEnd();
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.0f,_move, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(1.45,1.15);glVertex2f(1.3,0.8);
    glVertex2f(1.36,0.8);glVertex2f(1.47,1.15);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255,0,0);
    glVertex2f(1.53,1.15);glVertex2f(1.58,1.04);
    glVertex2f(1.64,0.95);glVertex2f(1.655,0.855);
    glVertex2f(1.655,0.84);glVertex2f(1.664,0.84);
    glVertex2f(1.665,0.85);glVertex2f(1.65,0.95);
    glVertex2f(1.6,1.05);glVertex2f(1.55,1.15);
    glEnd();
    glPopMatrix();
}
*/

/*void lava()
{
    glPointSize(5.0); // Set point size for lava
    glBegin(GL_POINTS);
    glColor3ub(255, 0, 0); // Red color
    // Draw lava as points
    glVertex2f(1.2, 0.3);
    glVertex2f(1.3, 0.4);
    glVertex2f(1.4, 0.35);
    glVertex2f(1.5, 0.25);
    glVertex2f(1.6, 0.3);
    glVertex2f(1.7, 0.35);
    glVertex2f(1.8, 0.4);
    glEnd();
}
*/
/*
void update(int value) {



 _move -= 0.02;
if(_move < -1.5)
{
_move = 0.01;
}
glutPostRedisplay();
glutTimerFunc(20, update, 0);
}*/
/*void update(int value) {



 _move -= 0.02;
if(_move < -1.5)
{
_move = 0.5;
}
glutPostRedisplay();
glutTimerFunc(20, update, 0);
}*/
/*
void volcano()
{
    glBegin(GL_POLYGON);
    glColor3ub(58,41,30);
    glVertex2f(0.8,0.2);glVertex2f(1.4,1.2);
    glVertex2f(1.6,1.2);glVertex2f(2,0.2);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2f(1.4,1.21);glVertex2f(1.3,1.4);
    glVertex2f(1.4,1.3);glVertex2f(1.46,1.45);
    glVertex2f(1.55,1.3);glVertex2f(1.65,1.4);
    glVertex2f(1.6,1.21);
    glEnd();

}
void river()
{
    glBegin(GL_POLYGON);
    glColor3ub(68,187,255);
    glVertex2f(0,0.2);glVertex2f(3,0.2);
    glVertex2f(3,0);glVertex2f(0,0);
    glEnd();
}
void display()
{
    glClearColor(1, 1, 1, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	//river();
	volcano();
	lava();
	river();
	glFlush();

}








int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(500, 320);
	glutInitWindowPosition(200, 50);
	glutCreateWindow("Lab Task - 4");
    //this line must be below of glutCreateWindow();
    gluOrtho2D(0,3,0, 2);
    glutTimerFunc(20, update, 0);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
*/


#include <GL/glut.h>
#include <cmath>

float lavaPosition = 0.0; // Initial position of lava
float gasPosition = 0.5;  // Initial position of gas

void drawVolcano() {
    glColor3ub(150,75,0);
    glBegin(GL_TRIANGLES);
    glVertex2f(0.0, 0.0);
    glVertex2f(-1.0, -1.0);
    glVertex2f(1.0, -1.0);
    glEnd();
}

void drawLava() {
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.2, -1.0 + lavaPosition); // Offset lava position
    glVertex2f(0.2, -1.0 + lavaPosition);
    glVertex2f(0.0, -0.8 + lavaPosition); // Adjust lava height
    glEnd();
}

void drawGas() {
    glColor3f(0.7, 0.7, 0.7);
    glBegin(GL_POLYGON);
    glVertex2f(-0.05, -0.8 + gasPosition); // Offset gas position
    glVertex2f(0.05, -0.8 + gasPosition);
    glVertex2f(0.0, -0.6 + gasPosition); // Adjust gas height
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    drawVolcano();
    drawLava();
    drawGas();

    glutSwapBuffers();
}

void update(int value) {
    lavaPosition -= 0.01; // Move lava downwards
   // gasPosition += 0.02;   // Move gas upwards

    if (lavaPosition < -1.0)
        lavaPosition = 0.8; // Reset lava position

   /* if (gasPosition > 1.0)
        gasPosition = 0.0; */ // Reset gas position

    glutPostRedisplay();
    glutTimerFunc(16, update, 0);
}

void update1(int value) {

    gasPosition += 0.02;
    if (gasPosition > 1.0)
        gasPosition = 0.5;  // Reset gas position

    glutPostRedisplay();
    glutTimerFunc(100, update1, 0);



}


void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Volcano Eruption");

    glutDisplayFunc(display);
    glutTimerFunc(16, update, 0);
    glutTimerFunc(100, update1, 0);

    init();

    glutMainLoop();
    return 0;
}
