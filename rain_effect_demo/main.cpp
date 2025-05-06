/*#include <GL/glut.h>
#include <vector>
#include <cstdlib>
#include <ctime>

struct Raindrop {
    float x, y; // Position
    float velocity; // Speed of falling
};

std::vector<Raindrop> raindrops;

void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0); // Black background
    srand(time(NULL)); // Seed for random number generation
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    glColor4f(1.0f, 1.0f, 1.0f, 1.5f); // Blue color with transparency
    for (const auto& drop : raindrops) {
        glPushMatrix();
        glTranslatef(drop.x, drop.y, 0);
        glBegin(GL_QUADS);
        glVertex2f(-1, 0);
        glVertex2f(1, 0);
        glVertex2f(1, -10);
        glVertex2f(-1, -10);
        glEnd();
        glPopMatrix();
    }

    glutSwapBuffers();
}

void timer(int value) {
    for (auto& drop : raindrops) {
        drop.y -= drop.velocity * 0.01f;//0.01f
        if (drop.y < -500) {
            drop.y = 500;
            drop.x = (rand() % 800) - 400;
        }
    }

    glutPostRedisplay();
    glutTimerFunc(16, timer, 0); // Redraw every 16 milliseconds (about 60 frames per second)
}

void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-w / 2, w / 2, -h / 2, h / 2);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Rain Effect");
    init();

    for (int i = 0; i < 100; ++i) {
        Raindrop drop;
        drop.x = (rand() % 800) - 400;
        drop.y = (rand() % 600) + 300;
        drop.velocity = (rand() % 100) + 50;
        raindrops.push_back(drop);
    }

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(0, timer, 0);
    glutMainLoop();
    return 0;
}


*/













#include <GL/glut.h>
#include <vector>
#include <cstdlib>
#include <ctime>

struct Raindrop {
    float x, y; // Position
    float velocity; // Speed of falling
};

float floodLevel = -500.0f; // Initial flood level (bottom of the screen)

std::vector<Raindrop> raindrops;

void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0); // Black background
    srand(time(NULL)); // Seed for random number generation
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();

    // Draw rain
    glColor4f(1.0f, 1.0f, 1.0f, 0.5f); // White color with transparency
    for (const auto& drop : raindrops) {
        glPushMatrix();
        glTranslatef(drop.x, drop.y, 0);
        glBegin(GL_LINES);
        glVertex2f(0, 0);
        glVertex2f(0, -5); // Adjust line length for raindrop size
        glEnd();
        glPopMatrix();
    }

    // Draw flood area (modify for a smoother animation)
    glColor4f(1.0f, 1.2f, 1.0f, 1.8f); // Light blue with transparency 0.8f
    glBegin(GL_QUADS);
    glVertex2f(-400, floodLevel);
    glVertex2f(400, floodLevel);
    glVertex2f(400, -500); // Bottom-right corner
    glVertex2f(-400, -500); // Bottom-left corner
    glEnd();

    glutSwapBuffers();
}

void timer(int value) {
    // Update raindrops
    for (auto& drop : raindrops) {
        drop.y -= drop.velocity * 0.1f;
        if (drop.y < -500) {
            drop.y = 500;
            drop.x = (rand() % 800) - 400;
        }
    }

    // Update flood level
    if (floodLevel < 0) { // Adjust maximum flood level
        floodLevel += 1; // Adjust flood rise speed
    }

    glutPostRedisplay();
    glutTimerFunc(16, timer, 0); // Redraw every 16 milliseconds (about 60 frames per second)
}

void reshape(int w, int h) {
    glViewport(0, 0, w, h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-w / 2, w / 2, -h / 2, h / 2);
    glMatrixMode(GL_MODELVIEW);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Rain Effect with Flood");
    init();

    for (int i = 0; i < 100; ++i) {
        Raindrop drop;
        drop.x = (rand() % 800) - 400;
        drop.y = (rand() % 600) + 300;
        drop.velocity = (rand() % 100) + 50;
        raindrops.push_back(drop);
    }

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);
    glutTimerFunc(0, timer, 0);
    glutMainLoop();
    return 0;
}


