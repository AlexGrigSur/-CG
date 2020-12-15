#include <GL/glut.h>
#include "math.h"

double theta = 0;
double x2, y2, z2;

void myDisplay();

int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GL_DEPTH_BUFFER_BIT);
	glutInitWindowSize(1000, 1000);
	glutInitWindowPosition(450, 5);
	glutCreateWindow("OpenGL");
	glClearColor(0.7, 0.7, 0.7, 0.0);
	glLoadIdentity();
	glOrtho(-500, 500, -500, 500, -500, 500);
	glutDisplayFunc(myDisplay);
	glEnable(GL_DEPTH_TEST);
	glutMainLoop();
	glDisable(GL_DEPTH_TEST);
}

void myDisplay()
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	GLUquadricObj* quadObj;
	quadObj = gluNewQuadric();

	glRotatef(-15, 0, 1, 0);
	glColor3ub(116, 48, 0);

	glPushMatrix();
	glTranslatef(100, 200, 0);
	glutSolidTorus(50, 10, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-100, 200, 0);
	glutSolidTorus(50, 10, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-100, -60, 0);
	glRotatef(-90, 0, 1, 0);
	gluQuadricDrawStyle(quadObj, GLU_FILL);
	gluCylinder(quadObj, 50, 30, 100, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(100, -60, 0);
	glRotatef(90, 0, 1, 0);
	gluQuadricDrawStyle(quadObj, GLU_FILL);
	gluCylinder(quadObj, 50, 30, 100, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-200, -60, 0);
	gluQuadricDrawStyle(quadObj, GLU_FILL);
	glutSolidSphere(30, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(200, -60, 0);
	gluQuadricDrawStyle(quadObj, GLU_FILL);
	glutSolidSphere(30, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(40, -240, 0);
	glRotatef(90, 1, 0, 0);
	gluQuadricDrawStyle(quadObj, GLU_FILL);
	gluCylinder(quadObj, 50, 30, 100, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-40, -240, 0);
	glRotatef(90, 1, 0, 0);
	gluQuadricDrawStyle(quadObj, GLU_FILL);
	gluCylinder(quadObj, 50, 30, 100, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(40, -340, 0);
	gluQuadricDrawStyle(quadObj, GLU_FILL);
	glutSolidSphere(30, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-40, -340, 0);
	gluQuadricDrawStyle(quadObj, GLU_FILL);
	glutSolidSphere(30, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glColor3ub(70, 130, 180);
	glTranslatef(0, -130, 0);
	glRotatef(90, 1, 0, 0);
	gluQuadricDrawStyle(quadObj, GLU_FILL);
	gluCylinder(quadObj, 101, 101, 10, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glColor3f(1, 1, 0);
	glTranslatef(0, -140, 0);
	glRotatef(90, 1, 0, 0);
	gluQuadricDrawStyle(quadObj, GLU_FILL);
	gluCylinder(quadObj, 101, 101, 10, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, -140, 101);
	glColor3ub(255, 205, 0);
	glutSolidTorus(2, 13, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(25, -140, 101);
	glColor3ub(255, 205, 0);
	glutSolidTorus(2, 13, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-25, -140, 101);
	glColor3ub(255, 205, 0);
	glutSolidTorus(2, 13, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(15, -155, 101);
	glColor3ub(255, 205, 0);
	glutSolidTorus(2, 13, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-15, -155, 101);
	glColor3ub(255, 205, 0);
	glutSolidTorus(2, 13, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glColor3f(0, 0, 0);
	glTranslatef(0, -150, 0);
	glRotatef(90, 1, 0, 0);
	gluQuadricDrawStyle(quadObj, GLU_FILL);
	gluCylinder(quadObj, 101, 101, 10, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glColor3ub(0, 128, 0);
	glTranslatef(0, -160, 0);
	glRotatef(90, 1, 0, 0);
	gluQuadricDrawStyle(quadObj, GLU_FILL);
	gluCylinder(quadObj, 101, 101, 10, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glColor3ub(230, 0, 0);
	glTranslatef(0, -170, 0);
	glRotatef(90, 1, 0, 0);
	gluQuadricDrawStyle(quadObj, GLU_FILL);
	gluCylinder(quadObj, 101, 101, 10, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glRotatef(90, 1, 0, 0);
	glColor3ub(170, 102, 43);
	gluQuadricDrawStyle(quadObj, GLU_FILL);
	gluCylinder(quadObj, 100, 100, 200, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 100, 0);
	glColor3ub(170, 102, 43);
	glutSolidSphere(150, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, -200, 0);
	glutSolidSphere(100, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 90, 80);
	glColor3ub(116, 48, 0);
	glutSolidSphere(90, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 140, 0);
	glColor3ub(116, 48, 0);
	glutSolidSphere(60, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 140, 0);
	glColor3ub(116, 48, 0);
	glutSolidSphere(60, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 91, 90);
	glColor3ub(205, 205, 152);
	glutSolidSphere(82, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(0, 120, 170);
	glColor3ub(0, 0, 0);
	glutSolidSphere(15, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(30, 160, 120);
	glColor3ub(255, 255, 255);
	glutSolidSphere(20, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-30, 160, 120);
	glColor3ub(255, 255, 255);
	glutSolidSphere(20, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-30, 160, 127);
	glColor3ub(0, 0, 0);
	glutSolidSphere(15, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(30, 160, 127);
	glColor3ub(0, 0, 0);
	glutSolidSphere(15, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-100, 200, 30);
	glColor3ub(170, 102, 43);
	glutSolidTorus(30, 10, 100, 100);
	glPopMatrix();

	glPushMatrix();
	glTranslatef(100, 200, 30);
	glColor3ub(170, 102, 43);
	glutSolidTorus(30, 10, 100, 100);
	glPopMatrix();

	glFlush();
}
