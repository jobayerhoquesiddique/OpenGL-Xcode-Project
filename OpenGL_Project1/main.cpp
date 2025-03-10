#include <GLUT/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);  // Clear the screen
    glColor3f(1.0f, 0.0f, 0.0f);  // Set the drawing color (red)
    glBegin(GL_QUADS);             // Start drawing a square
    glVertex2f(-0.5f, -0.5f);     // Bottom-left corner
    glVertex2f( 0.5f, -0.5f);     // Bottom-right corner
    glVertex2f( 0.5f,  0.5f);     // Top-right corner
    glVertex2f(-0.5f,  0.5f);     // Top-left corner
    glEnd();                       // End the square

    glutSwapBuffers();             // Swap the buffers to display the result
}

void init() {
    glClearColor(0.7f, 0.9f, 1.0f, 1.0f);  // Set background color (light blue)
    glMatrixMode(GL_PROJECTION);            // Set the projection matrix
    glLoadIdentity();                       // Reset the projection matrix
    gluOrtho2D(-1.0, 1.0, -1.0, 1.0);      // Set orthogonal projection
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);                 // Initialize GLUT
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB); // Set display mode
    glutInitWindowSize(500, 500);          // Set window size
    glutCreateWindow("OpenGL Red Square"); // Create the window
    init();                                // Initialize OpenGL settings
    glutDisplayFunc(display);              // Register display callback
    glutMainLoop();                        // Start the GLUT main loop
    return 0;
}
