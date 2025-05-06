/*#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
GLfloat position = 0.0f;
GLfloat position1 = 0.0f;
GLfloat speed = 0.01f;
void dis();
void display();
void update(int value) {
    if (position < -0.5f)
        position = 7.0f;

    position -= speed;

    glutPostRedisplay();

    glutTimerFunc(100, update, 0);
}

void update1(int value) {
    if (position1 > 7.0f)
        position1 = 0.0f;

    position1 += speed;

    glutPostRedisplay();

    glutTimerFunc(100, update1, 0);
}
void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void disback(int val)
{
    glutDisplayFunc(display);
}



void display4(int val) {

 glutDisplayFunc(display);


}




void land1(){
//land
    glBegin(GL_POLYGON);
    glColor3ub(81,164,64);
    glVertex2f(0,2);glVertex2f(7,2);
    glVertex2f(7,0);glVertex2f(0,0);
    glEnd();
}
void sky1(){
//sky

     glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2f(0,2);glVertex2f(7,2);
    glVertex2f(7,7);glVertex2f(0,7);
    glEnd();
}
void sun1()
{


//sun
      glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(255,255,255);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.6;
            float x = r * cos(A)+5.4;
            float y = r * sin(A)+6;
            glVertex2f(x,y);



        }
        glEnd();
}
void tree1(){
    glBegin(GL_POLYGON);
    glColor3ub(138,115,98);
    glVertex2f(2.6,3);glVertex2f(2.9,3);
    glVertex2f(3.2,2.6);glVertex2f(3,2.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(138,115,98);
     glVertex2f(3,2.5);glVertex2f(3.2,2.6);
  glVertex2f(3.2,0.6);glVertex2f(3,0.6);
  glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(138,115,98);
    glVertex2f(3.8,3);glVertex2f(3.5,3);
    glVertex2f(3.2,2.6);glVertex2f(3.4,2.5);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(138,115,98);
    glVertex2f(3.2,2.6);glVertex2f(3.4,2.5);
    glVertex2f(3.4,0.6);glVertex2f(3.2,0.6);
    glEnd();


	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0,1.0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.65;
            float x = r * cos(A)+2.1;
            float y = r * sin(A)+3.1;
            glVertex2f(x,y);



        }
        glEnd();

        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0,1.0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.65;
            float x = r * cos(A)+4.1;
            float y = r * sin(A)+3.25;
            glVertex2f(x,y);



        }
        glEnd();


         glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0,1.0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.3;
            float x = r * cos(A)+3.2;
            float y = r * sin(A)+4;
            glVertex2f(x,y);



        }
        glEnd();

//glFlush();

}

void display3()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glPushMatrix();
    //glTranslatef(position1,0.0f, 0.0f);
    land1();
    sky1();
    sun1();
    tree1();
    glPopMatrix();
    glutTimerFunc(1500,display4,0);
    //glutSwapBuffers();
   glFlush();
}

void display2(int val) {

glutDisplayFunc(display3);


}


void land()
{

//land
    glBegin(GL_POLYGON);
    glColor3ub(81,164,64);
    glVertex2f(0,2);glVertex2f(7,2);
    glVertex2f(7,0);glVertex2f(0,0);
    glEnd();
    glFlush();
}
void sky(){
//sky
     glBegin(GL_POLYGON);
    glColor3ub(115,215,255);
    glVertex2f(0,2);glVertex2f(7,2);
    glVertex2f(7,7);glVertex2f(0,7);
    glEnd();
    glFlush();
}




void sun(){
//sun
      glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(253, 184, 19);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.6;
            float x = r * cos(A)+5.4;
            float y = r * sin(A)+6;
            glVertex2f(x,y);



        }
        glEnd();
        glFlush();
}

void tree(){
    glBegin(GL_POLYGON);
    glColor3ub(138,115,98);
    glVertex2f(2.6,3);glVertex2f(2.9,3);
    glVertex2f(3.2,2.6);glVertex2f(3,2.5);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(138,115,98);
     glVertex2f(3,2.5);glVertex2f(3.2,2.6);
  glVertex2f(3.2,0.6);glVertex2f(3,0.6);
  glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(138,115,98);
    glVertex2f(3.8,3);glVertex2f(3.5,3);
    glVertex2f(3.2,2.6);glVertex2f(3.4,2.5);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(138,115,98);
    glVertex2f(3.2,2.6);glVertex2f(3.4,2.5);
    glVertex2f(3.4,0.6);glVertex2f(3.2,0.6);
    glEnd();


	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0,1.0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.65;
            float x = r * cos(A)+2.1;
            float y = r * sin(A)+3.1;
            glVertex2f(x,y);



        }
        glEnd();

        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0,1.0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.65;
            float x = r * cos(A)+4.1;
            float y = r * sin(A)+3.25;
            glVertex2f(x,y);



        }
        glEnd();


         glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0,1.0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.3;
            float x = r * cos(A)+3.2;
            float y = r * sin(A)+4;
            glVertex2f(x,y);



        }
        glEnd();
       glFlush();

}
void display(){
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();
    glPushMatrix();
    land();
    sky();
    sun();
    tree();

glPopMatrix();

glutTimerFunc(1500,display2,20);
glFlush();

}
void dis()
{
glutDisplayFunc(display);
}




int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(300,200);
	//glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1100)/2,(glutGet(GLUT_SCREEN_HEIGHT)-600)/2);

	glutInitWindowPosition(50, 50);
	glutCreateWindow("Lab Task - 7");
    //this line must be below of glutCreateWindow();
    gluOrtho2D(0,7,0,7);
    glutDisplayFunc(dis);
	init();
	  glutTimerFunc(100, update, 0);
	  glutTimerFunc(100, update1, 0);

	glutMainLoop();
	return 0;
}
*/
/*
#include <windows.h>
#include <GL/glut.h>
#include <math.h>

bool isDay = true; // Flag to track day or night

void tree() {
    // Land
    glBegin(GL_POLYGON);
    glColor3ub(81, 164, 64);
    glVertex2f(0, 2);
    glVertex2f(7, 2);
    glVertex2f(7, 0);
    glVertex2f(0, 0);
    glEnd();
    // Sky
    glBegin(GL_POLYGON);
    if (isDay)
        glColor3ub(115, 215, 255); // Daytime color
    else
        glColor3ub(0, 0, 51);      // Nighttime color
    glVertex2f(0, 2);
    glVertex2f(7, 2);
    glVertex2f(7, 7);
    glVertex2f(0, 7);
    glEnd();
    // Sun or Moon
    glBegin(GL_POLYGON);
    if (isDay)
        glColor3ub(253, 184, 19); // Sun color
    else
        glColor3ub(192, 192, 192); // Moon color
    for (int i = 0; i < 200; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.6;
        float x = r * cos(A) + 5.4;
        float y = r * sin(A) + 6;
        glVertex2f(x, y);
    }
    glEnd();
    // Trees
    glBegin(GL_POLYGON);
    glColor3ub(138, 115, 98);
    glVertex2f(2.6, 3);
    glVertex2f(2.9, 3);
    glVertex2f(3.2, 2.6);
    glVertex2f(3, 2.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(138, 115, 98);
    glVertex2f(3, 2.5);
    glVertex2f(3.2, 2.6);
    glVertex2f(3.2, 0.6);
    glVertex2f(3, 0.6);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(138, 115, 98);
    glVertex2f(3.8, 3);
    glVertex2f(3.5, 3);
    glVertex2f(3.2, 2.6);
    glVertex2f(3.4, 2.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(138, 115, 98);
    glVertex2f(3.2, 2.6);
    glVertex2f(3.4, 2.5);
    glVertex2f(3.4, 0.6);
    glVertex2f(3.2, 0.6);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0); // Tree leaves color
    for (int i = 0; i < 200; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.65;
        float x = r * cos(A) + 2.1;
        float y = r * sin(A) + 3.1;
        glVertex2f(x, y);
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0); // Tree leaves color
    for (int i = 0; i < 200; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.65;
        float x = r * cos(A) + 4.1;
        float y = r * sin(A) + 3.25;
        glVertex2f(x, y);
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0); // Tree leaves color
    for (int i = 0; i < 200; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 1.3;
        float x = r * cos(A) + 3.2;
        float y = r * sin(A) + 4;
        glVertex2f(x, y);
    }
    glEnd();
}

void display() {
    glClearColor(1, 1, 1, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    tree();
    glFlush();
}

void updateSky(int value) {
    isDay = !isDay; // Toggle day/night
    glutPostRedisplay(); // Call display function
    glutTimerFunc(5000, updateSky, 0); // Change every 5 seconds
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 320);
    glutInitWindowPosition(200, 50);
    glutCreateWindow("Day and Night Scenario");
    gluOrtho2D(0, 7, 0, 7);
    glutDisplayFunc(display);
    updateSky(0); // Start the timer to update the sky
    glutMainLoop();
    return 0;
}
*/








