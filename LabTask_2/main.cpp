#include <windows.h>  // for MS Windows
#include <GL/glut.h>



void rect(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, int r, int g, int b)
{
    glBegin(GL_POLYGON);

    glColor3ub(r,g,b);

    glVertex2f(x1, y1);

    glVertex2f(x2, y2);

    glVertex2f(x3, y3);

    glVertex2f(x4, y4);

    glEnd();

}


void Rainbow()
{
	glColor3f(1.0f, 0.0f, 0.0f);

	rect(-3,4,3,4,3,3,-3,3,154,11,181);
	rect(-3,3,3,3,3,2,-3,2,0,0,255);
	rect(-3,2,3,2,3,1,-3,1,148,220,237);
	rect(-3,1,3,1,3,0,-3,0,0,255,0);
	rect(-3,0,3,0,3,-1,-3,-1,255,87,51);
	rect(-3,-1,3,-1,3,-2,-3,-2,241,237,86);
	rect(-3,-2,3,-2,3,-3,-3,-3,255,0,0);

    glEnd();

	glFlush();

}

void chessboard()
{
    glColor3f(1.0f, 0.0f, 0.0f);

    rect(-4,4,-2,4,-2,2,-4,2,0,0,0);
    rect(-2,4,0,4,0,2,-2,2,218,186,139);
    rect(0,4,2,4,2,2,0,2,0,0,0);
    rect(2,4,4,4,4,2,2,2,218,186,139);

    rect(-4,2,-2,2,-2,0,-4,0,218,186,139);
    rect(-2,2,0,2,0,0,-2,0,0,0,0);
    rect(0,2,2,2,2,0,0,0,218,186,139);
    rect(2,2,4,2,4,0,2,0,0,0,0);

    rect(-4,0,-2,0,-2,-2,-4,-2,0,0,0);
    rect(-2,0,0,0,0,-2,-2,-2,218,186,139);
    rect(0,0,2,0,2,-2,0,-2,0,0,0);
    rect(2,0,4,0,4,-2,2,-2,218,186,139);

    rect(-4,-2,-2,-2,-2,-4,-4,-4,218,186,139);
    rect(-2,-2,0,-2,0,-4,-2,-4,0,0,0);
    rect(0,-2,2,-2,2,-4,0,-4,218,186,139);
    rect(2,-2,4,-2,4,-4,2,-4,0,0,0);

}

void polygon1()
{
    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

	//glVertex2f(-15.0f, 8.5f);
	//glVertex2f(-6.0f, 9.0f);
	//glVertex2f(-4.0f, 6.5f);
	//glVertex2f(-3.0f, 6.5f);
	//glVertex2f(-1.5f, 8.5f);
	//glVertex2f(-1.0f, 6.0f);

	glVertex2f(0.0f, 6.0f);
    glVertex2f(1.0f, 6.0f);
    glVertex2f(1.5f, 8.5f);
    glVertex2f(3.0f, 6.5f);
    glVertex2f(4.0f, 6.5f);
	glVertex2f(6.0f, 9.0f);
	glVertex2f(15.0f, 8.5f);
    glVertex2f(7.2f, 6.0f);
    glVertex2f(6.5f, 3.0f);
	glVertex2f(4.0f, 2.0f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(0.0f, -4.0f);

	//glVertex2f(-1.0f, -1.0f);
	//glVertex2f(-4.0f, 2.0f);
	//glVertex2f(-6.5f, 3.0f);
    //glVertex2f(-7.2f, 6.0f);

    glEnd();
}

void polygon2()
{
    glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);

    glVertex2f(0.0f, 6.0f);
    glVertex2f(-1.0f, 6.0f);
    glVertex2f(-1.5f, 8.5f);
    glVertex2f(-3.0f, 6.5f);
    glVertex2f(-4.0f, 6.5f);
	glVertex2f(-6.0f, 9.0f);
	glVertex2f(-15.0f, 8.5f);
    glVertex2f(-7.2f, 6.0f);
    glVertex2f(-6.5f, 3.0f);
	glVertex2f(-4.0f, 2.0f);
	glVertex2f(-1.0f, -1.0f);
	glVertex2f(0.0f, -4.0f);
	glEnd();
}

void batman()
{
    polygon1();
    polygon2();

}

void display() {
    glClearColor(255.0f, 255.0f, 255.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
	glLineWidth(2);
    batman();
	glEnd();
    glFlush();

}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(600, 600);
	glutCreateWindow("Rainbow");
    glutDisplayFunc(display);
	gluOrtho2D(-20,20,-20,20);
	glutMainLoop();
	return 0;
}

