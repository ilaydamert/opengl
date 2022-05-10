#include <GL/glut.h>
#include <stdlib.h>
void ayarlar(void)
{
glClearColor(0.0,0.0,0.0,0.0);
glShadeModel(GL_FLAT);
glOrtho(-2.0, 2.0, -2.0, 2.0, -1.0, 1.0);
}
void sekil(void)
{
glClear(GL_COLOR_BUFFER_BIT); //�al��madan �nce eskiden kalan pikselleri temizler
glBegin(GL_TRIANGLE_STRIP); //Birbirine ba�l� ��genler olu�turmak i�in kullan�l�r.
glVertex2f(0.0f,0.9f); //koordinatlar. 2 parametre alaca��n� ve float oldu�unu temsil eder.
glVertex2f(0.4f,0.1f); //ortak k��e noktas�
glColor3f(1.0, 0.0, 0.55); //Renkler. 3 parametre alaca��n� ve float oldu�unu temsil eder.
glVertex2f(-0.4f,0.1f); //ortak k��e noktas�
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
glutCreateWindow("odev");
ayarlar();
glutDisplayFunc(sekil);
glutMainLoop();
return 0; }
