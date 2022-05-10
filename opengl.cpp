#include <GL/glut.h>
#include <stdlib.h>
void settings(void)
{
glClearColor(0.0,0.0,0.0,0.0);
glShadeModel(GL_FLAT);
glOrtho(-2.0, 2.0, -2.0, 2.0, -1.0, 1.0);
}
void shape(void)
{
glClear(GL_COLOR_BUFFER_BIT); //Cleans old pixels before running
glBegin(GL_TRIANGLE_STRIP); //It is used to form interconnected triangles.
glVertex2f(0.0f,0.9f); //coordinates. Represents that it will take 2 parameters and is a float.
glVertex2f(0.4f,0.1f); //common corner point
glColor3f(1.0, 0.0, 0.55); //Colors. Represents that it will take 3 parameters and is a float.
glVertex2f(-0.4f,0.1f); //common corner point
glColor3f(1.0, 0.5, 0.5);
glVertex2f(-0.0f,-0.7f);
glEnd();
glFlush();
}
int main(int argc,char ** argv)
{
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB );
glutInitWindowPosition(0,0);
glutInitWindowSize(200,200);
glutCreateWindow("opengl");
settings();
glutDisplayFunc(shape);
glutMainLoop();
return 0; }
