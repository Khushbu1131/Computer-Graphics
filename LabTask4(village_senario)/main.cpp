#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#include <vector>

void houseshed1()
{
    glColor3ub(217, 96, 84);
    glBegin(GL_POLYGON);
    glVertex2f(2,2);glVertex2f(3,3);
    glVertex2f(3,2);
    glEnd();

     glColor3ub(217, 96, 84);
    glBegin(GL_POLYGON);
    glVertex2f(3,3);glVertex2f(5.5,3);
    glVertex2f(5.5,2);glVertex2f(3,2);
    glEnd();



    glColor3ub(217, 96, 84);
    glBegin(GL_POLYGON);
    glVertex2f(3,3);glVertex2f(5.5,3);
    glVertex2f(5.5,2);glVertex2f(3,2);
    glEnd();

    glColor3ub(217, 96, 84);
    glBegin(GL_POLYGON);
    glVertex2f(5.5,3);glVertex2f(6.5,2);
    glVertex2f(5.5,2);
    glEnd();



}


void housebody1()
{
   glColor3ub(164,90,82);
    glBegin(GL_POLYGON);

    glVertex2f(2.5,2);glVertex2f(2.5,0.5);
    glVertex2f(6,0.5);glVertex2f(6,2);
    glEnd();



    //door
    glColor3ub(150,0,24);
    glBegin(GL_POLYGON);

    glVertex2f(4,0.5);glVertex2f(4,1.2);
    glVertex2f(4.5,1.2);glVertex2f(4.5,0.5);
    glEnd();

    //window left

    glColor3ub(150, 0, 24);
    glBegin(GL_POLYGON);

    glVertex2f(2.8,1.8);glVertex2f(2.8,1.4);
    glVertex2f(3.4,1.4);glVertex2f(3.4,1.8);
    glEnd();

     //window right

    glColor3ub(150,0,24);
    glBegin(GL_POLYGON);

    glVertex2f(5,1.8);glVertex2f(5,1.4);
    glVertex2f(5.6,1.4);glVertex2f(5.6,1.8);
    glEnd();

}

void houseshed2()
{
    glColor3ub(217, 96, 84);
    glBegin(GL_POLYGON);

    glVertex2f(5,3.1);glVertex2f(5.8,3.8);
    glVertex2f(5.8,3.1);
    glEnd();

     glColor3ub(217, 96, 84);
    glBegin(GL_POLYGON);
    glVertex2f(5.8,3.8);glVertex2f(7.6,3.8);
    glVertex2f(7.6,3.1);glVertex2f(5.8,3.1);
    glEnd();


    glColor3ub(217, 96, 84);
    glBegin(GL_POLYGON);
    glVertex2f(7.6,3.8);glVertex2f(8.3,3.1);
    glVertex2f(7.6,3.1);
    glEnd();



}
void housebody2()
{
   glColor3ub(164,90,82);
    glBegin(GL_POLYGON);

    glVertex2f(5.2,3.1);glVertex2f(5.2,3);
    glVertex2f(8,3.1);glVertex2f(8,1.5);
    //glVertex2f(6,1.5);
    glEnd();


    glColor3ub(164,90,82);
    glBegin(GL_POLYGON);

    glVertex2f(6,2);glVertex2f(6,1.5);
    glVertex2f(8,1.5);glVertex2f(8,2);
    glEnd();

    glColor3ub(164,90,82);
    glBegin(GL_POLYGON);
    glVertex2f(6.5,2);glVertex2f(6.1,2.4);
    glVertex2f(8,2.4);glVertex2f(8,2);
    glEnd();


glColor3ub(164,90,82);
    glBegin(GL_POLYGON);
    glVertex2f(6.2,2.4);glVertex2f(6.2,2.8);
    glVertex2f(6.8,2.8);glVertex2f(6.8,2.4);
    glEnd();


   //door
    glColor3ub(150,0,24);
    glBegin(GL_POLYGON);

    glVertex2f(6.6,1.5);glVertex2f(6.6,2.2);
    glVertex2f(7,2.2);glVertex2f(7,1.5);
    glEnd();

    //window left

    glColor3ub(150, 0, 24);
    glBegin(GL_POLYGON);

    glVertex2f(5.7,2.8);glVertex2f(6.2,2.8);
    glVertex2f(6.2,2.4);glVertex2f(6.1,2.4);
    glEnd();

     //window right

    glColor3ub(150,0,24);
    glBegin(GL_POLYGON);

    glVertex2f(7.2,2.8);glVertex2f(7.2,2.4);
    glVertex2f(7.8,2.4);glVertex2f(7.8,2.8);
    glEnd();



}

