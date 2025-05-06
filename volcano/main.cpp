#include <GL/glut.h>
#include <math.h>
#include <cstdlib>

// Constants
const int windowWidth = 800;
const int windowHeight = 600;

// Animation variables
float volcanoScale = 1.0f;
float lavaTime = 0.0f;
bool animationRunning = true;

// Function prototypes for drawing shapes
void drawVolcano(float scale);
void drawLavaStream(float scale, float time);
void drawRiver();

void display() {
  // Clear the screen
  glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

  // Update animation variables
  if (animationRunning) {
    lavaTime += 0.01f;
  }

  // Draw the scene
  glPushMatrix();

  // Draw the volcano
  drawVolcano(volcanoScale);

  // Translate the lava stream to flow from the volcano
  glTranslatef(0.0f, -0.5f, 0.0f);

  // Draw the lava stream
  drawLavaStream(0.5f, lavaTime); // Adjust scale as needed

  glPopMatrix();

  // Draw the river
  drawRiver();

  // Swap buffers
  glutSwapBuffers();
}

void reshape(int width, int height) {
  // Set the viewport
  glViewport(0, 0, width, height);

  // Update the projection matrix for proper scaling
  glMatrixMode(GL_PROJECTION);
  glLoadIdentity();
  gluPerspective(60.0, (float)width / (float)height, 0.1f, 100.0f);

  // Switch back to modelview matrix
  glMatrixMode(GL_MODELVIEW);
  glLoadIdentity();
}

void keyboard(unsigned char key, int x, int y) {
  switch (key) {
    case ' ':
      animationRunning = !animationRunning;
      break;
    case 27: // Escape key
      exit(0);
      break;
  }
}

void idle() {
  // Request a redraw for animation
  glutPostRedisplay();
}

void init() {
  // Set background color
  glClearColor(0.2f, 0.2f, 0.2f, 1.0f);

  // Enable depth testing
  glEnable(GL_DEPTH_TEST);

  // Set up lighting (optional, adjust as needed)
  glEnable(GL_LIGHTING);
  GLfloat light_ambient[] = {0.2f, 0.2f, 0.2f, 1.0f};
  glLightfv(GL_LIGHT0, GL_AMBIENT, light_ambient);
  GLfloat light_position[] = {0.0f, 5.0f, 10.0f, 1.0f};
  glLightfv(GL_LIGHT0, GL_POSITION, light_position);
  glEnable(GL_LIGHT0);
}

// Function to draw a cone representing the volcano (replace with your desired shape)
void drawVolcano(float scale) {
  glPushMatrix();
  glColor3f(0.5f, 0.5f, 0.5f); // Adjust color as needed
  glTranslatef(0.0f, 0.0f, 0.0f); // Adjust position as needed
  glRotatef(90.0f, 1.0f, 0.0f, 0.0f); // Rotate for vertical cone
  glutSolidCone(scale, scale * 2, 20, 20);
  glPopMatrix();
}

// Function to draw a red, wavy quad representing the lava stream
void drawLavaStream(float scale, float time) {
  glPushMatrix();
  glColor3f(1.0f, 0.0f, 0.0f); // Red lava
  float waveHeight = 0.2f;
  float segments = 20.0f;
  glBegin(GL_QUAD_STRIP);
  for (float i = 0.0f; i <= segments; i++) {
    float x = i / segments;
    float y = sin(i * 3.0f + time) * waveHeight;
    glVertex3f(x * scale, y, 0.0f);
    glVertex3f(x * scale, 0.0f, 0.0f);
  }
  glEnd();
  glPopMatrix();
}

// Function to draw the river (replace with your desired shape)
void drawRiver() {
  glColor3f(0.0f, 0.0f, 1.0f); // Blue river
  glBegin(GL_QUADS);
  glVertex3f(-1.0f, -0.5f, 0.0f);
  glVertex3f(-1.0f, -1.0f, 0.0f);
  glVertex3f(1.0f, -1.0f, 0.0f);
  glVertex3f(1.0f, -0.5f, 0.0f);
  glEnd();
}

int main(int argc, char** argv) {
  // Initialize GLUT
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
  glutInitWindowSize(windowWidth, windowHeight);
  glutCreateWindow("Volcanic Eruption");

  // Register callback functions
  glutDisplayFunc(display);
  glutReshapeFunc(reshape);
  glutKeyboardFunc(keyboard);
  glutIdleFunc(idle);

  // Initialize OpenGL
  init();

  // Enter the GLUT event loop
  glutMainLoop();

  return 0;
}





