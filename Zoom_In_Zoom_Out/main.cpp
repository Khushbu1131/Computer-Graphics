#include <GL/glut.h>

GLfloat scale = 1.0f;

void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-50,50,-50,50);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    //glColor3f(1.0, 1.0, 1.0);
    glPushMatrix();
    glScalef(scale, scale, 1.0f);
    glBegin(GL_QUADS);
    glColor3f(1.0,0,0);
    glVertex2f(-10.0, -10.0);
    glColor3f(0,1.0,1);
    glVertex2f(10.0, -10.0);
    glColor3f(0,0,1.0);
    glVertex2f(10.0, 10.0);
    glColor3f(1.0,0,1.0);
    glVertex2f(-10.0, 10.0);
    glEnd();
    glPopMatrix();

    glFlush();
}

void keyboard(unsigned char key, int x, int y) {
    switch (key) {
        case '+':
            scale += 0.1f;
            break;
        case '-':
            scale -= 0.1f;
            if (scale < 0.1f) scale = 0.1f; // Minimum scale
            break;
        default:
            break;
    }
    glutPostRedisplay();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Zoom In/Out Animation");

    init();

    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);

    glutMainLoop();
    return 0;
}