void land()
{
  glColor3ub(183,224,175);
    glBegin(GL_POLYGON);

    glVertex2f(0,0);glVertex2f(15,0);
    glVertex2f(15,5);glVertex2f(0,5);
    glEnd();
}

void tree1()
{
   glColor3ub(37, 76, 29);
    glBegin(GL_POLYGON);

    glVertex2f(9.4,3.8);glVertex2f(8.8,3);
    glVertex2f(10,3);
    glEnd();

    glColor3ub(37, 76, 29);
    glBegin(GL_POLYGON);
    glVertex2f(9.4,3.4);glVertex2f(8.8,2.6);
    glVertex2f(10,2.6);

    glColor3ub(37, 76, 29);
    glBegin(GL_POLYGON);
    glVertex2f(9.4,3.2);glVertex2f(8.8,2.2);
    glVertex2f(10,2.2);
    glEnd();

    glColor3ub(89, 51, 32);
    glBegin(GL_POLYGON);

    glVertex2f(9.5,2.2);glVertex2f(9.5,0.6);
    glVertex2f(9.3,0.6);glVertex2f(9.3,2.2);
    glEnd();
}

void tree2()
{
   glColor3ub(37, 76, 29);
    glBegin(GL_POLYGON);

    glVertex2f(12,4);glVertex2f(11,3);
    glVertex2f(13,3);
    glEnd();

    glColor3ub(37, 76, 29);
    glBegin(GL_POLYGON);
    glVertex2f(12,3.8);glVertex2f(11,2.6);
    glVertex2f(13,2.6);

    glColor3ub(37, 76, 29);
    glBegin(GL_POLYGON);
    glVertex2f(12,3.6);glVertex2f(11,2.2);
    glVertex2f(13,2.2);
    glEnd();

    glColor3ub(89, 51, 32);
    glBegin(GL_POLYGON);

    glVertex2f(11.8,2.2);glVertex2f(11.8,1);
    glVertex2f(12.2,1);glVertex2f(12.2,2.2);
    glEnd();
}
void boat()
{  //below
  glColor3ub(0,0,139);
    glBegin(GL_POLYGON);
    glVertex2f(3,-1.5);glVertex2f(3.5,-2);
    glVertex2f(3.5,-1.5);
    glEnd();

     glColor3ub(0,0,139);
    glBegin(GL_POLYGON);
    glVertex2f(6.5,-2);glVertex2f(7,-1.5);
    glVertex2f(6.5,-1.5);
    glEnd();

     glColor3ub(0,0,139);
    glBegin(GL_POLYGON);
    glVertex2f(3.5,-2);glVertex2f(6.5,-2);
    glVertex2f(6.5,-1.5);glVertex2f(3.5,-1.5);
    glEnd();

    //upper flag

     glColor3ub(255, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(5,-1.45);glVertex2f(5,-0.8);
    glVertex2f(2.9,-1.45);
    glEnd();

     glColor3ub(108, 122, 134);
    glBegin(GL_POLYGON);
    glVertex2f(5.2,-1.5);glVertex2f(5.2,-0.8);
    glVertex2f(5.24,-0.8);glVertex2f(5.24,-1.5);
    glEnd();

     glColor3ub(108,122,134);
    glBegin(GL_POLYGON);
    glVertex2f(5.4,-1.5);glVertex2f(5.4,-0.8);
    glVertex2f(5.44,-0.8);glVertex2f(5.44,-1.5);
    glEnd();

}



void river()
{
    glColor3ub(0,191, 255);
    glBegin(GL_POLYGON);

    glVertex2f(0,-3);glVertex2f(0,0);
    glVertex2f(15,0);glVertex2f(15,-3);
    glEnd();
}

void hill()
{
  glColor3ub(182, 91, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0,5);glVertex2f(2,7);
    glVertex2f(4,5);
    glEnd();

    glColor3ub(182, 91, 0);
    glBegin(GL_POLYGON);
    glVertex2f(2.5,5);glVertex2f(4,6.5);
    glVertex2f(6,5);
    glEnd();

    glColor3ub(182, 91, 0);
    glBegin(GL_POLYGON);
    glVertex2f(5,5);glVertex2f(8,8);
    glVertex2f(11,5);
    glEnd();

    glColor3ub(182, 91, 0);
    glBegin(GL_POLYGON);
    glVertex2f(10,5);glVertex2f(12,7);
    glVertex2f(13,5);
    glEnd();

    glColor3ub(182, 91, 0);
    glBegin(GL_POLYGON);
    glVertex2f(12.5,5);glVertex2f(14,6.5);
    glVertex2f(15,5);
    glEnd();


}

void sun()
{
    glLineWidth(7.5);
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(255, 222, 59);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.3;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+11,y+8.5);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();
}