/*
#include <GL/glut.h>
#include <iostream>
#include <cmath>
#include <ctime>

#define PI 3.14159265358979323846
#define NUM_PARTICLES 1000
#define VOLCANO_HEIGHT 2.0
#define VOLCANO_RADIUS 1.0
#define LAVA_SPEED 0.1

typedef struct {
    float x, y, z;
    float speed;
} Particle;

Particle particles[NUM_PARTICLES];
float volcanoBase = 0.0;

void drawVolcano() {
    glPushMatrix();
    glColor3f(0.5, 0.5, 0.5);
    glutSolidCone(VOLCANO_RADIUS, VOLCANO_HEIGHT, 50, 50);
    glPopMatrix();
}

void drawParticles() {
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POINTS);
    for (int i = 0; i < NUM_PARTICLES; ++i) {
        glVertex3f(particles[i].x, particles[i].y, particles[i].z);
    }
    glEnd();
}

void updateParticles() {
    for (int i = 0; i < NUM_PARTICLES; ++i) {
        particles[i].y -= particles[i].speed;
        if (particles[i].y < volcanoBase) {
            particles[i].y = VOLCANO_HEIGHT;
        }
    }
}

void initParticles() {
    srand(time(NULL));
    for (int i = 0; i < NUM_PARTICLES; ++i) {
        particles[i].x = (float)rand() / RAND_MAX * 2 * VOLCANO_RADIUS - VOLCANO_RADIUS;
        particles[i].y = (float)rand() / RAND_MAX * VOLCANO_HEIGHT;
        particles[i].z = (float)rand() / RAND_MAX * 2 * VOLCANO_RADIUS - VOLCANO_RADIUS;
        particles[i].speed = LAVA_SPEED * ((float)rand() / RAND_MAX + 0.5);
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glLoadIdentity();

    // Set camera position
    gluLookAt(0.0, 5.0, 10.0, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0);

    // Draw volcano
    drawVolcano();

    // Draw lava particles
    drawParticles();

    glutSwapBuffers();
}

void update(int value) {
    updateParticles();
    glutPostRedisplay();
    glutTimerFunc(16, update, 0);
}

void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(45.0, (double)w / (double)h, 1.0, 100.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
}

void init() {
    glEnable(GL_DEPTH_TEST);
    glClearColor(0.0, 0.0, 0.0, 1.0);
    initParticles();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Volcanic Eruption");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(16, update, 0);

    init();

    glutMainLoop();
    return 0;
}*/

//4
/*
#include <windows.h>
#include <GL/glut.h>
#include<math.h>

float _move1 = 0;
float _move2 = 0;
float _move = 0.0f;

void lava()
{
    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3ub(207,16,32);
    glVertex2f(-0.1753019550591, 0.5892972891566-_move1);
    glVertex2f(-0.2,0.6);
    glVertex2f( 0,.6);
    glVertex2f(-0.0020844787906,0.5862748272404-_move2);
    glEnd();
    glPopMatrix();
}

void gas(){

    glMatrixMode(GL_MODELVIEW);
    glPushMatrix();
    glTranslatef(0.0f,_move,  0.0f);
    glBegin(GL_LINES);
      glColor3ub(178,190,181);
      glVertex2f(-0.2,0.6);
      glVertex2f( -0.1,0.7);
      glVertex2f( -0.2,0.9);
    glEnd();

    glBegin(GL_LINES);
      glColor3ub(178,190,181);
      glVertex2f(-0.1,0.6);
      glVertex2f( 0,0.7);
      glVertex2f( -0.1,0.8);
      glVertex2f( 0,0.9);

    glEnd();

    glBegin(GL_LINES);
      glColor3ub(178,190,181);
      glVertex2f(0,0.6);
      glVertex2f( 0.1,0.7);
      glVertex2f(0,0.8);
       glVertex2f(0.1,0.9);
        glEnd();
glPopMatrix();
}

void display() {
	glClearColor(.0f, .3f, .0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);


   glBegin(GL_POLYGON);
      glColor3ub(102, 102, 51);
      glVertex2f(-1,-0.3);
      glVertex2f(-1,-1);
      glVertex2f(1,-1);
      glVertex2f(1,-0.3);
   glEnd();

	glBegin(GL_POLYGON);
      glColor3ub(204, 85, 0);
      glVertex2f(-0.2,0.6);
      glVertex2f(-0.7,-0.6);
      glVertex2f(0.5,-0.6);
      glVertex2f( 0,.6);
   glEnd();

	lava();
	gas();
    glFlush();
glutSwapBuffers();
}


void update(int value) {
 _move1 += .002;
 _move2 += .002;

if(_move1 > 1.3 && _move2 > 1.3)
{
    _move1 =1.3;
    _move2 =1.3;
    }
    glutPostRedisplay();
    glutTimerFunc(500, update, 0);
}

void update1(int value) {

 _move += .02;
if(_move > .2)
{
_move = 0;
}
glutPostRedisplay();
glutTimerFunc(200, update1, 0);
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutCreateWindow("Volcano Eruption");
	glutInitWindowSize(800,800);
	glutDisplayFunc(display);
	glutTimerFunc(500, update, 0);
	glutTimerFunc(200, update1, 0);
	glutMainLoop();
	return 0;
}

*/

