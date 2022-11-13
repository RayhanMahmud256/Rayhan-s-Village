#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
#include <windows.h>

float windowHeight = 500;
float windowWidth = 500;

bool flagScale=false;
double angle=0;
double an=0;

void cloud()
{
    glPushMatrix();

    glColor3ub(255,255,255);
    glTranslatef(-25,20,0);
    glScalef(0.5,0.5,0);
    glutSolidSphere(5.5,50,7);

    glPopMatrix();
    glEnd();

    glPushMatrix();

    glColor3ub(255,255,255);
    glTranslatef(-22,20,0);
    glScalef(0.6,0.4,0);
    glutSolidSphere(5.5,50,7);

    glPopMatrix();
    glEnd();

    glPushMatrix();

    glColor3ub(255,255,255);
    glTranslatef(-28,20,0);
    glScalef(0.6,0.4,0);
    glutSolidSphere(5.5,50,7);

    glPopMatrix();
    glEnd();
}

void sky()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(0,255,255);
    glVertex2f(-35.0,35.0);
    glVertex2f(-35.0,15.0);
    glVertex2f(35.0,15.0);
    glVertex2f(35.0,35.0);
    glEnd();
    glPopMatrix();
}

void tree()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(-3.0,8.0);
    glVertex2f(-3.0,1.0);
    glVertex2f(-2.0,1.0);
    glVertex2f(-2.0,8.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(-2.5,14.0);
    glVertex2f(-6.0,8.0);
    glVertex2f(1.0,8.0);
    glEnd();
    glPopMatrix();

}

void dishouse()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(1.0,7.0);
    glVertex2f(1.0,1.0);
    glVertex2f(7.0,1.0);
    glVertex2f(7.0,7.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,1.0);
    glVertex2f(3.0,5.0);
    glVertex2f(3.0,1.0);
    glVertex2f(5.0,1.0);
    glVertex2f(5.0,5.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(4.0,10.0);
    glVertex2f(1.0,7.0);
    glVertex2f(7.0,7.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(1.5,4.0);
    glVertex2f(1.5,3.0);
    glVertex2f(2.0,3.0);
    glVertex2f(2.0,4.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(5.5,4.0);
    glVertex2f(5.5,3.0);
    glVertex2f(6.0,3.0);
    glVertex2f(6.0,4.0);
    glEnd();
    glPopMatrix();


}

void sun()
{
    glPushMatrix();

    glColor3ub(255,128,0);
    glTranslatef(-10,30,0);
    glScalef(.8,.8,0);
    glutSolidSphere(5.5,50,7);

    glPopMatrix();
    glEnd();

}

void ground()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(0,153,0);
    glVertex2f(-35.0,15.0);
    glVertex2f(-35.0,0.0);
    glVertex2f(35.0,0.0);
    glVertex2f(35.0,15.0);
    glEnd();
    glPopMatrix();
}

void tila()
{
    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3ub(0,102,0);
    glVertex2f(4.0,10.0);
    glVertex2f(1.0,7.0);
    glVertex2f(7.0,7.0);
    glEnd();
    glPopMatrix();
}

void river()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(0,255,255);
    glVertex2f(-35.0,0.0);
    glVertex2f(-35.0,-35.0);
    glVertex2f(35.0,-35.0);
    glVertex2f(35.0,0.0);
    glEnd();
    glPopMatrix();
}

void road()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(51,0,0);
    glVertex2f(-35.0,0.0);
    glVertex2f(-35.0,-10.0);
    glVertex2f(35.0,-10.0);
    glVertex2f(35.0,0.0);
    glEnd();
    glPopMatrix();
}

void roaddesign()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(255,255, 204);
    glVertex2f(-35.0,-4.5);
    glVertex2f(-35.0,-5.5);
    glVertex2f(35.0,-5.5);
    glVertex2f(35.0,-4.5);
    glEnd();
    glPopMatrix();
}

void boat()
{
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3ub(51,0,0);
    glVertex2f(0.0,0.0);
    glVertex2f(0.0,-3.0);
    glVertex2f(8.0,-3.0);
    glVertex2f(8.0,0.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3ub(51,0,0);
    glVertex2f(8.0,0.0);
    glVertex2f(8.0,-3.0);
    glVertex2f(11.0,2.0);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_TRIANGLES);
    glColor3ub(51,0,0);
    glVertex2f(-3.0,2.0);
    glVertex2f(0.0,-3.0);
    glVertex2f(0,0);
    glEnd();
    glPopMatrix();
}

void display(void)
{
    glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-35, 35, -35, 35);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    sky();
    sun();

    glPushMatrix();
    glScalef(1.2,1.5,0);
    glTranslatef(1.5,3,0);
    tila();
    glPopMatrix();

    glPushMatrix();
    glScalef(2,2,0);
    glTranslatef(-5.5,.5,0);
    tila();
    glPopMatrix();

    glPushMatrix();
    glScalef(2,2,0);
    glTranslatef(-10,.5,0);
    tila();
    glPopMatrix();

    glPushMatrix();
    glScalef(2,2.5,0);
    glTranslatef(-15,-1,0);
    tila();
    glPopMatrix();

    glPushMatrix();
    glScalef(2,1.5,0);
    glTranslatef(-20,3,0);
    tila();
    glPopMatrix();

    glPushMatrix();
    glScalef(1.5,1.5,0);
    glTranslatef(5,3,0);
    tila();
    glPopMatrix();

    glPushMatrix();
    glScalef(2,2,0);
    glTranslatef(7,.5,0);
    tila();
    glPopMatrix();

    glPushMatrix();
    glScalef(3,2,0);
    glTranslatef(7,.5,0);
    tila();
    glPopMatrix();

    ground();

    glPushMatrix();
    glTranslatef(12+angle,4,0);
    cloud();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(40+angle,6,0);
    cloud();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0+angle,9,0);
    cloud();
    glPopMatrix();

    river();
    road();

    glPushMatrix();
    glTranslatef(0,3,0);
    dishouse();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-10,5,0);
    dishouse();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(15,2,0);
    dishouse();
    glPopMatrix();

    roaddesign();

    glPushMatrix();
    glTranslatef(14,2,0);
    glScalef(.8,.8,0);
    tree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-15,3,0);
    glScalef(.8,.8,0);
    tree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-23,5,0);
    glScalef(.6,.6,0);
    tree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-23,3,0);
    glScalef(.6,.6,0);
    tree();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(0+an,-20,0);
    boat();
    glPopMatrix();

    glFlush();
    glutSwapBuffers();


}

void myKeyboardFunc( unsigned char key, int x, int y )
{
    switch ( key )
    {

    case 'S':
        flagScale=true;
        break;
    case 's':
        flagScale=false;
        break;
    case 27:	// Escape key
        exit(1);
    }
    glutPostRedisplay();
}

void animate()
{
    if (flagScale == true)
    {
        angle+= .001;
    }
    if (flagScale == false)
    {
        angle = 0;
    }

    if (flagScale == true)
    {
        an-= .001;
    }
    if (flagScale == false)
    {
        an = 0;
    }


    glutPostRedisplay();
}

int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(windowWidth, windowHeight);
    glutCreateWindow("Rayhan's Home");

    glutKeyboardFunc(myKeyboardFunc);
    glutIdleFunc(animate);
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;

}
