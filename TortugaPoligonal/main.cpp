#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Dibujar cuerpo de la tortuga
    glColor3f(0.0, 0.5, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-0.5, -0.3);
    glVertex2f(-0.5, 0.3);
    glVertex2f(0.5, 0.3);
    glVertex2f(0.5, -0.3);
    glEnd();

    // Dibujar cabeza de la tortuga
    glColor3f(0.0, 0.5, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(0.5, 0.0);
    glVertex2f(0.7, 0.2);
    glVertex2f(0.7, -0.2);
    glEnd();

    // Dibujar ojos de la tortuga
    glColor3f(0.0, 0.0, 0.0);
    glPointSize(5.0);
    glBegin(GL_POINTS);
    glVertex2f(0.6, 0.1);
    glVertex2f(0.6, -0.1);
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Tortuga");
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
