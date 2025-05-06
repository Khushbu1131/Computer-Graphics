#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h>
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
//ITALY
void line()

{   glLineWidth(5);
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0,0);
    glVertex2f(0.5,0);
    glVertex2f(0.5,0);
    glVertex2f(0.5,0.5);
    glVertex2f(0.5,0.5);
    glVertex2f(0,0.5);
    glVertex2f(0,0.5);
    glVertex2f(0,0);

    glEnd();
    glFlush();

}

void line1()
{  glLineWidth(5);
   //glBegin(GL_LINES);
   glBegin(GL_POLYGON);
   glColor3f(1.0,1.0,1.0);//white

   glVertex2f(0.142,0.5);
    glVertex2f(0.338,0.5);
    glVertex2f(0.338,0.5);
    glVertex2f(0.338,0);
    glVertex2f(0.142,0);
    glVertex2f(0.142,0.5);




    glEnd();
    glFlush();
}

void line2()
{  glLineWidth(5);
   //glBegin(GL_LINES);
   glBegin(GL_POLYGON);
   glColor3ub(0,140,69);

   glVertex2f(0,0.5);
    glVertex2f(0.142,0.5);
    glVertex2f(0.142,0.5);
    glVertex2f(0.142,0);
    glVertex2f(0.142,0);
    glVertex2f(0,0);




    glEnd();
    glFlush();
}


void line3()
{  glLineWidth(5);
   //glBegin(GL_LINES);
   glBegin(GL_POLYGON);
   glColor3f(1.0,0,0);//white

   glVertex2f(0.338,0.5);
    glVertex2f(0.5,0.5);
    glVertex2f(0.5,0.5);
    glVertex2f(0.5,0);
    glVertex2f(0.5,0);
    glVertex2f(0.338,0);




    glEnd();
    glFlush();
}

/*---------------------------------------RUSSIA--------------------------------------
void line()

{   glLineWidth(5);
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0,0);
    glVertex2f(0.5,0);
    glVertex2f(0.5,0);
    glVertex2f(0.5,0.5);
    glVertex2f(0.5,0.5);
    glVertex2f(0,0.5);
    glVertex2f(0,0.5);
    glVertex2f(0,0);

    glEnd();
    glFlush();

}

void line1()
{  glLineWidth(5);
   //glBegin(GL_LINES);
   glBegin(GL_POLYGON);
   glColor3f(1.0,1.0,1.0);

   glVertex2f(0,0.3);
    glVertex2f(0.5,0.3);
    glVertex2f(0.5,0.3);
    glVertex2f(0.5,0.5);
    glVertex2f(0.5,0.5);
    glVertex2f(0,0.5);
    glVertex2f(0,0.5);
    glVertex2f(0,0.3);
    glEnd();
    glFlush();
}

void line2()
{  glLineWidth(5);
   //glBegin(GL_LINES);
   glBegin(GL_POLYGON);
   glColor3f(0,0,1.0);

   glVertex2f(0,0.15);
    glVertex2f(0.5,0.15);
    glVertex2f(0.5,0.15);
    glVertex2f(0.5,0.3);
    glVertex2f(0.5,0.3);
    glVertex2f(0,0.3);
    glVertex2f(0,0.3);
    glVertex2f(0,0.15);
    glEnd();
    glFlush();
}

void line3()
{  glLineWidth(5);
   //glBegin(GL_LINES);
   glBegin(GL_POLYGON);
   glColor3ub(255,0,0);

   glVertex2f(0,0);
    glVertex2f(0.5,0);
    glVertex2f(0.5,0);
    glVertex2f(0.5,0.15);
    glVertex2f(0.5,0.15);
    glVertex2f(0,0.15);
    glVertex2f(0,0.15);
    glVertex2f(0,0);
    glEnd();
    glFlush();
}*/






/*------------------------------------GERMANY------------------------------------------------------
void line()

{   glLineWidth(5);
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2f(0,0);
    glVertex2f(0.5,0);
    glVertex2f(0.5,0);
    glVertex2f(0.5,0.5);
    glVertex2f(0.5,0.5);
    glVertex2f(0,0.5);
    glVertex2f(0,0.5);
    glVertex2f(0,0);

    glEnd();
    glFlush();

}

void line1()
{  glLineWidth(5);
   //glBegin(GL_LINES);
   glBegin(GL_POLYGON);
   glColor3f(0,0,0);

   glVertex2f(0,0.3);
    glVertex2f(0.5,0.3);
    glVertex2f(0.5,0.3);
    glVertex2f(0.5,0.5);
    glVertex2f(0.5,0.5);
    glVertex2f(0,0.5);
    glVertex2f(0,0.5);
    glVertex2f(0,0.3);
    glEnd();
    glFlush();
}

void line2()
{  glLineWidth(5);
   //glBegin(GL_LINES);
   glBegin(GL_POLYGON);
   glColor3f(1.0,0,0);

   glVertex2f(0,0.15);
    glVertex2f(0.5,0.15);
    glVertex2f(0.5,0.15);
    glVertex2f(0.5,0.3);
    glVertex2f(0.5,0.3);
    glVertex2f(0,0.3);
    glVertex2f(0,0.3);
    glVertex2f(0,0.15);
    glEnd();
    glFlush();
}

void line3()
{  glLineWidth(5);
   //glBegin(GL_LINES);
   glBegin(GL_POLYGON);
   glColor3ub(255,204,0);

   glVertex2f(0,0);
    glVertex2f(0.5,0);
    glVertex2f(0.5,0);
    glVertex2f(0.5,0.15);
    glVertex2f(0.5,0.15);
    glVertex2f(0,0.15);
    glVertex2f(0,0.15);
    glVertex2f(0,0);
    glEnd();
    glFlush();
}*/

/*void circle()
{
    glLineWidth(7.5);
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(1.0,0,0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y );
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	glFlush();
}*/






void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    //circle();
    line();
    line1();
    line2();
    line3();
	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("ITALY"); // Create a window with the given title
	//gluOrtho2D(-5,5,5,-5);
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}