#include <windows.h>
#include <GL/glut.h>
#include <math.h>

bool isDay = true; // Flag to track day or night

void tree() {
    // Land
    glBegin(GL_POLYGON);
    glColor3ub(81, 164, 64);
    glVertex2f(0, 2);
    glVertex2f(7, 2);
    glVertex2f(7, 0);
    glVertex2f(0, 0);
    glEnd();
    // Sky
    glBegin(GL_POLYGON);
    if (isDay)
        glColor3ub(115, 215, 255); // Daytime color
    else
        glColor3ub(0, 0, 51);      // Nighttime color
    glVertex2f(0, 2);
    glVertex2f(7, 2);
    glVertex2f(7, 7);
    glVertex2f(0, 7);
    glEnd();
    // Sun or Moon
    glBegin(GL_POLYGON);
    if (isDay)
        glColor3ub(253, 184, 19); // Sun color
    else
        glColor3ub(192, 192, 192); // Moon color
    for (int i = 0; i < 200; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.6;
        float x = r * cos(A) + 5.4;
        float y = r * sin(A) + 6;
        glVertex2f(x, y);
    }
    glEnd();
    // Trees
    glBegin(GL_POLYGON);
    glColor3ub(138, 115, 98);
    glVertex2f(2.6, 3);
    glVertex2f(2.9, 3);
    glVertex2f(3.2, 2.6);
    glVertex2f(3, 2.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(138, 115, 98);
    glVertex2f(3, 2.5);
    glVertex2f(3.2, 2.6);
    glVertex2f(3.2, 0.6);
    glVertex2f(3, 0.6);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(138, 115, 98);
    glVertex2f(3.8, 3);
    glVertex2f(3.5, 3);
    glVertex2f(3.2, 2.6);
    glVertex2f(3.4, 2.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(138, 115, 98);
    glVertex2f(3.2, 2.6);
    glVertex2f(3.4, 2.5);
    glVertex2f(3.4, 0.6);
    glVertex2f(3.2, 0.6);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0); // Tree leaves color
    for (int i = 0; i < 200; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.65;
        float x = r * cos(A) + 2.1;
        float y = r * sin(A) + 3.1;
        glVertex2f(x, y);
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0); // Tree leaves color
    for (int i = 0; i < 200; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.65;
        float x = r * cos(A) + 4.1;
        float y = r * sin(A) + 3.25;
        glVertex2f(x, y);
    }
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(0, 255, 0); // Tree leaves color
    for (int i = 0; i < 200; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 1.3;
        float x = r * cos(A) + 3.2;
        float y = r * sin(A) + 4;
        glVertex2f(x, y);
    }
    glEnd();
}

void display() {
    glClearColor(1, 1, 1, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
    tree();
    glFlush();
}

void toggleDayNight(unsigned char key, int x, int y) {
    if (key == 'D' || key == 'd') {
        isDay = true;
    } else if (key == 'N' || key == 'n') {
        isDay = false;
    }
    glutPostRedisplay(); // Redraw the scene
}

void updateSky(int value) {
    isDay = !isDay; // Toggle day/night
    glutPostRedisplay(); // Call display function
    glutTimerFunc(5000, updateSky, 0); // Change every 5 seconds
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(500, 320);
    glutInitWindowPosition(200, 50);
    glutCreateWindow("Day and Night Scenario");
    gluOrtho2D(0, 7, 0, 7);
    glutDisplayFunc(display);
    glutKeyboardFunc(toggleDayNight); // Register keyboard callback function
    updateSky(0); // Start the timer to update the sky
    glutMainLoop();
    return 0;
}


