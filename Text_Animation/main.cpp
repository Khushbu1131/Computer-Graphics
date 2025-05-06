









/*#include <GL/glut.h>
#include <SOIL/SOIL.h> // Library for loading images

GLfloat textPosX = -40.0f; // Initial position of the text
GLfloat textSpeed = 1.0f;  // Speed of text animation
GLuint textureID;          // ID of the loaded texture

void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-50.0, 50.0, -50.0, 50.0);

    // Load the image and create texture
    textureID = SOIL_load_OGL_texture(
        "C:\Users\ASUS\Downloads\beach.jpg", SOIL_LOAD_AUTO, SOIL_CREATE_NEW_ID, SOIL_FLAG_INVERT_Y
    );
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw the image
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, textureID);
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f); glVertex2f(-50.0f, -50.0f);
    glTexCoord2f(1.0f, 0.0f); glVertex2f(50.0f, -50.0f);
    glTexCoord2f(1.0f, 1.0f); glVertex2f(50.0f, 50.0f);
    glTexCoord2f(0.0f, 1.0f); glVertex2f(-50.0f, 50.0f);
    glEnd();
    glDisable(GL_TEXTURE_2D);

    // Draw the animated text
    glPushMatrix();
    glTranslatef(textPosX, -40.0f, 0.0f);
    glColor3f(1.0f, 1.0f, 1.0f);
    glRasterPos2f(0.0f, 0.0f);
    glutBitmapString(GLUT_BITMAP_TIMES_ROMAN_24, (const unsigned char*)"Beautiful beach with palm trees.");
    glPopMatrix();

    glFlush();
}

void update(int value) {
    // Update the position of the text
    textPosX += textSpeed;
    if (textPosX > 40.0f) // Stop animation when text reaches the right side of the screen
        textPosX = 40.0f;

    glutPostRedisplay();
    glutTimerFunc(50, update, 0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Story Animation");

    init();

    glutDisplayFunc(display);
    glutTimerFunc(50, update, 0);

    glutMainLoop();
    return 0;
}*/

//#include <iostream>
//#include <GL/gl.h>
//#include <GL/glut.h>
//#include "glutil.h"
//float _move = 0.0f;
//Texture bx("E:\\Desktop\\OneDrive\\Documents\\Docs Files\\ab\\resources\\img55.bmp");
//Texture bx("E:\\Desktop\\OneDrive\\Documents\\Docs Files\\pls\\image1.bmp");




#include <windows.h>




#include <GL/gl.h>
#include <GL/glut.h>
#include <math.h>
#include <iostream>
#include<cstdio>
#include <cmath>
#include "glutil.h"


void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glColor3d(0.0, 0.0, 0.0);
    staticText("Beautiful beach!",300,300,.4,3,0,0,0.9);

    glLoadIdentity();
    glMatrixMode(GL_MODELVIEW);
    glColor3d(1.0, 1.0, 1.0);
    glBegin(GL_QUADS);
    glVertex2f(-1.0f, -1.0f);
    glVertex2f(1.0f, -1.0f);
    glVertex2f(1.0f, 1.0f);
    glVertex2f(-1.0f, 1.0f);
    glEnd();


    // Draw the rectangle with the applied texture
    glColor3d(1.0, 1.0, 1.0);
    glPushMatrix();
    glTranslatef(-0.2f, -0.2f, 0.0f);  // Adjust the translation to match the texture coordinates
    glBegin(GL_QUADS);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.4f, 0.0f);
    glVertex2f(0.4f, 0.4f);
    glVertex2f(0.0f, 0.4f);
    glEnd();

    ApplyTexture(0.0f, 0.0f, 0.4f,0.0f,  0.40f, 0.40f, 0.0f, 0.40f, textures[0].textureID); // Adjusted texture coordinates



    glPopMatrix();



    glutSwapBuffers();
}




int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1920, 1080);
    glutCreateWindow("Modified Box Movement");
    loadImageAndStore("C:/Users/ASUS/Downloads/beach.bmp");
    //PlayMusic("C:/Users/abha/Downloads/sample-6s.wav");
    glutDisplayFunc(display);
    gluOrtho2D(0, 5, 0, 5);
    glutMainLoop();

    return 0;
}


