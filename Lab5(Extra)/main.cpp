
/*2.Car Wheels
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
*/

//3.Cars Wheels rotate
#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#include <vector>
using namespace std;

float _move = 0;
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
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    glTranslatef(-_move, 0, 0);
    _polygon({{152, 223},{621, 223},{629, 306},{586, 346},{586, 356},{362, 356},{283, 306},{166, 290},{152, 253}}, car);

    glPopMatrix();
}

void _wheel(float radius)
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    glTranslatef(-_move, 0, 0);
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

    glTranslatef(-_move, 0, 0);
    // here the code will reposition the circle
    //glTranslatef(243, 220, 0);
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

    glTranslatef(-_move, 0, 0);
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

    glTranslatef(-_move, 0, 0);
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

    glTranslatef(-_move, 0, 0);
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

    glTranslatef(-_move, 0, 0);
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
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    glTranslatef(-_move, 0, 0);
    _polygon({{300, 301},{403, 301},{403, 341},{365, 341}}, window);
    _polygon({{300, 301},{353, 301},{353, 341},{300, 341}}, window, 120, 0);
    _polygon({{300, 301},{423, 301},{380, 341},{300, 341}}, window, 190, 0);
    _polygon({{162, 264},{182, 264},{198, 284},{173, 284}}, lights, 0, 0);

    glPopMatrix();
}


void _moveFunc(int val)
{
    _move += 4;

    if (_move > 700)
    {
        _move = -600;
    }
    glutPostRedisplay();
    glutTimerFunc(20, _moveFunc, 0);
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

	glutInitWindowPosition(200, 50);
	glutCreateWindow("Lab Task - 5");

    //this line must be below of glutCreateWindow();
    gluOrtho2D(0, 800, 0, 600);
	glutDisplayFunc(display);

    glutTimerFunc(20, _moveFunc, 0);
	glutTimerFunc(20, _rotateFunc, 0);
	glutMainLoop();
	return 0;
}



/*
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


void _body (Color steel = {110, 110, 110}, Color layer = {144, 54, 47})
{
    _polygon({{400, 366},{347, 304},{356, 299},{444, 299},{454, 304}}, layer);
    _polygon({{356, 299},{328, 133},{472, 133},{444, 299}}, steel);
    _polygon({{347, 221},{321, 204},{366, 193},{436, 193},{479, 204},{454, 221},{433, 217},{369, 217}}, layer);
}



void _propeller1(Color prop = {53, 46, 46})
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(398, 320, 0);
    glRotatef(_angle, 0,0,1);
    glTranslatef(-398, -320, 0);
    _polygon({{371, 446},{371, 194},{425, 194},{425, 446}}, prop);
    glPopMatrix();
}


void _propeller2(Color prop = {53, 46, 46})
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(398, 320, 0);
    glRotatef(90, 0,0,1);
    glTranslatef(-398, -320, 0);
    _polygon({{371, 446},{371, 194},{425, 194},{425, 446}}, prop);
    glPopMatrix();
}



void _rotateFunc(int val)
{
    _angle += 2.0f;

    if (_angle > 360.0)
    {
        _angle -= 360;
    }
    glutPostRedisplay();                    //Notify GLUT that the display has changed
    glutTimerFunc(20, _rotateFunc, 0);      //Notify GLUT to call update again in 25 milliseconds
}




void display() {
	glClearColor(1, 1, 1, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	_body();


	_propeller1();

	glMatrixMode(GL_MODELVIEW);
	glPushMatrix();
	glTranslatef(398, 320, 0);
    glRotatef(_angle, 0,0,1);
    glTranslatef(-398, -320, 0);
	_propeller2();
	glPopMatrix();


	glFlush();  								// Render now
	glutSwapBuffers();
}



int main(int argc, char** argv)

{
	glutInit(&argc, argv);
	glutInitWindowSize(800, 600);

	glutInitWindowPosition(200, 50);
	glutCreateWindow("Lab Task - 5");

    //this line must be below of glutCreateWindow();
    gluOrtho2D(0, 800, 0, 600);
	glutDisplayFunc(display);

	glutTimerFunc(20, _rotateFunc, 0);

	glutMainLoop();
	return 0;
}




/*
#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#include <vector>
using namespace std;


float _left = 0;
float _right = 0;

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

void _box1(Color box = {178,137,92}, Color shade = {234,192,150})
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    glTranslatef(-_left, 0, 0);
    _polygon({{568, 374},{621, 358},{675, 374},{675, 453},{621, 462},{568, 453}}, box);
    _polygon({{568, 374},{621, 358},{621, 443},{568, 453}}, shade);

    glPopMatrix();
}

void _box2(Color box = {178,137,92}, Color shade = {234,192,150})
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();

    glTranslatef(_right, 0, 0);
    _polygon({{568, 374},{621, 358},{675, 374},{675, 453},{621, 462},{568, 453}}, box, -500, -200);
    _polygon({{568, 374},{621, 358},{621, 443},{568, 453}}, shade, -500, -200);

    glPopMatrix();
}

void _moveLeft(int val)
{
    _left += 4;
    if (_left > 800)
    {
        _left = -100;
    }
    glutPostRedisplay();
    glutTimerFunc(20, _moveLeft, 0);
}

void _moveRight(int val)
{
    _right += 4;
    if (_right > 800)
    {
        _right = -100;
    }
    glutPostRedisplay();
    glutTimerFunc(20, _moveRight, 0);
}

void display() {
	glClearColor(1, 1, 1, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

    _box1();
    _box2();

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

	glutTimerFunc(20, _moveLeft, 0);
	glutTimerFunc(20, _moveRight, 0);
	glutMainLoop();
	return 0;
}


*/

