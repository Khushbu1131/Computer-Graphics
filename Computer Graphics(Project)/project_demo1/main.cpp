#include <iostream>
#include<GL/gl.h>
#include <GL/glut.h>
#include <math.h>
using namespace std;
float _move = -1088;//train movement
float _speed = 5.0f;

float _move1 = 2088;//car
float _speed1= 5.0f;

float _move2 = -2000;//car1 movement
float _speed2 = 5.0f;

float ufoX = 5.0f;

bool isDay=true;
struct Snowflake {
    float x;
    float y;
    float speed;
};

Snowflake snowflakes[100];



/*glVertex2f();glVertex2f();
  glVertex2f();glVertex2f();*/


void building1()
{
    glBegin(GL_POLYGON);
    glColor3ub(255, 253, 208);
    glVertex2f(29.17,405.59);glVertex2f(194.095,487.18);
     glVertex2f(112.49,487.18);
     glEnd();

     glBegin(GL_POLYGON);
     glColor3ub(251, 206, 177);
glVertex2f(194.095,487.18);glVertex2f(128.07,453.8);
  glVertex2f(128.07,336);glVertex2f(194.42,335.52);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3ub(251, 206, 177);
  glVertex2f(128.07,453.8);
  glVertex2f(128.07,336);
  glVertex2f(29.17,336);
  glVertex2f(29.17,405.59);
  glEnd();
}
void b2()
{
   glBegin(GL_POLYGON);
   glColor3ub(13,152,186);
   glVertex2f(194,406);glVertex2f(202,406);
  glVertex2f(202,397);glVertex2f(194,397);
  glEnd();
  glBegin(GL_POLYGON);
   glColor3ub(13,152,186);
  glVertex2f(194,397);glVertex2f(209,397);
  glVertex2f(209,336);glVertex2f(194,336);
  glEnd();
}





void b3()
{
    glBegin(GL_POLYGON);
    glColor3ub(195, 177, 225);
    glVertex2f(238,425);glVertex2f(271,425);
  glVertex2f(271,336);glVertex2f(238,336);
  glEnd();

}

void b4()
{
     glBegin(GL_POLYGON);
   glColor3ub(13,152,186);
    glVertex2f(265,463);glVertex2f(341,463);
  glVertex2f(341,336);glVertex2f(265,336);
  glEnd();
    glBegin(GL_POLYGON);
   glColor3ub(13,152,186);
    glVertex2f(272,509);glVertex2f(272,463);
  glVertex2f(335,463);glVertex2f(335,509);
  glEnd();

      glBegin(GL_POLYGON);
   glColor3ub(13,152,186);
    glVertex2f(277,510);glVertex2f(277,523);
  glVertex2f(330,523);glVertex2f(330,510);
  glEnd();


}










void b5()
{
  glBegin(GL_POLYGON);
  glColor3ub(231,169,192);
  glVertex2f(296,418);glVertex2f(434,418);
  glVertex2f(434,336);glVertex2f(296,336);
  glEnd();

  glLineWidth(1);
  glBegin(GL_LINES);
  glColor3ub(206,217,218);
  glVertex2f(296,418-25);glVertex2f(434,418-25);
  glEnd();

  glLineWidth(1);
  glBegin(GL_LINES);
  glColor3ub(206,217,218);
  glVertex2f(296,418-50);glVertex2f(434,418-50);
  glEnd();

  glLineWidth(1);
  glBegin(GL_LINES);
  glColor3ub(206,217,218);
  glVertex2f(296,418-75);glVertex2f(434,418-75);
  glEnd();

  glLineWidth(1);
  glBegin(GL_LINES);
  glColor3ub(206,217,218);
  glVertex2f(296,418-100);glVertex2f(434,418-100);
  glEnd();
}

void b6()
{
    glBegin(GL_POLYGON);
    glColor3ub(255, 248, 220);
    glVertex2f(381,545);glVertex2f(381,336);
  glVertex2f(480,336);glVertex2f(480,545);
  glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(251, 206, 177);
    glVertex2f(480,336);glVertex2f(480,545);
  glVertex2f(521,545);glVertex2f(521,336);
  glEnd();


}

void b7()
{
    glBegin(GL_POLYGON);
    glColor3ub(255, 160, 122);
    glVertex2f(496,487);glVertex2f(496,336);
  glVertex2f(653,336);glVertex2f(653,487);
  glEnd();
  glBegin(GL_POLYGON);//first border
    glColor3ub(250, 213, 165);
    glVertex2f(513,476);glVertex2f(513,336);
  glVertex2f(538,336);glVertex2f(538,476);
  glEnd();
glBegin(GL_POLYGON);//second border
    glColor3ub(250, 213, 165);
    glVertex2f(513+50,476);glVertex2f(513+50,336);
  glVertex2f(538+50,336);glVertex2f(538+50,476);
  glEnd();
glBegin(GL_POLYGON);//third border
    glColor3ub(250, 213, 165);
    glVertex2f(513+100,476);glVertex2f(513+100,336);
  glVertex2f(538+100,336);glVertex2f(538+100,476);
  glEnd();

}

