#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
void _axis() {
    glColor3ub(0, 0, 0);

    glBegin(GL_LINES);

    glVertex2f(-1.0, 0.0);glVertex2f(1.0, 0.0);
    glVertex2f(0.0, 1.0); glVertex2f(0.0, -1.0);

    glEnd();
}

void _rectangle() {
    glColor3ub(255, 0, 0);
    glBegin(GL_POLYGON);

    glVertex2f(-0.8, 0.2);glVertex2f(-0.3, 0.2);
    glVertex2f(-0.3, 0.2);glVertex2f(-0.3, 0.6);
    glVertex2f(-0.3, 0.6);glVertex2f(-0.8, 0.6);
    glVertex2f(-0.8, 0.6);glVertex2f(-0.8, 0.2);

    glEnd();
}

void _triangle3rdQuad() {
    glColor3ub(117, 52, 255);
    glBegin(GL_POLYGON);

    glVertex2f(-0.8, -0.45);glVertex2f(-0.3, -0.7);
    glVertex2f(-0.3, -0.7);glVertex2f(-0.3, -0.2);
    glVertex2f(-0.3, -0.2);glVertex2f(-0.8, -0.45);

    glEnd();
}

void _arrow() {
    glColor3ub(0, 255, 0);

    glBegin(GL_POLYGON);

    glVertex2f(0.2, 0.3);glVertex2f(0.5, 0.3);
    glVertex2f(0.5, 0.3);glVertex2f(0.5, 0.5);
    glVertex2f(0.5, 0.5);glVertex2f(0.2, 0.5);
    glVertex2f(0.2, 0.5);glVertex2f(0.2, 0.3);

    glEnd();

    glBegin(GL_POLYGON);

    glVertex2f(0.5, 0.2);glVertex2f(0.8, 0.4);
    glVertex2f(0.8, 0.4);glVertex2f(0.5, 0.6);
    glVertex2f(0.5, 0.6);glVertex2f(0.5, 0.2);

    glEnd();
}

void _triangle4thQuad() {
    glColor3ub(255, 255, 0);
    glBegin(GL_POLYGON);

    glVertex2f(0.4, -0.2);glVertex2f(0.1, -0.6);
    glVertex2f(0.1, -0.6);glVertex2f(0.7, -0.6);
    glVertex2f(0.7, -0.6);glVertex2f(0.4, -0.2);

    glEnd();
}


void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

    _axis();
    _rectangle();
    _triangle3rdQuad();
    _arrow();
    _triangle4thQuad();
	glFlush();
}

//void display() {
	//glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	//glClear(GL_COLOR_BUFFER_BIT);



	/*glBegin(GL_POLYGON);
glColor3f(1.0f, 0.0f, 0.0f); // Red

	glVertex2f(0.2f, 0.5f);
	glVertex2f(0.5f, 0.2f);
	glVertex2f(0.5f, 0.2f);
	glVertex2f(0.5f, -0.2f);
	glVertex2f(0.5f, -0.2f);
	glVertex2f(0.2f, -0.5f);
	glVertex2f(0.2f, -0.5f);
	glVertex2f(-0.2f, -0.5f);
	glVertex2f(-0.2f, -0.5f);
	glVertex2f(-0.5f, -0.2f);
	glVertex2f(-0.5f, -0.2f);
	glVertex2f(-0.5f, 0.2f);
	glVertex2f(-0.5f, 0.2f);
	glVertex2f(-0.2f, 0.5f);
	glVertex2f(-0.2f, 0.5f);
	glVertex2f(0.2f, 0.5f);*/







/*glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.5f, 0.0f);//-----------------------QUADS----------------------------------
	glVertex2f(0.4f, 0.5f);
	glVertex2f(0.1f, 0.5f);8/

	/*glLineWidth(0.5);
glBegin(GL_LINES);
glColor3f(0.0f, 0.0f, 0.0f); //
	glVertex2f(0.0f, 0.0f);    // x, y
	glVertex2f(0.5f, 0.0f);
	glVertex2f(0.5f, 0.0f);
	glVertex2f(0.5f, 0.5f);
	glVertex2f(0.5f, 0.5f);  //--------------------------------------------square----------------------------------------------
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.0f, 0.0f);
	glVertex2f(0.0f, 0.5f);
	glVertex2f(0.0f, 0.0f);*/


	//glEnd();
	//glFlush();
//}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
