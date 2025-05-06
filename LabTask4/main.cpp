#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <math.h>
#include <vector>

void sky()
{
    glColor3ub(135, 206, 235);
    glBegin(GL_POLYGON);
    glVertex2f(-10,0);glVertex2f(5,0);
    glVertex2f(5,5);glVertex2f(-10,5);

    glEnd();
}


void _signals(float radius, float xC, float yC, float r, float g, float b) {
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++){
        glColor3ub(r,g,b);
        float pi=3.1416;
        float A=(i*2*pi)/200;
        float r=radius;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x+xC, y+yC);
    }
    glEnd();
}
void signalbox()
{    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
        glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);

    glVertex2f(-5.6,1.5);glVertex2f(-6.4,1.5);
    glVertex2f(-6.4,3.8);glVertex2f(-5.6,3.8);

    glEnd();

}

void signalhandle()
{    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);
        glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);

    glVertex2f(-6.2,0);glVertex2f(-6.2,1.5);
    glVertex2f(-5.8,1.5);glVertex2f(-5.8,0);

    glEnd();



}
void road() {
    glColor3ub(192, 189, 179);
    glBegin(GL_POLYGON);

    glVertex2f(-10, 0);glVertex2f(5, 0);
    glVertex2f(5,-2);glVertex2f(-10, -2);


    glEnd();
}
void car1()
{
     glColor3ub(120, 81, 169);
    glBegin(GL_POLYGON);

    glVertex2f(-5.4,0.2);glVertex2f(-5.4,0.8);
    glVertex2f(-4.6,1.4);glVertex2f(-3.8,1.4);
    glVertex2f(-3,0.8);glVertex2f(-3,0.2);
     glEnd();
    //glass
     glColor3ub(216, 191, 216);
    glBegin(GL_POLYGON);
    glVertex2f(-4.6,1.2);glVertex2f(-5.2,0.8);
    glVertex2f(-4.6,0.8);
    glEnd();

    glColor3ub(216, 191, 216);
    glBegin(GL_POLYGON);
    glVertex2f(-4.6,1.2);glVertex2f(-4.6,0.8);
    glVertex2f(-3.6,0.8);glVertex2f(-3.8,1.2);
    glEnd();

    glColor3ub(216, 191, 216);
    glBegin(GL_POLYGON);
    glVertex2f(-3.8,1.2);glVertex2f(-3.6,0.8);
    glVertex2f(-3.2,0.8);
    glEnd();


    //lights

      glColor3ub(255, 234, 0);
    glBegin(GL_POLYGON);

    glVertex2f(-5.2,0.6);glVertex2f(-5.2,0.4);
    glVertex2f(-5,0.5);
    glEnd();

      glColor3ub(255, 234, 0);
    glBegin(GL_POLYGON);

    glVertex2f(-3.2,0.4);glVertex2f(-3.2,0.6);
    glVertex2f(-3.4,0.5);
    glEnd();

    //tire
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-5.2,0);glVertex2f(-5.2,0.2);
    glVertex2f(-4.8,0.2);glVertex2f(-4.8,0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-3.6,0.2);glVertex2f(-3.2,0.2);
    glVertex2f(-3.2,0);glVertex2f(-3.6,0);
    glEnd();
}





void car2()
{
     glColor3ub(9, 121, 105);
    glBegin(GL_POLYGON);

    glVertex2f(-1.8,1.4);glVertex2f(-0.8,1.4);
    glVertex2f(-0.2,0.8);glVertex2f(-0.2,0.2);
    glVertex2f(-2.4,0.2);glVertex2f(-2.4,0.8);
     glEnd();
    //glass
     glColor3ub(175, 225, 175);
    glBegin(GL_POLYGON);
    glVertex2f(-1.8,1.2);glVertex2f(-2.2,0.8);
    glVertex2f(-1.8,0.8);
    glEnd();

    glColor3ub(175, 225, 175);
    glBegin(GL_POLYGON);
    glVertex2f(-1.8,1.2);glVertex2f(-0.8,1.2);
    glVertex2f(-0.8,0.8);glVertex2f(-1.8,0.8);
    glEnd();

    glColor3ub(175, 225, 175);
    glBegin(GL_POLYGON);
    glVertex2f(-0.8,1.2);glVertex2f(-0.4,0.8);
    glVertex2f(-0.8,0.8);
    glEnd();


    //lights

      glColor3ub(255, 234, 0);
    glBegin(GL_POLYGON);

    glVertex2f(-2.2,0.6);glVertex2f(-2.2,0.4);
    glVertex2f(-2,0.5);
    glEnd();

      glColor3ub(255, 234, 0);
    glBegin(GL_POLYGON);

    glVertex2f(-0.4,0.6);glVertex2f(-0.4,0.4);
    glVertex2f(-0.6,0.5);
    glEnd();

    //tire
    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-2.2,0);glVertex2f(-2.2,0.2);
    glVertex2f(-1.8,0.2);glVertex2f(-1.8,0);
    glEnd();

    glColor3ub(0, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.4,0.2);glVertex2f(-0.8,0.2);
    glVertex2f(-0.8,0);glVertex2f(-0.4,0);
    glEnd();
}












void display() {
	glClearColor(1, 1, 1, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

    sky();
     signalbox();
     signalhandle();
     road();
    _signals(.3,-6,3.2,255,0,0);
    _signals(.3,-6,2.6,234, 201, 79);
    _signals(.3,-6,2,0,255,0);
      car1();
      car2();
	glFlush();  								// Render now
}




int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(500, 320);
	//glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1100)/2,(glutGet(GLUT_SCREEN_HEIGHT)-600)/2);

	glutInitWindowPosition(200, 50);
	glutCreateWindow("Lab Task - 4");
    //this line must be below of glutCreateWindow();
        gluOrtho2D(-10,3, -2, 5);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