void b8()
{
    glBegin(GL_POLYGON);
    glColor3ub(13,152,186);
    glVertex2f(541,643);glVertex2f(592,643);
  glVertex2f(592,336);glVertex2f(541,336);
  glEnd();

  glBegin(GL_POLYGON);
    glColor3ub(13,152,186);
    glVertex2f(546,653);glVertex2f(546,643);
  glVertex2f(584+5,643);glVertex2f(584+5,653);
  glEnd();

  glBegin(GL_POLYGON);
    glColor3ub(13,152,186);
    glVertex2f(553,680);glVertex2f(553,653);
  glVertex2f(578+3,653);glVertex2f(578+3,680);
  glEnd();

  glBegin(GL_POLYGON);
    glColor3ub(13,152,186);
    glVertex2f(557,680);glVertex2f(557,703);
  glVertex2f(574+2,703);glVertex2f(574+2,680);
  glEnd();
     glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(13,152,186);
    glVertex2f(565+2,703);
    glVertex2f(565+2,731);
    glEnd();

}

void b9()
{
    glBegin(GL_POLYGON);
    glColor3ub(255, 248, 220);
    glVertex2f(653,336);glVertex2f(653,569);
  glVertex2f(805,569);glVertex2f(805,336);
  glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(250, 213, 165);
    glVertex2f(805,569);glVertex2f(805,336);
  glVertex2f(822,336);glVertex2f(822,569);
  glEnd();


  glLineWidth(1);
  glBegin(GL_LINES);
  glColor3ub(251, 206, 177);
  glVertex2f(694,569);glVertex2f(694,336);
  glEnd();

  glLineWidth(1);
  glBegin(GL_LINES);
  glColor3ub(251, 206, 177);
  glVertex2f(694+60,569);glVertex2f(694+60,336);
  glEnd();

  glLineWidth(1);
  glBegin(GL_LINES);
  glColor3ub(251, 206, 177);
  glVertex2f(654,543);glVertex2f(803,543);
  glEnd();

  glLineWidth(1);
  glBegin(GL_LINES);
  glColor3ub(251, 206, 177);
  glVertex2f(654,543-25);glVertex2f(803,543-25);
  glEnd();

   glLineWidth(1);
  glBegin(GL_LINES);
  glColor3ub(251, 206, 177);
  glVertex2f(654,543-50);glVertex2f(803,543-50);
  glEnd();

   glLineWidth(1);
  glBegin(GL_LINES);
  glColor3ub(251, 206, 177);
  glVertex2f(654,543-75);glVertex2f(803,543-75);
  glEnd();

   glLineWidth(1);
  glBegin(GL_LINES);
  glColor3ub(251, 206, 177);
  glVertex2f(654,543-100);glVertex2f(803,543-100);
  glEnd();

   glLineWidth(1);
  glBegin(GL_LINES);
  glColor3ub(251, 206, 177);
  glVertex2f(654,543-125);glVertex2f(803,543-125);
  glEnd();

   glLineWidth(1);
  glBegin(GL_LINES);
  glColor3ub(251, 206, 177);
  glVertex2f(654,543-150);glVertex2f(803,543-150);
  glEnd();

   glLineWidth(1);
  glBegin(GL_LINES);
  glColor3ub(251, 206, 177);
  glVertex2f(654,543-175);glVertex2f(803,543-175);
  glEnd();

   glLineWidth(1);
  glBegin(GL_LINES);
  glColor3ub(251, 206, 177);
  glVertex2f(654,543-200);glVertex2f(803,543-200);
  glEnd();


  glBegin(GL_POLYGON);
    glColor3ub(250, 213, 165);
    glVertex2f(670,569);glVertex2f(670,608);
  glVertex2f(785,608);glVertex2f(785,569);
  glEnd();

   glBegin(GL_POLYGON);
    glColor3ub(250, 213, 170);
    glVertex2f(803,569);glVertex2f(803,608);
  glVertex2f(785,608);glVertex2f(785,569);
  glEnd();

  glBegin(GL_POLYGON);
    glColor3ub(245, 222, 179);
    glVertex2f(822,336);glVertex2f(822,510);
  glVertex2f(854,510);glVertex2f(854,336);
  glEnd();

}

void b10()
{
    glBegin(GL_POLYGON);
    glColor3ub(13,152,186);
    glVertex2f(838,555);glVertex2f(898,555);
  glVertex2f(898,336);glVertex2f(838,336);
  glEnd();

  glLineWidth(5);
  glBegin(GL_LINES);
  glColor3ub(13,152,186);
  glVertex2f(845,557);glVertex2f(891,557);

}


void b11()
{
    glBegin(GL_POLYGON);
    glColor3ub(248, 222, 126);
    glVertex2f(789,401);
    glVertex2f(1163,401);
    glVertex2f(1163, 336);
    glVertex2f(789, 336);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 240);
    glVertex2f(789,375);
    glVertex2f(1163,375);
    glEnd();
 glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 240);
    glVertex2f(789,375-25);
    glVertex2f(1163,375-25);
    glEnd();


}


void b12()
{
    glBegin(GL_POLYGON);
    glColor3ub(167, 199, 231);
    glVertex2f(936,458);glVertex2f(1076,458);
    glVertex2f(1076,336);glVertex2f(936,336);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(167, 199, 231);
    glVertex2f(955,458);glVertex2f(955,493);
    glVertex2f(1055,493);glVertex2f(1055,458);
    glEnd();

    glLineWidth(7);
    glBegin(GL_LINES);
    glVertex2f(978,498);glVertex2f(1031,498);
    glEnd();

    glLineWidth(9);
    glBegin(GL_LINES);
    glVertex2f(984,510);glVertex2f(1026,510);
    glEnd();



}

