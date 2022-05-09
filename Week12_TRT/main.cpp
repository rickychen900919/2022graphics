#include <GL/glut.h>
float angle=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glPushMatrix();
    glRotatef(angle,0,0,1);///旋轉
    glTranslatef(0.4,-0.07,0);///旋轉
    glutSolidTeapot(0.3);///往右下移動(手把移動中心)
    glPopMatrix();
    glutSwapBuffers();
    angle+=0.1;
}
int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_DEPTH);
    glutCreateWindow("Week12_TRT");
    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutMainLoop();
}