//3
/*
#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>
#include <vector>
#include <string>
#include "glutil.h" // Assuming this header defines texture loading functionality

// Structure to hold text information with animation properties
struct TextInfo {
    std::string text;
    float posX;
    float posY;
    float fadeStartTime; // Time when text starts fading in (seconds)
    float fadeDuration;  // Duration of text fade-in animation (seconds)
    float opacity;       // Current opacity (0.0 for fully transparent, 1.0 for fully opaque)
};

std::vector<TextInfo> storyTexts;
int currentTextIndex = 0;
bool animationCompleted = false;

// Function to load the beach image texture
GLuint beachTextureID;
void loadBeachImage() {
    loadImageAndStore("C:/Users/ASUS/Downloads/beach.bmp"); // Replace path with your image location
}

// Function to draw the still image with applied texture
void drawBeachImage() {
    glColor3d(1.0, 1.0, 1.0);
    glBindTexture(GL_TEXTURE_2D, beachTextureID); // Bind the texture
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f); glVertex2f(-1.0f, -1.0f);
    glTexCoord2f(1.0f, 0.0f); glVertex2f(1.0f, -1.0f);
    glTexCoord2f(1.0f, 1.0f); glVertex2f(1.0f, 1.0f);
    glTexCoord2f(0.0f, 1.0f); glVertex2f(-1.0f, 1.0f);
    glEnd();
}


// Function to display the text with fading animation
void displayText(const TextInfo& textInfo) {
    float currentTime = glutGet(GLUT_ELAPSED_TIME) / 1000.0f; // Time in seconds
    float elapsedTime = currentTime - textInfo.fadeStartTime;
    float opacity;

    // Calculate opacity based on animation progress
    if (elapsedTime < 0.0f) {
        opacity = 0.0f; // Text is hidden before fade-in starts
    } else if (elapsedTime < textInfo.fadeDuration) {
        opacity = elapsedTime / textInfo.fadeDuration; // Fade in smoothly
    } else {
        opacity = 1.0f; // Text is fully opaque after fade-in
    }

    // Draw text with adjusted opacity
    glColor4f(0.0f, 0.0f, 0.0f, opacity); // Black color with variable opacity
    glRasterPos2f(textInfo.posX, textInfo.posY);
    for (char c : textInfo.text) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c);
    }
}


void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw the beach image
    drawBeachImage();

    // Display the current text with animation
    displayText(storyTexts[currentTextIndex]);

    glutSwapBuffers();
}

void nextText(int value) {
    currentTextIndex++;
    if (currentTextIndex >= storyTexts.size()) {
        animationCompleted = true;
        return;
    }
    glutPostRedisplay();
    glutTimerFunc(2000, nextText, 0); // Display each text for 2 seconds
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(800, 600);
    glutCreateWindow("Beach Story Animation");

    // Load the beach image texture
    loadBeachImage();

    // Add story texts with fade-in animation properties
    storyTexts.push_back({"Welcome to the beach!", -0.9f, 0.8f, 1.0f, 1.0f, 0.0f});
    storyTexts.push_back({"Golden sands stretch for miles,", -0.9f, 0.7f, 3.0f, 1.5f, 0.0f});
    storyTexts.push_back({"fringed by swaying palm trees.", -0.9f, 0.6f, 5.5f, 1.5f, 0.0f});
    storyTexts.push_back({"The gentle sound of waves", -0.9f, 0.5f, 8.0f, 1.5f, 0.0f});
    storyTexts.push_back({"lulls into relaxation,", -0.9f, 0.4f, 10.5f, 1.5f, 0.0f});
    storyTexts.push_back({"while the sun kisses your skin", -0.9f, 0.3f, 13.0f, 1.5f, 0.0f});
    storyTexts.push_back({"with its warm embrace.", -0.9f, 0.2f, 15.5f, 1.5f, 0.0f});

    // Start the animation
    glutDisplayFunc(display);
    nextText(0);

    glutMainLoop();

    return 0;
}
*/
//4

/*#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>
#include <vector>
#include <string>
#include "glutil.h"

struct TextInfo {
    std::string text;
    float posX;
    float posY;
    float fadeStartTime; // Time when text starts fading in (seconds)
    float fadeDuration;  // Duration of text fade-in animation (seconds)
    float opacity;       // Current opacity (0.0 for fully transparent, 1.0 for fully opaque)
};

std::vector<TextInfo> storyTexts;
int currentTextIndex = 0;
bool animationCompleted = false;

// Function to load the beach image texture
GLuint beachTextureID;
void loadBeachImage() {
    beachTextureID = loadTexture("C:/Users/ASUS/Downloads/beach.bmp"); // Replace path with your image location
}

void drawBeachImage() {
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, beachTextureID);
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f); glVertex2f(-1.0f, -1.0f);
    glTexCoord2f(1.0f, 0.0f); glVertex2f(1.0f, -1.0f);
    glTexCoord2f(1.0f, 1.0f); glVertex2f(1.0f, 1.0f);
    glTexCoord2f(0.0f, 1.0f); glVertex2f(-1.0f, 1.0f);
    glEnd();
    glDisable(GL_TEXTURE_2D);
}

void displayText(const TextInfo& textInfo) {
    float currentTime = glutGet(GLUT_ELAPSED_TIME) / 1000.0f; // Time in seconds
    float elapsedTime = currentTime - textInfo.fadeStartTime;
    float opacity;

    // Calculate opacity based on animation progress
    if (elapsedTime < 0.0f) {
        opacity = 0.0f; // Text is hidden before fade-in starts
    } else if (elapsedTime < textInfo.fadeDuration) {
        opacity = elapsedTime / textInfo.fadeDuration; // Fade in smoothly
    } else {
        opacity = 1.0f; // Text is fully opaque after fade-in
    }

    // Draw text with adjusted opacity
    glColor4f(0.0f, 0.0f, 0.0f, opacity); // Black color with variable opacity
    glRasterPos2f(textInfo.posX, textInfo.posY);
    for (char c : textInfo.text) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c);
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw the beach image
    drawBeachImage();

    // Display the current text with animation
    displayText(storyTexts[currentTextIndex]);

    glutSwapBuffers();
}

void nextText(int value) {
    currentTextIndex++;
    if (currentTextIndex >= storyTexts.size()) {
        animationCompleted = true;
        return;
    }
    glutPostRedisplay();
    glutTimerFunc(2000, nextText, 0); // Display each text for 2 seconds
}


int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1920, 1080);
    glutCreateWindow("Modified Box Movement");
    loadImageAndStore("C:/Users/ASUS/Downloads/beach.bmp");

    // Add story texts with fade-in animation properties
    storyTexts.push_back({"Welcome to the beach!", -0.9f, 0.8f, 1.0f, 1.0f, 0.0f});
    storyTexts.push_back({"Golden sands stretch for miles,", -0.9f, 0.7f, 3.0f, 1.5f, 0.0f});
    storyTexts.push_back({"fringed by swaying palm trees.", -0.9f, 0.6f, 5.5f, 1.5f, 0.0f});
    storyTexts.push_back({"The gentle sound of waves", -0.9f, 0.5f, 8.0f, 1.5f, 0.0f});
    storyTexts.push_back({"lulls into relaxation,", -0.9f, 0.4f, 10.5f, 1.5f, 0.0f});

    glutDisplayFunc(display);
    gluOrtho2D(0, 5, 0, 5);
    nextText(0);
    glutMainLoop();

    return 0;
}
*/


