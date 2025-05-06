#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#include <vector>
using namespace std;


float _angle = 0;

struct Color
{
    int r;
    int g;
    int b;
};

void _polygon(vector<pair<float, float>> coord, Color color = {0, 0, 0}, float Tx = 0, float Ty = 0, float s = 1)
{
    glColor3ub(color.r, color.g, color.b);
    glBegin(GL_POLYGON);
    for (int i = 0; i < coord.size(); i++) {
        glVertex2f(Tx + s * coord[i].first, Ty + s * coord[i].second);
    }
    glEnd();
}

void _car(Color car = {56,143,188})
{
    _polygon({{152, 223},{621, 223},{629, 306},{586, 346},{586, 356},{362, 356},{283, 306},{166, 290},{152, 253}}, car);
}

void _wheel(float radius)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    // here the code will reposition the circle
    glTranslatef(243, 220, 0);
    glRotatef(_angle, 0, 0, 1);

    glLineWidth(10);
    glBegin(GL_POLYGON);

    for(int i=0; i<200; i++)
    {
        glColor3ub(0,0,0);
        float pi = 3.1416;
        float A = (i*2*pi)/200;
        float r = radius;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();


    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    // here the code will reposition the circle
    glTranslatef(243, 220, 0);
    glRotatef(_angle, 0, 0, 1);

    glLineWidth(10);
    glBegin(GL_POLYGON);

    for(int i=0; i<200; i++)
    {
        glColor3ub(255,255,255);
        float pi = 3.1416;
        float A = (i*2*pi)/200;
        float r = radius-10;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    // here the code will reposition the circle
    glTranslatef(243, 220, 0);
    glRotatef(_angle, 0, 0, 1);

    glLineWidth(10);
    glBegin(GL_LINES);

    for(int i=0; i<200; i++)
    {
        glColor3ub(255,255,255);
        float pi = 3.1416;
        float A = (i*2*pi)/200;
        float r = radius;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    glTranslatef(537, 220, 0);
    glRotatef(_angle, 0, 0, 1);

    glLineWidth(10);
    glBegin(GL_POLYGON);

    for(int i=0; i<200; i++)
    {
        glColor3ub(0,0,0);
        float pi = 3.1416;
        float A = (i*2*pi)/200;
        float r = radius;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    // here the code will reposition the circle
    glTranslatef(537, 220, 0);
    glRotatef(_angle, 0, 0, 1);

    glLineWidth(10);
    glBegin(GL_POLYGON);

    for(int i=0; i<200; i++)
    {
        glColor3ub(255,255,255);
        float pi = 3.1416;
        float A = (i*2*pi)/200;
        float r = radius-10;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    glTranslatef(537, 220, 0);
    glRotatef(_angle, 0, 0, 1);

    glLineWidth(10);
    glBegin(GL_LINES);

    for(int i=0; i<200; i++)
    {
        glColor3ub(255,255,255);
        float pi = 3.1416;
        float A = (i*2*pi)/200;
        float r = radius;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y);
    }
    glEnd();
    glPopMatrix();
}


void _window(Color window = {28,30,71}, Color lights = {255,193,92})
{
    _polygon({{300, 301},{403, 301},{403, 341},{365, 341}}, window);
    _polygon({{300, 301},{353, 301},{353, 341},{300, 341}}, window, 120, 0);
    _polygon({{300, 301},{423, 301},{380, 341},{300, 341}}, window, 190, 0);
    _polygon({{162, 264},{182, 264},{198, 284},{173, 284}}, lights, 0, 0);
}

void _rotateFunc(int val)
{
    _angle += 2.0f;

    if (_angle > 360.0)
    {
        _angle -= 360;
    }
    glutPostRedisplay();                //Notify GLUT that the display has changed
    glutTimerFunc(20, _rotateFunc, 0);      //Notify GLUT to call update again in 25 milliseconds
}

void display() {
	glClearColor(0, 0, 0, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

    _car();
    _wheel(40);
    _window();

	glFlush();  								// Render now
	glutSwapBuffers();
}



int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitWindowSize(800, 600);

	//glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1100)/2,(glutGet(GLUT_SCREEN_HEIGHT)-600)/2);
	glutInitWindowPosition(200, 50);
	glutCreateWindow("Lab Task - 5");

    //this line must be below of glutCreateWindow();
    gluOrtho2D(0, 800, 0, 600);
	glutDisplayFunc(display);

	glutTimerFunc(20, _rotateFunc, 0);
	glutMainLoop();
	return 0;
}








/*#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>

float _angle1 = 0.0f;
float _move=0.0f;
void wheel() {
    glPushMatrix();
    glTranslatef(_move,0.0f,0.0f);
    glTranslatef(0.4,0.0f,0.0f);
    glRotatef(_angle1, 0.0f, 0.0f, 1.0f);






    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 200; i++) {
        glColor3f(1.0, 1.0, 0.0);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 0.09;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x, y); // Use the computed x and y values as vertex coordinates
    }
    glEnd();
    glPopMatrix();
}

void drawScene() {
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3d(1, 0, 0);
    wheel();
    glutSwapBuffers();
}
void update(int value) {
_move += .02;
if(_move > 1.3)
{
_move = -1.0;
}
glutPostRedisplay();
glutTimerFunc(20, update, 0);
}


void update1(int value) {
    _angle1 += 2.0f;
    if (_angle1 > 360.0) {
        _angle1 -= 360;
    }
    glutPostRedisplay();
    glutTimerFunc(20, update1, 0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutCreateWindow("Transformation");
    glutDisplayFunc(drawScene);
    gluOrtho2D(-1, 1, -1, 1);
    glutTimerFunc(20, update, 0);
    glutTimerFunc(20, update1, 0);
    glutMainLoop();
    return 0;
}*/


































