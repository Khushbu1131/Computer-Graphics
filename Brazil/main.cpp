#include <windows.h>  // for MS Windows
#include <GL/glut.h>
#include <math.h> // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glPointSize(5.0);

    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(0.0f, 1.0f, 0.0f); // Red

	glVertex2f(0,0);    // x, y
	glVertex2f(9,0);    // x, y

	glVertex2f(9,0);
	glVertex2f(9,4);    // x, y

	glVertex2f(9,4);    // x, y
	glVertex2f(0,4);    // x, y

	glVertex2f(0,4);
	glVertex2f(0,0);

    glEnd();



    glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 0.0f); // Red

	glVertex2f(1,2);    // x, y
	glVertex2f(4.5,3.5);    // x, y

	glVertex2f(4.5,3.5);
	glVertex2f(8,2);    // x, y

	glVertex2f(8,2);    // x, y
	glVertex2f(4.5,0.5);    // x, y

	glVertex2f(4.5,0.5);
	glVertex2f(1,2);

    glEnd();


     glBegin(GL_POLYGON);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 1.0f, 1.0f); // Red

	glVertex2f(3.5,2.4);    // x, y
	glVertex2f(5.5,2);    // x, y

	glVertex2f(5.5,2);
	glVertex2f(5.4,1.9);    // x, y

	glVertex2f(5.4,1.9);    // x, y
	glVertex2f(3.5,2.2);    // x, y

	glVertex2f(3.5,2.2);
	glVertex2f(3.5,2.4);

    glEnd();






  glLineWidth(7.5);
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0,0,1.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+4.5,y+2);


        }


	glEnd();







	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	gluOrtho2D(-10,10,-10,10);
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