void b13()
{
    glBegin(GL_POLYGON);
    glColor3ub(198,143,178);
    glVertex2f(1136,503);glVertex2f(1136,336);
    glVertex2f(1242,336);glVertex2f(1242,503);
  glEnd();

  glLineWidth(2);
  glBegin(GL_LINES);
  glColor3ub(161,117,145);
  glVertex2f(1162,503);glVertex2f(1162,336);
 glEnd();

 glLineWidth(2);
  glBegin(GL_LINES);
  glColor3ub(161,117,145);
  glVertex2f(1162+25,503);glVertex2f(1162+25,336);
 glEnd();
 glLineWidth(2);
  glBegin(GL_LINES);
  glColor3ub(161,117,145);
  glVertex2f(1162+50,503);glVertex2f(1162+50,336);
 glEnd();

}

void b14()
{
    glBegin(GL_POLYGON);
    glColor3ub(255, 229, 180);
    glVertex2f(1242,336);glVertex2f(1242,764);
  glVertex2f(1308,336);
  glEnd();

  glBegin(GL_POLYGON);
    glColor3ub(255, 253, 208);
    glVertex2f(1242,764);glVertex2f(1308,336);
  glVertex2f(1368,764);
  glEnd();
  glBegin(GL_POLYGON);
    glColor3ub(255, 229, 180);
    glVertex2f(1368,764);glVertex2f(1368,336);
  glVertex2f(1308,336);
  glEnd();

  glBegin(GL_POLYGON);//upper side
    glColor3ub(185, 232, 252);
    glVertex2f(1242,764);glVertex2f(1368,764);
  glVertex2f(1368,774); glVertex2f(1242,774);
  glEnd();
  glBegin(GL_POLYGON);//upper side
    glColor3ub(185, 232, 252);
    glVertex2f(1242,774);glVertex2f(1293,803);
  glVertex2f(1318,803); glVertex2f(1368,774);
  glEnd();

  glLineWidth(15);
  glBegin(GL_LINES);
  glColor3ub(163,131,178);
  glVertex2f(1376,405);glVertex2f(1376,336);
  glEnd();


}



void b15()
{
   glBegin(GL_POLYGON);
   glColor3ub(13,152,186);
    glVertex2f(1385,622);glVertex2f(1445,622);
  glVertex2f(1445,336);glVertex2f(1385,336);
  glEnd();

  glLineWidth(7.5);
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(13,152,186);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=29.88;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+1415,y+622 );
        }

	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub(13,152,186);
	glVertex2f(1414,651);glVertex2f(1414,695);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub(137, 207, 240);
	glVertex2f(1385,610);glVertex2f(1445,610);
	glEnd();
     glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub(137, 207, 240);
	glVertex2f(1385,610-25);glVertex2f(1445,610-25);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub(137, 207, 240);
	glVertex2f(1385,610-50);glVertex2f(1445,610-50);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub(137, 207, 240);
	glVertex2f(1385,610-75);glVertex2f(1445,610-75);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub(137, 207, 240);
	glVertex2f(1385,610-100);glVertex2f(1445,610-100);
	glEnd();

	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub(137, 207, 240);
	glVertex2f(1385,610-125);glVertex2f(1445,610-125);
	glEnd();
	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub(137, 207, 240);
	glVertex2f(1385,610-150);glVertex2f(1445,610-150);
	glEnd();
	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub(137, 207, 240);
	glVertex2f(1385,610-175);glVertex2f(1445,610-175);
	glEnd();
	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub(137, 207, 240);
	glVertex2f(1385,610-200);glVertex2f(1445,610-200);
	glEnd();
	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub(137, 207, 240);
	glVertex2f(1385,610-225);glVertex2f(1445,610-225);
	glEnd();
	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub(137, 207, 240);
	glVertex2f(1385,610-250);glVertex2f(1445,610-250);
	glEnd();
	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub(137, 207, 240);
	glVertex2f(1385,610-275);glVertex2f(1445,610-275);
	glEnd();
	glLineWidth(2);
	glBegin(GL_LINES);
	glColor3ub(137, 207, 240);
	glVertex2f(1385,610-300);glVertex2f(1445,610-300);
	glEnd();













}