/*
#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <iostream>
#include <vector>
#include <string>
#include "glutil.h" // Assuming this contains the necessary texture loading function

struct TextInfo {
    std::string text;
    float posX;
    float posY;
    float fadeStartTime; // Time when text starts fading in (seconds)
    float fadeDuration;  // Duration of text fade-in animation (seconds)
    float opacity;       // Current opacity (0.0 for fully transparent, 1.0 for fully opaque)
};

std::vector<TextInfo> storyTexts;
int currentTextIndex = 0;
bool animationCompleted = false;

// Function to load the beach image texture
GLuint beachTextureID;
void loadBeachImage() {
    beachTextureID = loadTexture("C:/Users/ASUS/Downloads/beach.bmp"); // Replace path with your image location
}

void drawBeachImage() {
    glEnable(GL_TEXTURE_2D);
    glBindTexture(GL_TEXTURE_2D, beachTextureID);
    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f); glVertex2f(-1.0f, -1.0f);
    glTexCoord2f(1.0f, 0.0f); glVertex2f(1.0f, -1.0f);
    glTexCoord2f(1.0f, 1.0f); glVertex2f(1.0f, 1.0f);
    glTexCoord2f(0.0f, 1.0f); glVertex2f(-1.0f, 1.0f);
    glEnd();
    glDisable(GL_TEXTURE_2D);
}

void displayText(const TextInfo& textInfo) {
    float currentTime = glutGet(GLUT_ELAPSED_TIME) / 1000.0f; // Time in seconds
    float elapsedTime = currentTime - textInfo.fadeStartTime;
    float opacity;

    // Calculate opacity based on animation progress
    if (elapsedTime < 0.0f) {
        opacity = 0.0f; // Text is hidden before fade-in starts
    } else if (elapsedTime < textInfo.fadeDuration) {
        opacity = elapsedTime / textInfo.fadeDuration; // Fade in smoothly
    } else {
        opacity = 1.0f; // Text is fully opaque after fade-in
    }

    // Draw text with adjusted opacity
    glColor4f(0.0f, 0.0f, 0.0f, opacity); // Black color with variable opacity
    glRasterPos2f(textInfo.posX, textInfo.posY);
    for (char c : textInfo.text) {
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c);
    }
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw the beach image
    drawBeachImage();

    // Display the current text with animation
    displayText(storyTexts[currentTextIndex]);

    glutSwapBuffers();
}

void nextText(int value) {
    currentTextIndex++;
    if (currentTextIndex >= storyTexts.size()) {
        animationCompleted = true;
        return;
    }
    glutPostRedisplay();
    glutTimerFunc(2000, nextText, 0); // Display each text for 2 seconds
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1920, 1080);
    glutCreateWindow("Modified Box Movement");
    loadBeachImage(); // Load beach image texture

    // Add story texts with fade-in animation properties
    storyTexts.push_back({"Welcome to the beach!", -0.9f, 0.8f, 1.0f, 1.0f, 0.0f});
    storyTexts.push_back({"Golden sands stretch for miles,", -0.9f, 0.7f, 3.0f, 1.5f, 0.0f});
    storyTexts.push_back({"fringed by swaying palm trees.", -0.9f, 0.6f, 5.5f, 1.5f, 0.0f});
    storyTexts.push_back({"The gentle sound of waves", -0.9f, 0.5f, 8.0f, 1.5f, 0.0f});
    storyTexts.push_back({"lulls into relaxation,", -0.9f, 0.4f, 10.5f, 1.5f, 0.0f});

    glutDisplayFunc(display);
    gluOrtho2D(0, 5, 0, 5);
    nextText(0);
    glutMainLoop();

    return 0;
}
*/
