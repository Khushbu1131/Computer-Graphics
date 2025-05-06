
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void batman()
{   glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.65,2);
    glVertex2f(-1.4,2.1);
    glVertex2f(-1.9,2.2);
    glVertex2f(-2.5,3);


glColor3f(0,0,0);
    glBegin(GL_POLYGON);
       glVertex2f(-2.5,3);
       glVertex2f(-7,3);
       glVertex2f(-4,1);
       glVertex2f(-3.6,0.2);

glColor3f(0,0,0);
    glBegin(GL_POLYGON);
       glVertex2f(0,-2);
       glVertex2f(-0.5,-1.5);
       glVertex2f(-1.5,-1);
       glVertex2f(-2.6,-0.8);
        glVertex2f(-4.2,-0.6);
       glVertex2f(-3.6,0.2);

glColor3f(0,0,0);
    glBegin(GL_POLYGON);
       glVertex2f(0,-2);
       glVertex2f(0.5,-1.5);
       glVertex2f(1.5,-1);
       glVertex2f(2.6,-0.8);
        glVertex2f(4,-0.6);
       glVertex2f(3.6,0.2);

      glColor3f(0,0,0);
    glBegin(GL_POLYGON);
       glVertex2f(2.5,3);
       glVertex2f(7,3);
       glVertex2f(4,1);
       glVertex2f(3.6,0.2);



         glColor3f(0,0,0);
    glBegin(GL_POLYGON);
       glVertex2f(0.65,2);
       glVertex2f(1.4,2.1);
       glVertex2f(1.9,2.2);
       glVertex2f(2.5,3);






    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
       glVertex2f(-0.65,2);
       glVertex2f(-0.6,2.2);
        glVertex2f(-0.5,3);

  glColor3f(0,0,0);
    glBegin(GL_POLYGON);
       glVertex2f(-0.5,3);
       glVertex2f(-0.5,2.5);
        //glVertex2f(-0.5,3);


    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
       //glVertex2f(0,2.6);
       glVertex2f(0.5,2.5);
        glVertex2f(0.6,2.2);

        glColor3f(0,0,0);
    glBegin(GL_POLYGON);
       //glVertex2f(0.5,2.5);
       glVertex2f(0.5,3);

    glEnd();
}




void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

   batman();
	glFlush();
}




int main(int argc, char** argv) {
	glutInit(&argc, argv);

	glutInitWindowSize(600, 600);
	glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-600)/2,(glutGet(GLUT_SCREEN_HEIGHT)-600)/2);;
	glutCreateWindow("Lab Task - 2");

    //this line must be below of glutCreateWindow();
    gluOrtho2D(-10, 10, -10, 10);
	glutDisplayFunc(display);

	glutMainLoop();
	return 0;
}