void b16()
{
    glBegin(GL_POLYGON);
    glColor3ub(255, 229, 180);
    glVertex2f(1506,894);glVertex2f(1506,336);
    glVertex2f(1625,336);glVertex2f(1625,894);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(250, 213, 165);
    glVertex2f(1656,894);glVertex2f(1658,336);
    glVertex2f(1625,336);glVertex2f(1625,894);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(244, 187, 68);
    glVertex2f(1506,869);glVertex2f(1658,869);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(244, 187, 68);
    glVertex2f(1506,869-25);glVertex2f(1658,869-25);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(244, 187, 68);
    glVertex2f(1506,869-50);glVertex2f(1658,869-50);
    glEnd();


    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(244, 187, 68);
    glVertex2f(1506,869-75);glVertex2f(1658,869-75);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(244, 187, 68);
    glVertex2f(1506,869-100);glVertex2f(1658,869-100);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(244, 187, 68);
    glVertex2f(1506,869-125);glVertex2f(1658,869-125);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(244, 187, 68);
    glVertex2f(1506,869-150);glVertex2f(1658,869-150);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(244, 187, 68);
    glVertex2f(1506,869-175);glVertex2f(1658,869-175);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(244, 187, 68);
    glVertex2f(1506,869-200);glVertex2f(1658,869-200);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(244, 187, 68);
    glVertex2f(1506,869-225);glVertex2f(1658,869-225);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(244, 187, 68);
    glVertex2f(1506,869-250);glVertex2f(1658,869-250);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(244, 187, 68);
    glVertex2f(1506,869-275);glVertex2f(1658,869-275);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(244, 187, 68);
    glVertex2f(1506,869-300);glVertex2f(1658,869-300);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(244, 187, 68);
    glVertex2f(1506,869-325);glVertex2f(1658,869-325);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(244, 187, 68);
    glVertex2f(1506,869-350);glVertex2f(1658,869-350);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(244, 187, 68);
    glVertex2f(1506,869-375);glVertex2f(1658,869-375);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(244, 187, 68);
    glVertex2f(1506,869-400);glVertex2f(1658,869-400);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(244, 187, 68);
    glVertex2f(1506,869-425);glVertex2f(1658,869-425);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(244, 187, 68);
    glVertex2f(1506,869-450);glVertex2f(1658,869-450);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(244, 187, 68);
    glVertex2f(1506,869-475);glVertex2f(1658,869-475);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(244, 187, 68);
    glVertex2f(1506,869-500);glVertex2f(1658,869-500);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(244, 187, 68);
    glVertex2f(1506,869-525);glVertex2f(1658,869-525);
    glEnd();

    glLineWidth(2);
    glBegin(GL_LINES);
    glColor3ub(244, 187, 68);
    glVertex2f(1506,869-550);glVertex2f(1658,869-550);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(255, 248, 220);
    glVertex2f(1464,336);glVertex2f(1464,722);
    glVertex2f(1485,722);glVertex2f(1485,336);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(250, 213, 165);
    glVertex2f(1485,722);glVertex2f(1485,336);
    glVertex2f(1506,336);glVertex2f(1506,722);
    glEnd();





}
void b17()
{
    glBegin(GL_POLYGON);
    glColor3ub(255, 253, 208);
    glVertex2f(1593,444);glVertex2f(1593,336);
    glVertex2f(1861,336);glVertex2f(1861,444);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255, 222, 173);
    glVertex2f(1593,444-50);glVertex2f(1861,444-50);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255, 222, 173);
    glVertex2f(1593,444-100);glVertex2f(1861,444-100);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255, 222, 173);
    glVertex2f(1593+50,444);glVertex2f(1593+50,336);
    glEnd();


     glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255, 222, 173);
    glVertex2f(1593+100,444);glVertex2f(1593+100,336);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255, 222, 173);
    glVertex2f(1593+150,444);glVertex2f(1593+150,336);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255, 222, 173);
    glVertex2f(1593+200,444);glVertex2f(1593+200,336);
    glEnd();


}

void b18()
{
    glBegin(GL_POLYGON);
    glColor3ub(13,152,186);
    glVertex2f(1685,608);glVertex2f(1685,336);
  glVertex2f(1730,336);glVertex2f(1730,608);
  glEnd();
  glLineWidth(15);
  glBegin(GL_LINES);
  glColor3ub(13,152,186);
  glVertex2f(1688,619);glVertex2f(1722,619);
  glEnd();
  glLineWidth(15);
  glBegin(GL_LINES);
  glColor3ub(13,152,186);
  glVertex2f(1693,627);glVertex2f(1718,627);
  glEnd();
  glLineWidth(15);
  glBegin(GL_LINES);
  glColor3ub(13,152,186);
  glVertex2f(1698,631);glVertex2f(1706,631);
  glEnd();
   glLineWidth(3);
  glBegin(GL_LINES);
  glColor3ub(13,152,186);
  glVertex2f(1706,650);glVertex2f(1706,628);
  glEnd();



}

void b19()
{
    glBegin(GL_POLYGON);
    glColor3ub(251, 206, 177);
    glVertex2f(1776,584);glVertex2f(1776,336);
    glVertex2f(1920,336);glVertex2f(1920,584);
    glEnd();

    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 240);
     glVertex2f(1776+25,584);glVertex2f(1776+25,336);
     glEnd();

      glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 240);
     glVertex2f(1776+75,584);glVertex2f(1776+75,336);
     glEnd();

      glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 240);
     glVertex2f(1776+125,584);glVertex2f(1776+125,336);
     glEnd();



}
void b20()
{
    glBegin(GL_POLYGON);
    glColor3ub(167, 199, 231);
    glVertex2f(936,458);glVertex2f(1076,458);
    glVertex2f(1076,336);glVertex2f(936,336);
    glEnd();
}
void metro_railboundary()
{
    glBegin(GL_POLYGON);
    glColor3ub(230, 230, 250);//lavender
    glVertex2f(0,336);glVertex2f(1920,336);
  glVertex2f(1920,330);glVertex2f(0,330);
  glEnd();

  glBegin(GL_POLYGON);
    glColor3ub(255, 95, 31);//orange
  glVertex2f(1920,330);glVertex2f(0,330);
  glVertex2f(0,320);glVertex2f(1920,320);
  glEnd();



  glBegin(GL_POLYGON);
    glColor3ub(169, 92, 104);//Puce
  glVertex2f(0,320);glVertex2f(1920,320);
  glVertex2f(1920,300);glVertex2f(0,300);
  glEnd();

}










