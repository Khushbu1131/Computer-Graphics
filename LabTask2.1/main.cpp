#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h



/*void _flagPanel() {
    glColor3ub(255, 255, 255);
    glBegin(GL_LINES);

    glVertex2f(-5.0, -3.0);glVertex2f(5.0, -3.0);
    glVertex2f(5.0, -3.0);glVertex2f(5.0, 4.0);
    glVertex2f(5.0, 4.0);glVertex2f(-5.0, 4.0);
    glVertex2f(-5.0, 4.0);glVertex2f(-5.0, -3.0);

    glEnd();
}


void _shades() {
    //first
    glColor3ub(148,0,211);
    glBegin(GL_POLYGON);

    glVertex2f(-5.0, 3.0);glVertex2f(5.0, 3.0);
    glVertex2f(5.0, 3.0);glVertex2f(5.0, 4.0);
    glVertex2f(5.0, 4.0);glVertex2f(-5.0, 4.0);
    glVertex2f(-5.0, 4.0);glVertex2f(-5.0, 3.0);

    glEnd();


    //second
    glColor3ub(75, 0, 130);
    glBegin(GL_POLYGON);

    glVertex2f(-5.0, 2.0);glVertex2f(5.0, 2.0);
    glVertex2f(5.0, 2.0);glVertex2f(5.0, 3.0);
    glVertex2f(5.0, 3.0);glVertex2f(-5.0, 3.0);
    glVertex2f(-5.0, 3.0);glVertex2f(-5.0, 2.0);

    glEnd();


    //third
    glColor3ub(0,0, 255);
    glBegin(GL_POLYGON);

    glVertex2f(-5.0, 1.0);glVertex2f(5.0, 1.0);
    glVertex2f(5.0, 1.0);glVertex2f(5.0, 2.0);
    glVertex2f(5.0, 2.0);glVertex2f(-5.0, 2.0);
    glVertex2f(-5.0, 2.0);glVertex2f(-5.0, 1.0);

    glEnd();


    //fourth
    glColor3ub(0, 255, 0);
    glBegin(GL_POLYGON);

    glVertex2f(-5.0, 0.0);glVertex2f(5.0, 0.0);
    glVertex2f(5.0, 0.0);glVertex2f(5.0, 1.0);
    glVertex2f(5.0, 1.0);glVertex2f(-5.0, 1.0);
    glVertex2f(-5.0, 1.0);glVertex2f(-5.0, 0.0);

    glEnd();


    //fifth
    glColor3ub(255, 127, 0);
    glBegin(GL_POLYGON);

    glVertex2f(-5.0, -1.0);glVertex2f(5.0, -1.0);
    glVertex2f(5.0, -1.0);glVertex2f(5.0, 0.0);
    glVertex2f(5.0, 0.0);glVertex2f(-5.0, 0.0);
    glVertex2f(-5.0, 0.0);glVertex2f(-5.0, -1.0);

    glEnd();


    //sixth
    glColor3ub(255, 255, 0);
    glBegin(GL_POLYGON);

    glVertex2f(-5.0, -2.0);glVertex2f(5.0, -2.0);
    glVertex2f(5.0, -2.0);glVertex2f(5.0, -1.0);
    glVertex2f(5.0, -1.0);glVertex2f(-5.0, -1.0);
    glVertex2f(-5.0, -1.0);glVertex2f(-5.0, -2.0);

    glEnd();


    //seventh
    glColor3ub(255, 0, 0);
    glBegin(GL_POLYGON);

    glVertex2f(-5.0, -3.0);glVertex2f(5.0, -3.0);
    glVertex2f(5.0, -3.0);glVertex2f(5.0, -2.0);
    glVertex2f(5.0, -2.0);glVertex2f(-5.0, -2.0);
    glVertex2f(-5.0, -2.0);glVertex2f(-5.0, -3.0);

    glEnd();
}


void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	_flagPanel();
	_shades();
	glFlush();
}*/