void sky()
{
  glColor3ub(116, 204, 244);
    glBegin(GL_POLYGON);
    glVertex2f(0,5);glVertex2f(0,10);
    glVertex2f(15,10);glVertex2f(15,5);
    glEnd();
}
void display() {
	glClearColor(1, 1, 1, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
    land();
    river();
    sky();
    houseshed1();
    housebody1();
    houseshed2();
    housebody2();
    tree1();
    tree2();
    boat();
    hill();
    sun();
	glFlush();  								// Render now
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(650, 600);
	//glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1100)/2,(glutGet(GLUT_SCREEN_HEIGHT)-600)/2);

	//glutInitWindowPosition();
	glutCreateWindow("Lab Task - 4");
    //this line must be below of glutCreateWindow();
    gluOrtho2D(0, 15, -3, 10);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
/*
#include <windows.h>
#include <GL/glut.h>
#include <math.h>
#include <vector>

void houseshed1()
{
    glColor3ub(217, 96, 84);
    glBegin(GL_POLYGON);
    glVertex2f(2,2);glVertex2f(3,3);
    glVertex2f(3,2);
    glEnd();

     glColor3ub(217, 96, 84);
    glBegin(GL_POLYGON);
    glVertex2f(3,3);glVertex2f(5.5,3);
    glVertex2f(5.5,2);glVertex2f(3,2);
    glEnd();



    glColor3ub(217, 96, 84);
    glBegin(GL_POLYGON);
    glVertex2f(3,3);glVertex2f(5.5,3);
    glVertex2f(5.5,2);glVertex2f(3,2);
    glEnd();

    glColor3ub(217, 96, 84);
    glBegin(GL_POLYGON);
    glVertex2f(5.5,3);glVertex2f(6.5,2);
    glVertex2f(5.5,2);
    glEnd();



}


void housebody1()
{
   glColor3ub(164,90,82);
    glBegin(GL_POLYGON);

    glVertex2f(2.5,2);glVertex2f(2.5,0.5);
    glVertex2f(6,0.5);glVertex2f(6,2);
    glEnd();



    //door
    glColor3ub(150,0,24);
    glBegin(GL_POLYGON);

    glVertex2f(4,0.5);glVertex2f(4,1.2);
    glVertex2f(4.5,1.2);glVertex2f(4.5,0.5);
    glEnd();

    //window left

    glColor3ub(150, 0, 24);
    glBegin(GL_POLYGON);

    glVertex2f(2.8,1.8);glVertex2f(2.8,1.4);
    glVertex2f(3.4,1.4);glVertex2f(3.4,1.8);
    glEnd();

     //window right

    glColor3ub(150,0,24);
    glBegin(GL_POLYGON);

    glVertex2f(5,1.8);glVertex2f(5,1.4);
    glVertex2f(5.6,1.4);glVertex2f(5.6,1.8);
    glEnd();

}

void houseshed2()
{
    glColor3ub(217, 96, 84);
    glBegin(GL_POLYGON);

    glVertex2f(5,3.1);glVertex2f(5.8,3.8);
    glVertex2f(5.8,3.1);
    glEnd();

     glColor3ub(217, 96, 84);
    glBegin(GL_POLYGON);
    glVertex2f(5.8,3.8);glVertex2f(7.6,3.8);
    glVertex2f(7.6,3.1);glVertex2f(5.8,3.1);
    glEnd();


    glColor3ub(217, 96, 84);
    glBegin(GL_POLYGON);
    glVertex2f(7.6,3.8);glVertex2f(8.3,3.1);
    glVertex2f(7.6,3.1);
    glEnd();



}
void housebody2()
{
   glColor3ub(164,90,82);
    glBegin(GL_POLYGON);

    glVertex2f(5.2,3.1);glVertex2f(5.2,3);
    glVertex2f(8,3.1);glVertex2f(8,1.5);
    //glVertex2f(6,1.5);
    glEnd();


    glColor3ub(164,90,82);
    glBegin(GL_POLYGON);

    glVertex2f(6,2);glVertex2f(6,1.5);
    glVertex2f(8,1.5);glVertex2f(8,2);
    glEnd();

    glColor3ub(164,90,82);
    glBegin(GL_POLYGON);
    glVertex2f(6.5,2);glVertex2f(6.1,2.4);
    glVertex2f(8,2.4);glVertex2f(8,2);
    glEnd();


glColor3ub(164,90,82);
    glBegin(GL_POLYGON);
    glVertex2f(6.2,2.4);glVertex2f(6.2,2.8);
    glVertex2f(6.8,2.8);glVertex2f(6.8,2.4);
    glEnd();


   //door
    glColor3ub(150,0,24);
    glBegin(GL_POLYGON);

    glVertex2f(6.6,1.5);glVertex2f(6.6,2.2);
    glVertex2f(7,2.2);glVertex2f(7,1.5);
    glEnd();

    //window left

    glColor3ub(150, 0, 24);
    glBegin(GL_POLYGON);

    glVertex2f(5.7,2.8);glVertex2f(6.2,2.8);
    glVertex2f(6.2,2.4);glVertex2f(6.1,2.4);
    glEnd();

     //window right

    glColor3ub(150,0,24);
    glBegin(GL_POLYGON);

    glVertex2f(7.2,2.8);glVertex2f(7.2,2.4);
    glVertex2f(7.8,2.4);glVertex2f(7.8,2.8);
    glEnd();



}

void land()
{
  glColor3ub(134,153,61);
    glBegin(GL_POLYGON);

    glVertex2f(0,0);glVertex2f(15,0);
    glVertex2f(15,5);glVertex2f(0,5);
    glEnd();
}

void tree1()
{
   glColor3ub(37, 76, 29);
    glBegin(GL_POLYGON);

    glVertex2f(9.4,3.8);glVertex2f(8.8,3);
    glVertex2f(10,3);
    glEnd();

    glColor3ub(37, 76, 29);
    glBegin(GL_POLYGON);
    glVertex2f(9.4,3.4);glVertex2f(8.8,2.6);
    glVertex2f(10,2.6);

    glColor3ub(37, 76, 29);
    glBegin(GL_POLYGON);
    glVertex2f(9.4,3.2);glVertex2f(8.8,2.2);
    glVertex2f(10,2.2);
    glEnd();

    glColor3ub(89, 51, 32);
    glBegin(GL_POLYGON);

    glVertex2f(9.5,2.2);glVertex2f(9.5,0.6);
    glVertex2f(9.3,0.6);glVertex2f(9.3,2.2);
    glEnd();
}

void tree2()
{
   glColor3ub(37, 76, 29);
    glBegin(GL_POLYGON);

    glVertex2f(12,4);glVertex2f(11,3);
    glVertex2f(13,3);
    glEnd();

    glColor3ub(37, 76, 29);
    glBegin(GL_POLYGON);
    glVertex2f(12,3.8);glVertex2f(11,2.6);
    glVertex2f(13,2.6);

    glColor3ub(37, 76, 29);
    glBegin(GL_POLYGON);
    glVertex2f(12,3.6);glVertex2f(11,2.2);
    glVertex2f(13,2.2);
    glEnd();

    glColor3ub(89, 51, 32);
    glBegin(GL_POLYGON);

    glVertex2f(11.8,2.2);glVertex2f(11.8,1);
    glVertex2f(12.2,1);glVertex2f(12.2,2.2);
    glEnd();
}
void boat()
{  //below
  glColor3ub(0,0,139);
    glBegin(GL_POLYGON);
    glVertex2f(3,-1.5);glVertex2f(3.5,-2);
    glVertex2f(3.5,-1.5);
    glEnd();

     glColor3ub(0,0,139);
    glBegin(GL_POLYGON);
    glVertex2f(6.5,-2);glVertex2f(7,-1.5);
    glVertex2f(6.5,-1.5);
    glEnd();

     glColor3ub(0,0,139);
    glBegin(GL_POLYGON);
    glVertex2f(3.5,-2);glVertex2f(6.5,-2);
    glVertex2f(6.5,-1.5);glVertex2f(3.5,-1.5);
    glEnd();

    //upper flag

     glColor3ub(255, 0, 0);
    glBegin(GL_POLYGON);
    glVertex2f(5,-1.45);glVertex2f(5,-0.8);
    glVertex2f(2.9,-1.45);
    glEnd();

     glColor3ub(108, 122, 134);
    glBegin(GL_POLYGON);
    glVertex2f(5.2,-1.5);glVertex2f(5.2,-0.8);
    glVertex2f(5.24,-0.8);glVertex2f(5.24,-1.5);
    glEnd();

     glColor3ub(108,122,134);
    glBegin(GL_POLYGON);
    glVertex2f(5.4,-1.5);glVertex2f(5.4,-0.8);
    glVertex2f(5.44,-0.8);glVertex2f(5.44,-1.5);
    glEnd();

}



void river()
{
    glColor3ub(35,137,218);
    glBegin(GL_POLYGON);

    glVertex2f(0,-3);glVertex2f(0,0);
    glVertex2f(15,0);glVertex2f(15,-3);
    glEnd();
}

void hill()
{
  glColor3ub(182, 91, 0);
    glBegin(GL_POLYGON);
    glVertex2f(0,5);glVertex2f(2,7);
    glVertex2f(4,5);
    glEnd();

    glColor3ub(182, 91, 0);
    glBegin(GL_POLYGON);
    glVertex2f(2.5,5);glVertex2f(4,6.5);
    glVertex2f(6,5);
    glEnd();

    glColor3ub(182, 91, 0);
    glBegin(GL_POLYGON);
    glVertex2f(5,5);glVertex2f(8,8);
    glVertex2f(11,5);
    glEnd();

    glColor3ub(182, 91, 0);
    glBegin(GL_POLYGON);
    glVertex2f(10,5);glVertex2f(12,7);
    glVertex2f(13,5);
    glEnd();

    glColor3ub(182, 91, 0);
    glBegin(GL_POLYGON);
    glVertex2f(12.5,5);glVertex2f(14,6.5);
    glVertex2f(15,5);
    glEnd();


}

void moon()
{
    glLineWidth(7.5);
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(1.0,1.0,1.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.3;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+11,y+8.5);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();
}

void sky()
{
  glColor3ub(46, 68, 130);
    glBegin(GL_POLYGON);
    glVertex2f(0,5);glVertex2f(0,10);
    glVertex2f(15,10);glVertex2f(15,5);
    glEnd();
}
void display() {
	glClearColor(1, 1, 1, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

    land();
    river();
    sky();
    houseshed1();
    housebody1();
    houseshed2();
    housebody2();
    tree1();
    tree2();
    boat();
    hill();
    moon();
	glFlush();  								// Render now
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitWindowSize(650, 600);
	//glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1100)/2,(glutGet(GLUT_SCREEN_HEIGHT)-600)/2);

	//glutInitWindowPosition();
	glutCreateWindow("Lab Task - 4");
    //this line must be below of glutCreateWindow();
    gluOrtho2D(0, 15, -3, 10);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}*/