void train()////////3333
{   //below the glass <grey color>
glPushMatrix(); // Save the current matrix
    glTranslatef(_move, 0.0f, 0.0f);
    glBegin(GL_POLYGON);
    glColor3ub(211, 211, 211);
    glVertex2f(309,336);glVertex2f(304,340);
    glVertex2f(304,347);
    glVertex2f(1088,347);glVertex2f(1084,336);
    glEnd();
    //glass part
    glBegin(GL_POLYGON);
    glColor3ub(86,111,160);
    glVertex2f(304,347);glVertex2f(322,362);
    glVertex2f(1051,362);glVertex2f(1088,347);
    glEnd();
    //upper glass part
    glBegin(GL_POLYGON);
    glColor3ub(211, 211, 211);
    glVertex2f(322,362);
    glVertex2f(330,365);
    glVertex2f(1046,365);
    glVertex2f(1051,362);
    glEnd();
    //lower glass part green color
    glLineWidth(3);
    glBegin(GL_LINES);

    glColor3ub(231, 164, 208);

glVertex2f(315,343);
glVertex2f(441,343);
glVertex2f(456,343);
glVertex2f(582,343);
glVertex2f(598,343);
glVertex2f(723,343);
glVertex2f(739,343);
glVertex2f(863,343);
glVertex2f(880,343);
glVertex2f(1004,343);
glVertex2f(1020,343);
glVertex2f(1085,343);
glEnd();
 glPopMatrix();

}
void update(int value) {
    _move += _speed; // Move the train horizontally
    if (_move > 1920) {
        _move = -1088; // Reset to the starting position
    }
    glutPostRedisplay(); // Request display refresh
    glutTimerFunc(20, update, 0); // Set the next update timer
}

void background()
{
    glBegin(GL_POLYGON);
   // glColor3ub(217,250,252);
   glColor3ub(228,196,182);
    glVertex2f(0,200);glVertex2f(0,300);
  glVertex2f(1920,300);glVertex2f(1920,200);
  glEnd();

}

void metro_pillar()
{
    glBegin(GL_POLYGON);
    glColor3ub(181, 192, 201);
    glVertex2f(315,300);glVertex2f(315,242);
   glVertex2f(342,242);glVertex2f(342,300);
   glEnd();


    glBegin(GL_POLYGON);
    glColor3ub(181, 192, 201);
    glVertex2f(315+150,300);glVertex2f(315+150,242);
   glVertex2f(342+150,242);glVertex2f(342+150,300);
   glEnd();

   glBegin(GL_POLYGON);
    glColor3ub(181, 192, 201);
    glVertex2f(315+300,300);glVertex2f(315+300,242);
   glVertex2f(342+300,242);glVertex2f(342+300,300);
   glEnd();

   glBegin(GL_POLYGON);
    glColor3ub(181, 192, 201);
    glVertex2f(315+450,300);glVertex2f(315+450,242);
   glVertex2f(342+450,242);glVertex2f(342+450,300);
   glEnd();

   glBegin(GL_POLYGON);
    glColor3ub(181, 192, 201);
    glVertex2f(315+600,300);glVertex2f(315+600,242);
   glVertex2f(342+600,242);glVertex2f(342+600,300);
   glEnd();

   glBegin(GL_POLYGON);
    glColor3ub(181, 192, 201);
    glVertex2f(315+750,300);glVertex2f(315+750,242);
   glVertex2f(342+750,242);glVertex2f(342+750,300);
   glEnd();
   glBegin(GL_POLYGON);
    glColor3ub(181, 192, 201);
    glVertex2f(315+900,300);glVertex2f(315+900,242);
   glVertex2f(342+900,242);glVertex2f(342+900,300);
   glEnd();

   glBegin(GL_POLYGON);
    glColor3ub(181, 192, 201);
    glVertex2f(315+1050,300);glVertex2f(315+1050,242);
   glVertex2f(342+1050,242);glVertex2f(342+1050,300);
   glEnd();

   glBegin(GL_POLYGON);
    glColor3ub(181, 192, 201);
    glVertex2f(315+1200,300);glVertex2f(315+1200,242);
   glVertex2f(342+1200,242);glVertex2f(342+1200,300);
   glEnd();

   glBegin(GL_POLYGON);
    glColor3ub(181, 192, 201);
    glVertex2f(315+1350,300);glVertex2f(315+1350,242);
   glVertex2f(342+1350,242);glVertex2f(342+1350,300);
   glEnd();

   glBegin(GL_POLYGON);
    glColor3ub(181, 192, 201);
    glVertex2f(315+1500,300);glVertex2f(315+1500,242);
   glVertex2f(342+1500,242);glVertex2f(342+1500,300);
   glEnd();


}
void lamp(float radius, float xC, float yC, float r, float g, float b) {
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
void lamp_stand()
{
    glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(47,89,115);
    glVertex2f(257,200);glVertex2f(257,292);
    glVertex2f(257+300,200);glVertex2f(257+300,292);
    glVertex2f(257+750,200);glVertex2f(257+750,292);
    glVertex2f(257+1200,200);glVertex2f(257+1200,292);
    glVertex2f(257+1650,200);glVertex2f(257+1650,292);
    glEnd();

}


void tree(float radius, float xC, float yC, float r, float g, float b) {
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

void branch()
{   glLineWidth(5);
    glBegin(GL_LINES);
    glColor3ub(138,115,98);
    glVertex2f(116,293);glVertex2f(116,200);
  glVertex2f(116+300,293);glVertex2f(116+300,200);
  glVertex2f(116+750,293);glVertex2f(116+750,200);
  glVertex2f(116+1200,293);glVertex2f(116+1200,200);
  glVertex2f(116+1650,293);glVertex2f(116+1650,200);
  glEnd();
}

void ufo() //////////5555
{
    glPushMatrix();
    glTranslatef(ufoX,0.0f, 0.0f);
  glLineWidth(7.5);
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(55,142,144);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=46.04;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+135,y+1059);//y axis +100
        }

	glEnd();

	glLineWidth(7.5);
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(183,223,223);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=12.68857;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+125,y+1088);
        }

	glEnd();
	glLineWidth(7.5);
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(183,223,223);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=9;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+105,y+1077);
        }

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(164,171,171);
	glVertex2f(89,1054);glVertex2f(46,1039);
  glVertex2f(46,1029);glVertex2f(55,1013);
  glVertex2f(77,1002);glVertex2f(110,991);
  glVertex2f(139,987);glVertex2f(172,994);
  glVertex2f(213,1013);glVertex2f(224,1029);
  glVertex2f(224,1038);glVertex2f(180,1054);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(164,171,171);
  glVertex2f(77,1002);glVertex2f(64,981);
  glVertex2f(67,975);glVertex2f(77,975);
  glVertex2f(91,997);
  glEnd();

  glBegin(GL_POLYGON);
	glColor3ub(164,171,171);
  glVertex2f(181,998);glVertex2f(197,972+3);
  glVertex2f(206,972+3);glVertex2f(210,977+3);
  glVertex2f(194,1004);
  glEnd();
  glLineWidth(7.5);
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(255, 172, 28);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=6.5574;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+68,y+1030);
        }

	glEnd();
