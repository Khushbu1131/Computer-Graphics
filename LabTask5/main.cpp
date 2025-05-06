/*#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#include <vector>
using namespace std;

float _move = 0.0f;
float _move1= 0.0f;

void drawScene() {
glClear(GL_COLOR_BUFFER_BIT);
glColor3d(1,0,0);
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);

 glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_QUADS);
glVertex2f(0.1f, 0.0f);
glVertex2f(0.5f, 0.0f);
glVertex2f(0.5f, 0.2f);
glVertex2f(0.1f, 0.2);
glEnd();
    glPopMatrix();

glPushMatrix();
	glTranslatef(-_move1, 0.0f, 0.0f);
	glBegin(GL_QUADS);
    glVertex2f(0.1f+0.1, 0.0f);
    glVertex2f(0.5f+0.1, 0.0f);
    glVertex2f(0.5f+0.1, 0.2f);
    glVertex2f(0.1f+0.1, 0.2);
	glEnd();
    glPopMatrix();

	glutSwapBuffers();

glEnd();




glPopMatrix();
glutSwapBuffers();






}*/
/*void drawScene1() {
glClear(GL_COLOR_BUFFER_BIT);
glColor3d(1,0,0);
glLoadIdentity(); //Reset the drawing perspective
glMatrixMode(GL_MODELVIEW);
 glPushMatrix();
glTranslatef(-_move1, 0.0f, 0.0f);
glBegin(GL_QUADS);

glVertex2f(0.1f+0.5, 0.0f);
glVertex2f(0.5+0.5f, 0.0f);
glVertex2f(0.5f+0.5, 0.2f);
glVertex2f(0.1f+0.5, 0.2);

glEnd();
glPopMatrix();
glutSwapBuffers();
}
*/
/*void update(int value) {



 _move += .02;
if(_move > 1.3)
{
_move -= 1.0;
}
glutPostRedisplay();
glutTimerFunc(20, update, 0);
}

void update1(int value) {

 _move1 += .02;
if(_move1 > 1.3)
{
_move1 -= 1.0;
}
glutPostRedisplay();
glutTimerFunc(20, update1, 0);
}*/
/*void display() {
	glClearColor(1, 1, 1, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
    glTranslatef(_move, 0.0f, 0.0f);
    drawScene();
    glTranslatef(-_move, 0.0f, 0.0f);
    drawScene1();
    glPopMatrix();
	glFlush();  								// Render now
	glutSwapBuffers();
}*/

/*int main(int argc, char** argv) {
glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(800, 800);
glutCreateWindow("Transformation");
glutDisplayFunc(drawScene);
gluOrtho2D(-2,2,-2,2);
glutTimerFunc(20, update, 0); //Add a timer
glutTimerFunc(20, update1, 0);
glutMainLoop();
return 0;
}
*/


#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
using namespace std;

float _move = 0.0f;
float _move1 = 0.0f;

void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1,0,0);
	glLoadIdentity();                   //Reset the drawing perspective
	glMatrixMode(GL_MODELVIEW);

    glPushMatrix();
	glTranslatef(_move, 0.0f, 0.0f);
    glBegin(GL_QUADS);
    glVertex2f(0.1f, 0.0f);
    glVertex2f(0.5f, 0.0f);
    glVertex2f(0.5f, 0.2f);
    glVertex2f(0.1f, 0.2);
	glEnd();
	glPopMatrix();

	glPushMatrix();
	glTranslatef(_move1, 0.0f, 0.0f);
	glBegin(GL_QUADS);
    glVertex2f(0.1f, 0.0f+0.5);
    glVertex2f(0.5f, 0.0f+0.5);
    glVertex2f(0.5f, 0.2f+0.5);
    glVertex2f(0.1f, 0.2+0.5);
	glEnd();
    glPopMatrix();

	glutSwapBuffers();
}

void update(int value) {
    _move -= 0.02f;
    if(_move < 1.3){
        _move +=1;
    }
	glutPostRedisplay();                //Notify GLUT that the display has changed

	glutTimerFunc(20, update, 0);       //Notify GLUT to call update again in 25 milliseconds
}

void update1(int value) {
    _move1 += 0.02f;
    if(_move1 > 1.3){
        _move1 -= 1.0;
    }
	glutPostRedisplay();                //Notify GLUT that the display has changed

	glutTimerFunc(20, update1, 0);       //Notify GLUT to call update again in 25 milliseconds
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(800, 800);
	glutCreateWindow("Transformation");
	glutDisplayFunc(drawScene);
	glutTimerFunc(20, update, 0);       //Add a timer
	glutTimerFunc(20, update1, 0);       //Add a timer
	glutMainLoop();
	return 0;
}

