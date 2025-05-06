
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