glLineWidth(7.5);
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(255, 172, 28);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=6.5574;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+101,y+1030);
        }

	glEnd();

	glLineWidth(7.5);
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(255, 172, 28);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=6.5574;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+135,y+1030);
        }

	glEnd();

	glLineWidth(7.5);
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(255, 172, 28);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=6.5574;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+167,y+1030);
        }

	glEnd();

	glLineWidth(7.5);
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(255, 172, 28);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=6.5574;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+199,y+1030);
        }

	glEnd();
glPopMatrix();

}
/*glVertex2f();glVertex2f();
  glVertex2f();glVertex2f();*/

void road()
{
    glBegin(GL_POLYGON);
    glColor3ub(210,226,255);

    glVertex2f(0,0);glVertex2f(1920,0);
    glVertex2f(1920,200);glVertex2f(0,200);
    glEnd();

    glLineWidth(9);
     glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0,100);glVertex2f(1920,100);
    glEnd();


}
/*glVertex2f();glVertex2f();
  glVertex2f();glVertex2f();*/

  void Headlight()
{
    glBegin(GL_POLYGON);//light
	glColor3ub(253,255,134);
    glVertex2f(1433,99);glVertex2f(1293,126);
    glVertex2f(1315,97);glVertex2f(1301,72);
    glEnd();
}

void car()//////////1111
{
    glPushMatrix(); // Save the current matrix
    glTranslatef(_move1, 0.0f, 0.0f);
    glBegin(GL_POLYGON);//First Part
    glColor3ub(255,0,0);

  glVertex2f(1523.1,128.6);glVertex2f(1456,117.1);
  glVertex2f(1430.9,103.1);glVertex2f(1425,97.4);
  glVertex2f(1424.7,92.7);glVertex2f(1430,90);
  glVertex2f(1439.9,83.9);glVertex2f(1442.1,79.7);
  glVertex2f(1441.8,76.9);glVertex2f(1437.1,72.5);
  glVertex2f(1432,70.5);glVertex2f(1431.1,68.5);
  glVertex2f(1433,65.7);glVertex2f(1526,65);
  glEnd();

  glBegin(GL_POLYGON);//2nd Part
  glColor3ub(255,0,0);
  glVertex2f(1526,65);glVertex2f(1523.1,128.6);
  glVertex2f(1526.4,124.7);glVertex2f(1536.2,121.6);
  glVertex2f(1543.3,121.2);glVertex2f(1547.8,118.5);
  glVertex2f(1614.5,117.9);glVertex2f(1629.9,119.8);
  glVertex2f(1641.6,125.4);glVertex2f(1647.9,132.6);
  glVertex2f(1650.6,139.2);glVertex2f(1650.6,65);
  glEnd();

  glBegin(GL_POLYGON);//3rd Part
  glColor3ub(255,0,0);
  glVertex2f(1650.6,65);glVertex2f(1650.6,139.2);
  glVertex2f(1657.4,139.8);glVertex2f(1679.3,138.6);
  glVertex2f(1695.7,136.5);glVertex2f(1735,124.6);
  glVertex2f(1759.7,116.3);glVertex2f(1765,112.7);
  glVertex2f(1765.8,109);glVertex2f(1766,85.3);
  glVertex2f(1765.6,79.6);glVertex2f(1762.4,73.1);
  glVertex2f(1755.6,68.5);glVertex2f(1749.3,67);
  glVertex2f(1719.3,65);
  glEnd();

  glBegin(GL_POLYGON);
  glColor3ub(0,0,0);
  glVertex2f(1424.7,92.7);glVertex2f(1430,90);
  glVertex2f(1439.9,83.9);glVertex2f(1442.1,79.7);
  glVertex2f(1441.8,76.9);glVertex2f(1437.1,72.5);
  glVertex2f(1433.7,71.1);
  glEnd();
  glBegin(GL_POLYGON);//front light
  glColor3ub(249,161,27);
  glVertex2f(1433.2,99);glVertex2f(1448.5,108.7);
  glVertex2f(1451.8,109.9);glVertex2f(1454.4,109.5);
  glVertex2f(1455.4,107.3);glVertex2f(1457.8,101.3);
  glVertex2f(1457.7,99.3);glVertex2f(1452.3,96.8);
  glVertex2f(1447.4,97.6);
  glEnd();

  glBegin(GL_POLYGON);//back light
  glColor3ub(249,161,27);
  glVertex2f(1737.9,123.6);glVertex2f(1743.8,111);
  glVertex2f(1753.9,106.2);//glVertex2f(1765.8,109);
  //glVertex2f(1785,112.7);glVertex2f(1759.7,116.3);
glVertex2f(1759.7+5,116.3);

  glEnd();

  glBegin(GL_POLYGON);
  glColor3ub(255,0,0);
  glVertex2f(1523.1,128.6);
  glVertex2f(1526.4,124.7);glVertex2f(1536.2,121.6);
  glVertex2f(1543.3,121.2);glVertex2f(1547.8,118.5);
  glVertex2f(1614.5,117.9);glVertex2f(1629.9,119.8);
  glVertex2f(1641.6,125.4);glVertex2f(1647.9,132.6);
  glVertex2f(1650.6,139.2);glVertex2f(1636.4,154.1);
  glVertex2f(1623.3,158.4);glVertex2f(1563.9,158.2);
  glEnd();

  glBegin(GL_POLYGON);//Glass
  glColor3ub(212,239,245);
  glVertex2f(1565.9,154.1);glVertex2f(1534.8,130.8);
  glVertex2f(1541.9,125.2);glVertex2f(1632.6,125.6);
  glVertex2f(1646.2,130.8);glVertex2f(1623.3,154.1);
  glEnd();



  glLineWidth(7.5);//front wheel
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(0, 0, 0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=30.34798;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+1496,y+79);
        }

	glEnd();
	 glLineWidth(7.5);//front wheel(white)
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(255,255,255);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=18.275668825;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+1496,y+79);
        }

	glEnd();



	glLineWidth(7.5);//back wheel
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=30.34798;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+1695,y+79);
        }

	glEnd();
	glLineWidth(7.5);//back wheel(white)
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(255,255,255);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=18.275668825;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+1695,y+79);
        }

	glEnd();


  if(isDay!=TRUE)
    {
        Headlight();
    }



	glPopMatrix();





}