/*#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h



void _chessPanel() {
    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);

    glVertex2f(-2.0, -2.0);glVertex2f(2.0, -2.0);
    glVertex2f(2.0, -2.0);glVertex2f(2.0, 2.0);
    glVertex2f(2.0, 2.0);glVertex2f(-2.0, 2.0);
    glVertex2f(-2.0, 2.0);glVertex2f(-2.0, -2.0);

    glEnd();
}


void _blackShades() {
    //col 1 black
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(-2.0, 1.0);glVertex2f(-1.0, 1.0);
    glVertex2f(-1.0, 1.0);glVertex2f(-1.0, 2.0);
    glVertex2f(-1.0, 2.0);glVertex2f(-2.0, 2.0);
    glVertex2f(-2.0, 2.0);glVertex2f(-2.0, -1.0);

    glEnd();


    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(-2.0, -1.0);glVertex2f(-1.0, -1.0);
    glVertex2f(-1.0, -1.0);glVertex2f(-1.0, 0.0);
    glVertex2f(-1.0, 0.0);glVertex2f(-2.0, 0.0);
    glVertex2f(-2.0, 0.0);glVertex2f(-2.0, -1.0);

    glEnd();


    //col 3 black
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(0,2);glVertex2f(1,2);
    glVertex2f(1,2);glVertex2f(1,1);
    glVertex2f(1,1);glVertex2f(0,1);
    glVertex2f(0,1);glVertex2f(0,2);

    glEnd();


    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(0,0);glVertex2f(1,0);
    glVertex2f(1,0);glVertex2f(1,-1);
    glVertex2f(1,-1);glVertex2f(0,-1);
    glVertex2f(0,-1);glVertex2f(0,0);

    glEnd();


    //col 2 black
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(-1,1);glVertex2f(0,1);
    glVertex2f(0,1);glVertex2f(0,0);
    glVertex2f(0,0);glVertex2f(-1,0);
    glVertex2f(-1,0);glVertex2f(-1,1);

    glEnd();


    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(-1,-1);glVertex2f(0,-1);
    glVertex2f(0,-1);glVertex2f(0,-2);
    glVertex2f(0,-2);glVertex2f(-1,-2);
    glVertex2f(-1,-2);glVertex2f(-1,-1);

    glEnd();



    //col 4 black
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(1,1);glVertex2f(2,1);
    glVertex2f(2,1);glVertex2f(2,0);
    glVertex2f(2,0);glVertex2f(1,0);
    glVertex2f(1,0);glVertex2f(1,1);

    glEnd();


    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);

    glVertex2f(1,-1);glVertex2f(2,-1);
    glVertex2f(2,-1);glVertex2f(2,-2);
    glVertex2f(2,-2);glVertex2f(1,-2);
    glVertex2f(1,-2);glVertex2f(1,-1);

    glEnd();
}



void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

    _chessPanel();
    _blackShades();
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
}*/



#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(7.5);


	glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.2f,0.2f);  // x, y
	glVertex2f(-0.9f,0.2f);
	glVertex2f(-0.7f,0.08f);     // x, y
	glVertex2f(-0.6f,0.0f);
	glVertex2f(-0.6f,-0.2f);  // x, y
	glVertex2f(-0.4f,-0.2f);
	glVertex2f(-0.2f,-0.2f);
	glEnd();

	glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.2f,0.2f);  // x, y
	glVertex2f(0.9f,0.2f);
	glVertex2f(0.7f,0.08f);     // x, y
	glVertex2f(0.6f,0.0f);
	glVertex2f(0.6f,-0.2f);  // x, y
	glVertex2f(0.4f,-0.2f);
	glVertex2f(0.2f,-0.2f);
	glEnd();

	glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.2f,0.1f);  // x, y
	glVertex2f(0.2f,0.1f);
	glVertex2f(0.2f,-0.2f);      // x, y
	glVertex2f(0.08f,-0.2f);
	glVertex2f(0.0f,-0.4f);  // x, y
	glVertex2f(-0.08f,-0.2f);
	glVertex2f(-0.2f,-0.2f);
	glEnd();

	glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.2f,0.2f);  // x, y
	glVertex2f(-0.2f,0.1f);
	glVertex2f(-0.05f,0.1f);     // x, y
	glVertex2f(-0.17f,0.12f);
	glEnd();

    glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.2f,0.2f);  // x, y
	glVertex2f(0.17f,0.12f);
	glVertex2f(0.05f,0.1f);     // x, y
	glVertex2f(0.2f,0.1f);
	glEnd();

    glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.05f,0.1f);  // x, y
	glVertex2f(0.05f,0.1f);
	glVertex2f(0.0399f,0.14f);     // x, y
	glVertex2f(0.0f,0.15f);
	glVertex2f(-0.0399f,0.14f);
	glEnd();

	glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(-0.05f,0.1f);  // x, y
	glVertex2f(-0.05f,0.2f);
	glVertex2f(-0.028f,0.14f);
	glEnd();

	glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 0.0f, 0.0f); // Red
	glVertex2f(0.05f,0.1f);  // x, y
	glVertex2f(0.05f,0.2f);
	glVertex2f(0.028f,0.14f);
	glEnd();

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}





