void update1(int value) {
    _move1 -= _speed1; // Move the car horizontally
    if (_move1 <-2088) {
        _move1 = 2088; // Reset to the starting position
    }
    glutPostRedisplay(); // Request display refresh
    glutTimerFunc(20, update1, 0); // Set the next update timer
}

void Headlight1()
{
   glBegin(GL_POLYGON);//light
	glColor3ub(253,255,134);
    glVertex2f(1212,185);glVertex2f(1372,201);
    glVertex2f(1332,181);glVertex2f(1372,155);
    glEnd();
}

void car1()//////////2222

{    glPushMatrix();
     glTranslatef(_move2,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(168,120,143);
    //glColor3ub(195,195,193);
    glVertex2f(980,263);glVertex2f(1113,263);
  glVertex2f(1200,200);glVertex2f(1220,183);
  glVertex2f(1184,122);glVertex2f(1045,136);
  glVertex2f(1028,135);glVertex2f(1008,123);
  glVertex2f(966,165);glVertex2f(950,200);
  glEnd();

  glLineWidth(7.5);//back wheel(white)
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=33.7934904974;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+1220,y+145);
        }

	glEnd();
	//glPopMatrix();
glLineWidth(7.5);//back wheel(white)
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(0,0,0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=33.7934904974;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+974,y+145);
        }

	glEnd();

	glLineWidth(7.5);//back wheel(white)
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(255,255,255);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=20;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+974,y+145);
        }

	glEnd();

	glLineWidth(7.5);//back wheel(white)
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3ub(255,255,255);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=20;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+1220,y+145);
        }

	glEnd();



glBegin(GL_POLYGON);//glass
    glColor3ub(212,239,245);

  glVertex2f(998,250);glVertex2f(1112,250);
  glVertex2f(1172,200);glVertex2f(998,200);
  glEnd();

  glBegin(GL_POLYGON);//back light
  glColor3ub(249,161,27);
  //glColor3ub(255,0,0);
  glVertex2f(956,212);
  glVertex2f(964,212);
  glVertex2f(974,212);
  glVertex2f(955,190);
  glVertex2f(950,200);
  glEnd();

  glBegin(GL_POLYGON);//front light
  glColor3ub(249,161,27);
  //glColor3ub(255,0,0);
  glVertex2f(1200,176);
  glVertex2f(1200,200);
  glVertex2f(1212,185);
  glEnd();

  if(isDay!=TRUE)
    {
        Headlight1();
    }

glPopMatrix();

}
void update2(int value) {
    _move2 += _speed2; // Move the car1 horizontally
    if (_move2   > 1920) {
        _move2 = -2000; // Reset to the starting position
    }
    glutPostRedisplay(); // Request display refresh
    glutTimerFunc(20, update2, 0); // Set the next update timer
}
/*void drawSnowflake(float x, float y) {
    glColor3f(1.0, 1.0, 1.0); // Set snowflake color to white
    glBegin(GL_POLYGON);
    glVertex2f(x, y);
    glVertex2f(x + 4, y - 4);
    glVertex2f(x, y - 8);
    glVertex2f(x - 4, y - 4);
    glEnd();
}
void generateSnow() {
    for (int i = 0; i < 100; i++) {
        if (snowflakes[i].y <= 0) { // Reset snowflake if it has fallen below the screen
            snowflakes[i].x = rand() % 1920; // Random x position within the window width
            snowflakes[i].y = 1200; // Start snowflake from top of the screen
            snowflakes[i].speed = (rand() % 100) + 1; // Random speed between 1 and 5
        }
        snowflakes[i].y -= snowflakes[i].speed; // Update snowflake position
        drawSnowflake(snowflakes[i].x, snowflakes[i].y); // Draw snowflake
    }
}*/
void sky()/////4444
{
    glBegin(GL_POLYGON);

if(isDay){
  glColor3ub(236,231,253);
    glVertex2f(0,300);glColor3ub(249,229,194);glVertex2f(0,1200);

  glColor3ub(246,213,240);glVertex2f(1920,1200);glColor3ub(158,221,247);glVertex2f(1920,300);
}
else{
glColor3ub(138,103,113);
    glVertex2f(0,300);glColor3ub(96,97,121);glVertex2f(0,1200);

  glColor3ub(82,81,123);glVertex2f(1920,1200);glColor3ub(179,136,115);glVertex2f(1920,300);
}


  glEnd();

      glBegin(GL_POLYGON);
    if (isDay)
        glColor3ub(255,255,112); // Sun color
    else
        glColor3ub(255,255, 255); // Moon color
    for (int i = 0; i < 200; i++) {
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 98.94;
        float x = r * cos(A) + 1600;
        float y = r * sin(A) + 1095;
        glVertex2f(x, y);
    }
    glEnd();
    /*if(isDay!=true)
    {
        generateSnow();
    }
    glEnd();*/


}
void drawSnowflake(float x, float y) {
    glColor3f(1.0, 1.0, 1.0); // Set snowflake color to white
    glBegin(GL_POLYGON);
    glVertex2f(x, y);
    glVertex2f(x + 4, y - 4);
    glVertex2f(x, y - 8);
    glVertex2f(x - 4, y - 4);
    glEnd();
}

// Function to generate random snowflake positions
void generateSnow() {
    for (int i = 0; i < 100; i++) {
        if (snowflakes[i].y <= 0) { // Reset snowflake if it has fallen below the screen
            snowflakes[i].x = rand() % 1920; // Random x position within the window width
            snowflakes[i].y = 1200; // Start snowflake from top of the screen
            snowflakes[i].speed = (rand() % 100) + 1; // Random speed between 1 and 5
        }
        snowflakes[i].y -= snowflakes[i].speed; // Update snowflake position
        drawSnowflake(snowflakes[i].x, snowflakes[i].y); // Draw snowflake
    }
}

 void display() {
	glClearColor(1, 1, 1, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

    sky();


	building1();
	b2();

	b3();
	b4();
	b6();
	b5();
	b8();
	b7();
	b10();
	//b9();
	b20();
	b12();
	b11();
    b13();
    b14();
    b15();
    b16();
    b18();
    b19();
    b17();
    b9();

    ufo();

	metro_railboundary();
    train();
    background();
    metro_pillar();
    lamp_stand();
    if (isDay){
   lamp(14.83239697,257,292,254,255,225);
   lamp(14.83239697,257+300,292,254,255,225);
   lamp(14.83239697,257+750,292,254,255,225);
   lamp(14.83239697,257+1200,292,254,255,225);
   lamp(14.83239697,257+1650,292,254,255,225);
    }
    else
    {lamp(14.83239697,257,292,255,238,80);
   lamp(14.83239697,257+300,292,255,238,80);
   lamp(14.83239697,257+750,292,255,238,80);
   lamp(14.83239697,257+1200,292,255,238,80);
   lamp(14.83239697,257+1650,292,255,238,80);

    }
   branch();
   tree(36.166,116,293,83,139,78);
   tree(36.166,116+300,293,83,139,78);
   tree(36.166,116+750,293,83,139,78);
   tree(36.166,116+1200,293,83,139,78);
   tree(36.166,116+1650,293,83,139,78);

    road();
    //tree(56.1248608,161,138,83,139,78);
    car1();
    car();

    generateSnow();
	glFlush();
 }

void handleKeypress(unsigned char key, int x, int y) {
    switch (key) {
        case 'a': // Move left
            ufoX -= 10.0f;
            break;
        case 'd': // Move right
            ufoX += 10.0f;
            break;
    }
    glutPostRedisplay(); // Redraw the scene
}
void updateSky(int value) {
    isDay = !isDay; // Toggle day/night
    glutPostRedisplay(); // Call display function
    glutTimerFunc(10000, updateSky, 0); // Change every 5 seconds
}


 int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(800, 600);
    glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-600)/2, (glutGet(GLUT_SCREEN_HEIGHT)-600)/2);
    glutCreateWindow("2030");
    glutDisplayFunc(display);
    glutKeyboardFunc(handleKeypress);
    gluOrtho2D(0, 1920, 0, 1200);
    glutTimerFunc(20, update, 0); // Start the update timer for bullet train
    glutTimerFunc(20, update1, 0);//car
    glutTimerFunc(20, update2, 0);//car1
    updateSky(0);
    glutMainLoop();
    return 0;
}















