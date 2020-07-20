#include <iostream>
#include <GL/freeglut.h>

float xrot = 0;
float yrot = 0;
float xdiff = 0;
float ydiff = 0;
bool mousedown = false;

void keyboardEvent(unsigned char key, int x, int y) {
	switch (key) {
		// geser ke kiri
	case 'a':
	case 'A':
		glTranslatef(-1.0, 0.0, 0.0);
		break;

		// geser ke kanan
	case 'd':
	case 'D':
		glTranslatef(1.0, 0.0, 0.0);
		break;

		// geser ke atas
	case 'w':
	case 'W':
		glTranslatef(0.0, 1.0, 0.0);
		break;

		// geser ke bawah
	case 's':
	case 'S':
		glTranslatef(0.0, -1.0, 0.0);
		break;

		// zoom in
	case 'z':
	case 'Z':
		glTranslatef(0.0, 0.0, 5.0);
		break;

		// zoom out
	case 'x':
	case 'X':
		glTranslatef(0.0, 0.0, -5.0);
		break;

		// putar ke kanan
	case 'e':
	case 'E':
		glRotatef(1.0, 0.0, 0.0, -5.0);
		break;

		// putar ke kiri
	case 'q':
	case 'Q':
		glRotatef(1.0, 0.0, 0.0, 5.0);
		break;
	}

	glutPostRedisplay();
}

void mouseButtonEvent(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		mousedown = true;
		xdiff = x - yrot;
		ydiff = -y + xrot;
	}
	else {
		mousedown = false;
	}

	glutPostRedisplay();
}

void mouseMoveEvent(int x, int y) {
	if (mousedown) {
		yrot = x - xdiff;
		xrot = y + ydiff;

		glutPostRedisplay();
	}
}

void reshape(int w, int h) {
	if (h == 0) h = 1;

	GLfloat aspect = (GLfloat)w / (GLfloat)h;
	glViewport(0, 25, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0f, aspect, 0.1f, -1.0f);
}

void hidung() {
	glColor3ub(35, 43, 46);
	
	glBegin(GL_QUADS);
	glVertex3d(0.0, 42.7, 67.2);
	glVertex3d(4.6, 40.6, 64.7);
	glVertex3d(2.6, 37.2, 69.9);
	glVertex3d(0.0, 38.4, 69.9);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(4.6, 40.6, 64.7);
	glVertex3d(6.5, 35.1, 64.6);
	glVertex3d(3.7, 34.4, 69.9);
	glVertex3d(2.6, 37.2, 69.9);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(3.7, 34.4, 69.9);
	glVertex3d(6.5, 35.1, 64.6);
	glVertex3d(4.6, 28.4, 65.1);
	glVertex3d(2.6, 31.7, 69.9);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-4.6, 40.6, 64.7);
	glVertex3d(0.0, 42.7, 67.2);
	glVertex3d(0.0, 38.4, 69.9);
	glVertex3d(-2.6, 37.2, 69.9);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-4.6, 40.6, 64.7);
	glVertex3d(-2.6, 37.2, 69.9);
	glVertex3d(-3.7, 34.4, 69.9);
	glVertex3d(-6.5, 35.1, 64.6);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-6.5, 35.1, 64.6);
	glVertex3d(-3.7, 34.4, 69.9);
	glVertex3d(-2.6, 31.7, 69.9);
	glVertex3d(-4.6, 28.4, 65.1);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(0.0, 38.4, 69.9);
	glVertex3d(2.6, 37.2, 69.9);
	glVertex3d(3.7, 34.4, 69.9);
	glVertex3d(2.6, 31.7, 69.9);
	glVertex3d(0.0, 30.5, 69.9);
	glVertex3d(-2.6, 31.7, 69.9);
	glVertex3d(-3.7, 34.4, 69.9);
	glVertex3d(-2.6, 37.2, 69.9);
	glEnd();

	glColor3ub(204, 206, 205);

	glBegin(GL_QUADS);
	glVertex3d(-2.6, 31.7, 69.9);
	glVertex3d(0.0, 30.5, 69.9);
	glVertex3d(0.0, 25.6, 65.0);
	glVertex3d(-4.6, 28.4, 65.1);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(0.0, 30.5, 69.9);
	glVertex3d(2.6, 31.7, 69.9);
	glVertex3d(4.6, 28.4, 65.1);
	glVertex3d(0.0, 25.6, 65.0);
	glEnd();
}

void mata() {
	glColor3ub(58, 41, 34);

	glBegin(GL_QUADS);
	glVertex3d(10.8, 44.3, 59.9);
	glVertex3d(12.6, 44.4, 56.8);
	glVertex3d(13.4, 40.9, 57.2);
	glVertex3d(11.6, 40.9, 60.3);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(12.6, 44.4, 56.8);
	glVertex3d(10.8, 44.3, 59.9);
	glVertex3d(8.6, 43.7, 58.6);
	glVertex3d(10.4, 43.7, 55.5);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(11.6, 40.9, 60.3);
	glVertex3d(13.4, 40.9, 57.2);
	glVertex3d(11.2, 40.3, 55.9);
	glVertex3d(9.4, 40.2, 59.0);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(13.4, 40.9, 57.2);
	glVertex3d(12.6, 44.4, 56.8);
	glVertex3d(10.4, 43.7, 55.5);
	glVertex3d(11.2, 40.3, 55.9);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(10.8, 44.3, 59.9);
	glVertex3d(11.6, 40.9, 60.3);
	glVertex3d(9.4, 40.2, 59.0);
	glVertex3d(8.6, 43.7, 58.6);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-12.6, 44.4, 56.8);
	glVertex3d(-10.8, 44.3, 59.9);
	glVertex3d(-11.6, 40.9, 60.3);
	glVertex3d(-13.4, 40.9, 57.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-13.4, 40.9, 57.2);
	glVertex3d(-11.6, 40.9, 60.3);
	glVertex3d(-9.4, 40.2, 59.0);
	glVertex3d(-11.2, 40.3, 55.9);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-10.8, 44.3, 59.9);
	glVertex3d(-12.6, 44.4, 56.8);
	glVertex3d(-10.4, 43.7, 55.5);
	glVertex3d(-8.6, 43.7, 58.6);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-12.6, 44.4, 56.8);
	glVertex3d(-13.4, 40.9, 57.2);
	glVertex3d(-11.2, 40.3, 55.9);
	glVertex3d(-10.4, 43.7, 55.5);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-11.6, 40.9, 60.3);
	glVertex3d(-10.8, 44.3, 59.9);
	glVertex3d(-8.6, 43.7, 58.6);
	glVertex3d(-9.4, 40.2, 59.0);
	glEnd();
}

void telinga() {
	glColor3ub(204, 206, 205);

	glBegin(GL_POLYGON);
	glVertex3d(-19.5, 70.7, 37.1);
	glVertex3d(-12.8, 71.0, 43.9);
	glVertex3d(-6.7, 64.6, 50.2);
	glVertex3d(-7.7, 57.0, 49.3);
	glVertex3d(-7.6, 47.7, 42.5);
	glVertex3d(-15.5, 49.5, 41.4);
	glVertex3d(-20.8, 53.0, 36.2);
	glVertex3d(-22.1, 62.7, 34.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(12.8, 71.0, 43.9);
	glVertex3d(19.5, 70.7, 37.1);
	glVertex3d(22.1, 62.7, 34.5);
	glVertex3d(20.8, 53.0, 36.2);
	glVertex3d(15.5, 49.5, 41.4);
	glVertex3d(9.9, 47.7, 47.0);
	glVertex3d(7.7, 57.0, 49.3);
	glVertex3d(6.7, 64.6, 50.2);
	glEnd();
}

void kepala() {
	hidung();
	mata();
	telinga();

	glColor3ub(106, 106, 104);

	glBegin(GL_QUADS);
	glVertex3d(0.0, 59.9, 30.8);
	glVertex3d(11.9, 53.5, 30.8);
	glVertex3d(12.3, 54.6, 40.4);
	glVertex3d(0.0, 60.6, 40.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(11.9, 53.5, 30.8);
	glVertex3d(16.8, 38.0, 30.8);
	glVertex3d(17.5, 39.9, 40.4);
	glVertex3d(12.3, 54.6, 40.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(16.8, 38.0, 30.8);
	glVertex3d(11.9, 22.5, 30.8);
	glVertex3d(12.3, 25.3, 40.4);
	glVertex3d(17.5, 39.9, 40.4);
	glEnd();

	glColor3ub(204, 206, 205);

	glBegin(GL_QUADS);
	glVertex3d(11.9, 22.5, 30.8);
	glVertex3d(0.0, 16.1, 30.8);
	glVertex3d(0.0, 19.2, 40.4);
	glVertex3d(12.3, 25.3, 40.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(0.0, 16.1, 30.8);
	glVertex3d(-11.9, 22.5, 30.8);
	glVertex3d(-12.3, 25.3, 40.4);
	glVertex3d(0.0, 19.2, 40.4);
	glEnd();

	glColor3ub(106, 106, 104);

	glBegin(GL_QUADS);
	glVertex3d(-11.9, 22.5, 30.8);
	glVertex3d(-16.8, 38.0, 30.8);
	glVertex3d(-17.5, 39.9, 40.4);
	glVertex3d(-12.3, 25.3, 40.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-16.8, 38.0, 30.8);
	glVertex3d(-11.9, 53.5, 30.8);
	glVertex3d(-12.3, 54.6, 40.4);
	glVertex3d(-17.5, 39.9, 40.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-11.9, 53.5, 30.8);
	glVertex3d(0.0, 59.9, 30.8);
	glVertex3d(0.0, 60.6, 40.4);
	glVertex3d(-12.3, 54.6, 40.4);
	glEnd();

	glColor3ub(106, 106, 104);

	glBegin(GL_QUADS);
	glVertex3d(0.0, 60.6, 40.4);
	glVertex3d(12.3, 54.6, 40.4);
	glVertex3d(11.7, 54.0, 50.2);
	glVertex3d(0.0, 59.4, 50.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(12.3, 54.6, 40.4);
	glVertex3d(17.5, 39.9, 40.4);
	glVertex3d(16.5, 40.7, 50.2);
	glVertex3d(11.7, 54.0, 50.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(17.5, 39.9, 40.4);
	glVertex3d(12.3, 25.3, 40.4);
	glVertex3d(11.7, 27.5, 50.2);
	glVertex3d(16.5, 40.7, 50.2);
	glEnd();

	glColor3ub(204, 206, 205);

	glBegin(GL_QUADS);
	glVertex3d(12.3, 25.3, 40.4);
	glVertex3d(0.0, 19.2, 40.4);
	glVertex3d(0.0, 22.0, 50.2);
	glVertex3d(11.7, 27.5, 50.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(0.0, 19.2, 40.4);
	glVertex3d(-12.3, 25.3, 40.4);
	glVertex3d(-11.7, 27.5, 50.2);
	glVertex3d(0.0, 22.0, 50.2);
	glEnd();

	glColor3ub(106, 106, 104);

	glBegin(GL_QUADS);
	glVertex3d(-12.3, 25.3, 40.4);
	glVertex3d(-17.5, 39.9, 40.4);
	glVertex3d(-16.5, 40.7, 50.2);
	glVertex3d(-11.7, 27.5, 50.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-17.5, 39.9, 40.4);
	glVertex3d(-12.3, 54.6, 40.4);
	glVertex3d(-11.7, 54.0, 50.2);
	glVertex3d(-16.5, 40.7, 50.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-12.3, 54.6, 40.4);
	glVertex3d(0.0, 60.6, 40.4);
	glVertex3d(0.0, 59.4, 50.2);
	glVertex3d(-11.7, 54.0, 50.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(0.0, 59.4, 50.2);
	glVertex3d(11.7, 54.0, 50.2);
	glVertex3d(9.0, 49.0, 59.4);
	glVertex3d(0.0, 53.4, 59.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(11.7, 54.0, 50.2);
	glVertex3d(16.5, 40.7, 50.2);
	glVertex3d(12.8, 38.6, 59.4);
	glVertex3d(9.0, 49.0, 59.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(16.5, 40.7, 50.2);
	glVertex3d(11.7, 27.5, 50.2);
	glVertex3d(9.0, 28.1, 59.4);
	glVertex3d(12.8, 38.6, 59.4);
	glEnd();

	glColor3ub(204, 206, 205);

	glBegin(GL_QUADS);
	glVertex3d(11.7, 27.5, 50.2);
	glVertex3d(0.0, 22.0, 50.2);
	glVertex3d(0.0, 23.7, 59.4);
	glVertex3d(9.0, 28.1, 59.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(0.0, 22.0, 50.2);
	glVertex3d(-11.7, 27.5, 50.2);
	glVertex3d(-9.0, 28.1, 59.4);
	glVertex3d(0.0, 23.7, 59.4);
	glEnd();

	glColor3ub(106, 106, 104);

	glBegin(GL_QUADS);
	glVertex3d(-11.7, 27.5, 50.2);
	glVertex3d(-16.5, 40.7, 50.2);
	glVertex3d(-12.8, 38.6, 59.4);
	glVertex3d(-9.0, 28.1, 59.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-16.5, 40.7, 50.2);
	glVertex3d(-11.7, 54.0, 50.2);
	glVertex3d(-9.0, 49.0, 59.4);
	glVertex3d(-12.8, 38.6, 59.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-11.7, 54.0, 50.2);
	glVertex3d(0.0, 59.4, 50.2);
	glVertex3d(0.0, 53.4, 59.4);
	glVertex3d(-9.0, 49.0, 59.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(0.0, 53.4, 59.4);
	glVertex3d(9.0, 49.0, 59.4);
	glVertex3d(4.6, 40.6, 64.7);
	glVertex3d(0.0, 42.7, 67.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(9.0, 49.0, 59.4);
	glVertex3d(12.8, 38.6, 59.4);
	glVertex3d(6.5, 35.1, 64.6);
	glVertex3d(4.6, 40.6, 64.7);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(12.8, 38.6, 59.4);
	glVertex3d(9.0, 28.1, 59.4);
	glVertex3d(4.6, 28.4, 65.1);
	glVertex3d(6.5, 35.1, 64.6);
	glEnd();

	glColor3ub(204, 206, 205);

	glBegin(GL_QUADS);
	glVertex3d(9.0, 28.1, 59.4);
	glVertex3d(0.0, 23.7, 59.4);
	glVertex3d(0.0, 25.6, 65.0);
	glVertex3d(4.6, 28.4, 65.1);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(0.0, 23.7, 59.4);
	glVertex3d(-9.0, 28.1, 59.4);
	glVertex3d(-4.6, 28.4, 65.1);
	glVertex3d(0.0, 25.6, 65.0);
	glEnd();

	glColor3ub(106, 106, 104);

	glBegin(GL_QUADS);
	glVertex3d(-9.0, 28.1, 59.4);
	glVertex3d(-12.8, 38.6, 59.4);
	glVertex3d(-6.5, 35.1, 64.6);
	glVertex3d(-4.6, 28.4, 65.1);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-12.8, 38.6, 59.4);
	glVertex3d(-9.0, 49.0, 59.4);
	glVertex3d(-4.6, 40.6, 64.7);
	glVertex3d(-6.5, 35.1, 64.6);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-9.0, 49.0, 59.4);
	glVertex3d(0.0, 53.4, 59.4);
	glVertex3d(0.0, 42.7, 67.2);
	glVertex3d(-4.6, 40.6, 64.7);
	glEnd();
}

void leher() {
	glColor3ub(106, 106, 104);

	glBegin(GL_QUADS);
	glVertex3d(0.0, 59.1, 21.8);
	glVertex3d(15.9, 52.1, 21.8);
	glVertex3d(11.9, 53.5, 30.8);
	glVertex3d(0.0, 59.9, 30.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(15.9, 52.1, 21.8);
	glVertex3d(22.4, 35.1, 21.8);
	glVertex3d(16.8, 38.0, 30.8);
	glVertex3d(11.9, 53.5, 30.8);
	glEnd();

	glColor3ub(204, 206, 205);

	glBegin(GL_QUADS);
	glVertex3d(22.4, 35.1, 21.8);
	glVertex3d(12.7, 16.8, 21.8);
	glVertex3d(11.9, 22.5, 30.8);
	glVertex3d(16.8, 38.0, 30.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(12.7, 16.8, 21.8);
	glVertex3d(0.0, 11.2, 21.8);
	glVertex3d(0.0, 16.1, 30.8);
	glVertex3d(11.9, 22.5, 30.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(0.0, 11.2, 21.8);
	glVertex3d(-12.7, 16.8, 21.8);
	glVertex3d(-11.9, 22.5, 30.8);
	glVertex3d(0.0, 16.1, 30.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-12.7, 16.8, 21.8);
	glVertex3d(-22.4, 35.1, 21.8);
	glVertex3d(-16.8, 38.0, 30.8);
	glVertex3d(-11.9, 22.5, 30.8);
	glEnd();

	glColor3ub(106, 106, 104);

	glBegin(GL_QUADS);
	glVertex3d(-22.4, 35.1, 21.8);
	glVertex3d(-15.9, 52.1, 21.8);
	glVertex3d(-11.9, 53.5, 30.8);
	glVertex3d(-16.8, 38.0, 30.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-15.9, 52.1, 21.8);
	glVertex3d(0.0, 59.1, 21.8);
	glVertex3d(0.0, 59.9, 30.8);
	glVertex3d(-11.9, 53.5, 30.8);
	glEnd();
}

void kakiDepanKiri() {
	glColor3ub(106, 106, 104);

	glBegin(GL_QUADS);
	glVertex3d(22.4, 35.4, -1.8);
	glVertex3d(13.5, 15.6, -5.8);
	glVertex3d(10.9, 11.10, -4.8);
	glVertex3d(17.4, 11.0, -4.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(10.9, 11.10, -4.8);
	glVertex3d(17.4, 11.0, -4.8);
	glVertex3d(12.5, -11.1, 8.9);
	glVertex3d(9.3, -11.1, 8.9);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(12.5, -11.1, 8.9);
	glVertex3d(9.3, -11.1, 8.9);
	glVertex3d(7.1, -21.8, 14.8);
	glVertex3d(9.5, -21.8, 14.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(7.1, -21.8, 14.8);
	glVertex3d(9.5, -21.8, 14.8);
	glVertex3d(10.4, -26.6, 17.5);
	glVertex3d(6.4, -26.6, 17.5);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(22.4, 35.1, 21.8);
	glVertex3d(22.4, 35.0, 6.7);
	glVertex3d(19.5, 11.0, 6.3);
	glVertex3d(17.1, 11.0, 22.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(19.5, 11.0, 6.3);
	glVertex3d(17.1, 11.0, 22.2);
	glVertex3d(12.3, -11.1, 22.8);
	glVertex3d(13.5, -11.1, 15.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(12.3, -11.1, 22.8);
	glVertex3d(13.5, -11.1, 15.2);
	glVertex3d(10.2, -21.8, 19.6);
	glVertex3d(9.4, -21.8, 25.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(22.4, 35.0, 6.7);
	glVertex3d(22.4, 35.4, -1.8);
	glVertex3d(17.4, 11.0, -4.8);
	glVertex3d(19.5, 11.0, 6.3);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(17.4, 11.0, -4.8);
	glVertex3d(19.5, 11.0, 6.3);
	glVertex3d(13.5, -11.1, 15.2);
	glVertex3d(12.5, -11.1, 8.9);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(13.5, -11.1, 15.2);
	glVertex3d(12.5, -11.1, 8.9);
	glVertex3d(9.5, -21.8, 14.8);
	glVertex3d(10.2, -21.8, 19.6);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(9.5, -21.8, 14.8);
	glVertex3d(10.2, -21.8, 19.6);
	glVertex3d(11.6, -26.6, 22.2);
	glVertex3d(10.4, -26.6, 17.5);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(13.0, -23.2, 33.9);
	glVertex3d(10.2, -21.8, 19.6);
	glVertex3d(11.6, -26.6, 22.2);
	glVertex3d(13.0, -26.6, 35.5);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(22.4, 35.1, 21.8);
	glVertex3d(17.1, 11.0, 22.2);
	glVertex3d(10.6, 11.0, 22.2);
	glVertex3d(12.7, 16.8, 21.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(17.1, 11.0, 22.2);
	glVertex3d(10.6, 11.0, 22.2);
	glVertex3d(9.2, -11.1, 22.8);
	glVertex3d(12.3, -11.1, 22.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(9.2, -11.1, 22.8);
	glVertex3d(12.3, -11.1, 22.8);
	glVertex3d(9.4, -21.8, 25.4);
	glVertex3d(7.0, -21.8, 25.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(5.6, 13.6, 6.7);
	glVertex3d(12.7, 16.8, 21.8);
	glVertex3d(10.6, 11.0, 22.2);
	glVertex3d(7.8, 11.0, 6.3);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(10.6, 11.0, 22.2);
	glVertex3d(7.8, 11.0, 6.3);
	glVertex3d(7.9, -11.1, 15.2);
	glVertex3d(9.2, -11.1, 22.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(7.9, -11.1, 15.2);
	glVertex3d(9.2, -11.1, 22.8);
	glVertex3d(7.0, -21.8, 25.4);
	glVertex3d(6.0, -21.8, 19.6);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(13.5, 15.6, -5.8);
	glVertex3d(5.6, 13.6, 6.7);
	glVertex3d(7.8, 11.0, 6.3);
	glVertex3d(10.9, 11.0, -4.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(7.8, 11.0, 6.3);
	glVertex3d(10.9, 11.0, -4.8);
	glVertex3d(9.3, -11.1, 8.9);
	glVertex3d(7.9, -11.1, 15.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(9.3, -11.1, 8.9);
	glVertex3d(7.9, -11.1, 15.2);
	glVertex3d(6.0, -21.8, 19.6);
	glVertex3d(7.1, -21.8, 14.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(6.0, -21.8, 19.6);
	glVertex3d(7.1, -21.8, 14.8);
	glVertex3d(6.4, -26.6, 17.5);
	glVertex3d(4.6, -26.6, 22.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(6.0, -21.8, 19.6);
	glVertex3d(4.6, -26.6, 22.2);
	glVertex3d(3.2, -26.6, 35.5);
	glVertex3d(3.2, -23.2, 33.9);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(6.0, -21.8, 19.6);
	glVertex3d(7.0, -21.8, 25.4);
	glVertex3d(5.5, -23.2, 39.6);
	glVertex3d(3.2, -23.2, 33.9);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(7.0, -21.8, 25.4);
	glVertex3d(5.5, -23.2, 39.6);
	glVertex3d(11.0, -23.2, 39.6);
	glVertex3d(9.4, -21.8, 25.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(11.0, -23.2, 39.6);
	glVertex3d(9.4, -21.8, 25.4);
	glVertex3d(10.2, -21.8, 19.6);
	glVertex3d(13.0, -23.2, 33.9);
	glEnd();

	glColor3ub(35, 43, 46);

	glBegin(GL_QUADS);
	glVertex3d(3.2, -23.2, 33.9);
	glVertex3d(5.5, -23.2, 39.6);
	glVertex3d(5.5, -26.6, 41.3);
	glVertex3d(3.2, -26.6, 35.5);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(5.5, -23.2, 39.6);
	glVertex3d(5.5, -26.6, 41.3);
	glVertex3d(11.0, -26.6, 41.3);
	glVertex3d(11.0, -23.2, 39.6);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(11.0, -26.6, 41.3);
	glVertex3d(11.0, -23.2, 39.6);
	glVertex3d(13.0, -23.2, 33.9);
	glVertex3d(13.0, -26.6, 35.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(5.5, -26.6, 41.3);
	glVertex3d(11.0, -26.6, 41.3);
	glVertex3d(13.0, -26.6, 35.5);
	glVertex3d(11.6, -26.6, 22.2);
	glVertex3d(10.4, -26.6, 17.5);
	glVertex3d(6.4, -26.6, 17.5);
	glVertex3d(4.6, -26.6, 22.2);
	glVertex3d(3.2, -26.6, 35.5);
	glVertex3d(5.5, -26.6, 41.3);
	glEnd();
}

void kakiDepanKanan() {
	glColor3ub(106, 106, 104);

	glBegin(GL_QUADS);
	glVertex3d(-22.4, 35.1, 21.8);
	glVertex3d(-12.7, 16.8, 21.8);
	glVertex3d(-10.6, 11.0, 22.2);
	glVertex3d(-17.1, 11.0, 22.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-10.6, 11.0, 22.2);
	glVertex3d(-17.1, 11.0, 22.2);
	glVertex3d(-12.3, -11.1, 22.8);
	glVertex3d(-9.2, -11.1, 22.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-12.3, -11.1, 22.8);
	glVertex3d(-9.2, -11.1, 22.8);
	glVertex3d(-7.0, -21.8, 25.4);
	glVertex3d(-9.4, -21.8, 25.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-22.4, 35.0, 6.7);
	glVertex3d(-22.4, 35.1, 21.8);
	glVertex3d(-17.1, 11.0, 22.2);
	glVertex3d(-19.5, 11.0, 6.3);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-17.1, 11.0, 22.2);
	glVertex3d(-19.5, 11.0, 6.3);
	glVertex3d(-13.5, -11.1, 15.2);
	glVertex3d(-12.3, -11.1, 22.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-13.5, -11.1, 15.2);
	glVertex3d(-12.3, -11.1, 22.8);
	glVertex3d(-9.4, -21.8, 25.4);
	glVertex3d(-10.2, -21.8, 19.6);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-10.2, -21.8, 19.6);
	glVertex3d(-13.0, -23.2, 33.9);
	glVertex3d(-13.0, -26.6, 35.5);
	glVertex3d(-11.6, -26.6, 22.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-22.4, 35.4, -1.8);
	glVertex3d(-22.4, 35.0, 6.7);
	glVertex3d(-19.5, 11.0, 6.3);
	glVertex3d(-17.4, 11.0, -4.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-19.5, 11.0, 6.3);
	glVertex3d(-17.4, 11.0, -4.8);
	glVertex3d(-12.5, -11.1, 8.9);
	glVertex3d(-13.5, -11.1, 15.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-12.5, -11.1, 8.9);
	glVertex3d(-13.5, -11.1, 15.2);
	glVertex3d(-10.2, -21.8, 19.6);
	glVertex3d(-9.5, -21.8, 14.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-10.2, -21.8, 19.6);
	glVertex3d(-9.5, -21.8, 14.8);
	glVertex3d(-10.4, -26.6, 17.5);
	glVertex3d(-11.6, -26.6, 22.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-22.4, 35.4, -1.8);
	glVertex3d(-13.5, 15.6, -5.8);
	glVertex3d(-10.9, 11.0, -4.8);
	glVertex3d(-17.4, 11.0, -4.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-10.9, 11.0, -4.8);
	glVertex3d(-17.4, 11.0, -4.8);
	glVertex3d(-12.5, -11.1, 8.9);
	glVertex3d(-9.3, -11.1, 8.9);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-12.5, -11.1, 8.9);
	glVertex3d(-9.3, -11.1, 8.9);
	glVertex3d(-7.1, -21.8, 14.8);
	glVertex3d(-9.5, -21.8, 14.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-7.1, -21.8, 14.8);
	glVertex3d(-9.5, -21.8, 14.8);
	glVertex3d(-10.4, -26.6, 17.5);
	glVertex3d(-6.4, -26.6, 17.5);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-5.6, 13.6, 6.7);
	glVertex3d(-13.5, 15.6, -5.8);
	glVertex3d(-10.9, 11.0, -4.8);
	glVertex3d(-7.8, 11.0, 6.3);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-10.9, 11.0, -4.8);
	glVertex3d(-7.8, 11.0, 6.3);
	glVertex3d(-7.9, -11.1, 15.2);
	glVertex3d(-9.3, -11.1, 8.9);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-7.9, -11.1, 15.2);
	glVertex3d(-9.3, -11.1, 8.9);
	glVertex3d(-7.1, -21.8, 14.8);
	glVertex3d(-6.0, -21.8, 19.6);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-7.1, -21.8, 14.8);
	glVertex3d(-6.0, -21.8, 19.6);
	glVertex3d(-4.6, -26.6, 22.2);
	glVertex3d(-6.4, -26.6, 17.5);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-12.7, 16.8, 21.8);
	glVertex3d(-5.6, 13.6, 6.7);
	glVertex3d(-7.8, 11.0, 6.3);
	glVertex3d(-10.6, 11.0, 22.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-7.8, 11.0, 6.3);
	glVertex3d(-10.6, 11.0, 22.2);
	glVertex3d(-9.2, -11.1, 22.8);
	glVertex3d(-7.9, -11.1, 15.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-9.2, -11.1, 22.8);
	glVertex3d(-7.9, -11.1, 15.2);
	glVertex3d(-6.0, -21.8, 19.6);
	glVertex3d(-7.0, -21.8, 25.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-6.0, -21.8, 19.6);
	glVertex3d(-4.6, -26.6, 22.2);
	glVertex3d(-3.2, -26.6, 35.5);
	glVertex3d(-3.2, -23.2, 33.9);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-10.2, -21.8, 19.6);
	glVertex3d(-9.4, -21.8, 25.4);
	glVertex3d(-11.0, -23.2, 39.6);
	glVertex3d(-13.0, -23.2, 33.9);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-9.4, -21.8, 25.4);
	glVertex3d(-11.0, -23.2, 39.6);
	glVertex3d(-5.5, -23.2, 39.6);
	glVertex3d(-7.0, -21.8, 25.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-5.5, -23.2, 39.6);
	glVertex3d(-7.0, -21.8, 25.4);
	glVertex3d(-6.0, -21.8, 19.6);
	glVertex3d(-3.2, -23.2, 33.9);
	glEnd();

	glColor3ub(35, 43, 46);

	glBegin(GL_QUADS);
	glVertex3d(-13.0, -23.2, 33.9);
	glVertex3d(-11.0, -23.2, 39.6);
	glVertex3d(-11.0, -26.6, 41.3);
	glVertex3d(-13.0, -26.6, 35.5);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-11.0, -23.2, 39.6);
	glVertex3d(-11.0, -26.6, 41.3);
	glVertex3d(-5.5, -26.6, 41.3);
	glVertex3d(-5.5, -23.2, 39.6);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-5.5, -26.6, 41.3);
	glVertex3d(-5.5, -23.2, 39.6);
	glVertex3d(-3.2, -23.2, 33.9);
	glVertex3d(-3.2, -26.6, 35.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(-11.0, -26.6, 41.3);
	glVertex3d(-5.5, -26.6, 41.3);
	glVertex3d(-3.2, -26.6, 35.5);
	glVertex3d(-4.6, -26.6, 22.2);
	glVertex3d(-6.4, -26.6, 17.5);
	glVertex3d(-10.4, -26.6, 17.5);
	glVertex3d(-11.6, -26.6, 22.2);
	glVertex3d(-13.0, -26.6, 35.5);
	glEnd();
}

void kakiDepan() {
	kakiDepanKiri();
	kakiDepanKanan();
}

void kakiBelakangKiri() {
	glColor3ub(106, 106, 104);

	glBegin(GL_QUADS);
	glVertex3d(10.6, 33.5, -68.7);
	glVertex3d(18.8, 3.4, -60.1);
	glVertex3d(21.9, 9.1, -45.1);
	glVertex3d(19.9, 35.4, -49.7);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(18.8, 3.4, -60.1);
	glVertex3d(21.9, 9.1, -45.1);
	glVertex3d(18.3, -11.1, -48.4);
	glVertex3d(15.7, -11.1, -57.6);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(18.3, -11.1, -48.4);
	glVertex3d(15.7, -11.1, -57.6);
	glVertex3d(14.5, -20.1, -57.9);
	glVertex3d(16.9, -20.1, -51.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(14.5, -20.1, -57.9);
	glVertex3d(16.9, -20.1, -51.2);
	glVertex3d(16.9, -26.6, -49.7);
	glVertex3d(14.5, -26.6, -56.3);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(16.9, -20.1, -51.2);
	glVertex3d(16.9, -26.6, -49.7);
	glVertex3d(18.1, -26.6, -36.0);
	glVertex3d(18.1, -23.0, -37.5);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(19.9, 35.4, -49.7);
	glVertex3d(21.9, 9.1, -45.1);
	glVertex3d(20.4, 7.8, -26.9);
	glVertex3d(24.0, 32.0, -31.9);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(21.9, 9.1, -45.1);
	glVertex3d(20.4, 7.8, -26.9);
	glVertex3d(17.1, -11.1, -39.4);
	glVertex3d(18.3, -11.1, -48.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(17.1, -11.1, -39.4);
	glVertex3d(18.3, -11.1, -48.4);
	glVertex3d(16.9, -20.1, -51.2);
	glVertex3d(15.8, -20.1, -44.7);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(24.0, 32.0, -31.9);
	glVertex3d(20.4, 7.8, -26.9);
	glVertex3d(14.0, 7.8, -26.9);
	glVertex3d(13.0, 12.5, -27.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(20.4, 7.8, -26.9);
	glVertex3d(14.0, 7.8, -26.9);
	glVertex3d(11.6, -11.1, -39.4);
	glVertex3d(17.1, -11.1, -39.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(11.6, -11.1, -39.4);
	glVertex3d(17.1, -11.1, -39.4);
	glVertex3d(15.8, -20.1, -44.7);
	glVertex3d(10.5, -20.1, -44.7);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(10.4, 9.1, -45.1);
	glVertex3d(14.0, 7.8, -26.9);
	glVertex3d(11.6, -11.1, -39.4);
	glVertex3d(8.6, -11.1, -48.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(11.6, -11.1, -39.4);
	glVertex3d(8.6, -11.1, -48.4);
	glVertex3d(7.6, -20.1, -51.2);
	glVertex3d(10.5, -20.1, -44.7);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(7.6, -20.1, -51.2);
	glVertex3d(6.5, -23.0, -37.5);
	glVertex3d(6.5, -26.6, -36.0);
	glVertex3d(7.6, -26.6, -49.7);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(12.6, 3.4, -60.1);
	glVertex3d(10.4, 9.1, -45.1);
	glVertex3d(8.6, -11.1, -48.4);
	glVertex3d(10.5, -11.1, -57.6);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(8.6, -11.1, -48.4);
	glVertex3d(10.5, -11.1, -57.6);
	glVertex3d(9.4, -20.1, -57.9);
	glVertex3d(7.6, -20.1, -51.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(9.4, -20.1, -57.9);
	glVertex3d(7.6, -20.1, -51.2);
	glVertex3d(7.6, -26.6, -49.7);
	glVertex3d(9.4, -26.6, -56.3);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(18.8, 3.4, -60.1);
	glVertex3d(12.6, 3.4, -60.1);
	glVertex3d(10.5, -11.1, -57.6);
	glVertex3d(15.7, -11.1, -57.6);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(10.5, -11.1, -57.6);
	glVertex3d(15.7, -11.1, -57.6);
	glVertex3d(14.5, -20.1, -57.9);
	glVertex3d(9.4, -20.1, -57.9);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(14.5, -20.1, -57.9);
	glVertex3d(9.4, -20.1, -57.9);
	glVertex3d(9.4, -26.6, -56.3);
	glVertex3d(14.5, -26.6, -56.3);
	glEnd();

	glColor3ub(204, 206, 205);

	glBegin(GL_QUADS);
	glVertex3d(3.7, 13.6, -49.2);
	glVertex3d(13.0, 12.5, -27.8);
	glVertex3d(14.0, 7.8, -26.9);
	glVertex3d(10.4, 9.1, -45.1);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(3.7, 13.6, -49.2);
	glVertex3d(10.4, 9.1, -45.1);
	glVertex3d(12.6, 3.4, -60.1);
	glVertex3d(2.3, 25.5, -70.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(12.6, 3.4, -60.1);
	glVertex3d(2.3, 25.5, -70.8);
	glVertex3d(10.6, 33.5, -68.7);
	glVertex3d(18.8, 3.4, -60.1);
	glEnd();

	glColor3ub(106, 106, 104);

	glBegin(GL_QUADS);
	glVertex3d(7.6, -20.1, -51.2);
	glVertex3d(10.5, -20.1, -44.7);
	glVertex3d(10.1, -23.0, -31.0);
	glVertex3d(6.5, -23.0, -37.5);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(10.5, -20.1, -44.7);
	glVertex3d(10.1, -23.0, -31.0);
	glVertex3d(16.6, -23.0, -31.0);
	glVertex3d(15.8, -20.1, -44.7);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(16.6, -23.0, -31.0);
	glVertex3d(15.8, -20.1, -44.7);
	glVertex3d(16.9, -20.1, -51.2);
	glVertex3d(18.1, -23.0, -37.5);
	glEnd();

	glColor3ub(35, 43, 46);

	glBegin(GL_QUADS);
	glVertex3d(6.5, -23.0, -37.5);
	glVertex3d(10.1, -23.0, -31.0);
	glVertex3d(10.1, -26.6, -29.4);
	glVertex3d(6.5, -26.6, -36.0);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(10.1, -23.0, -31.0);
	glVertex3d(10.1, -26.6, -29.4);
	glVertex3d(16.6, -26.6, -29.4);
	glVertex3d(16.6, -23.0, -31.0);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(16.6, -26.6, -29.4);
	glVertex3d(16.6, -23.0, -31.0);
	glVertex3d(18.1, -23.0, -37.5);
	glVertex3d(18.1, -26.6, -36.0);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(10.1, -26.6, -29.4);
	glVertex3d(16.6, -26.6, -29.4);
	glVertex3d(18.1, -26.6, -36.0);
	glVertex3d(16.9, -26.6, -49.7);
	glVertex3d(14.5, -26.6, -56.3);
	glVertex3d(9.4, -26.6, -56.3);
	glVertex3d(7.6, -26.6, -49.7);
	glVertex3d(6.5, -26.6, -36.0);
	glEnd();
}

void kakiBelakangKanan() {
	glColor3ub(106, 106, 104);

	glBegin(GL_QUADS);
	glVertex3d(-19.9, 35.4, -49.7);
	glVertex3d(-24.0, 32.0, -31.9);
	glVertex3d(-20.4, 7.8, -26.9);
	glVertex3d(-21.9, 9.1, -45.1);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-20.4, 7.8, -26.9);
	glVertex3d(-21.9, 9.1, -45.1);
	glVertex3d(-18.3, -11.1, -48.4);
	glVertex3d(-17.1, -11.1, -39.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-18.3, -11.1, -48.4);
	glVertex3d(-17.1, -11.1, -39.4);
	glVertex3d(-15.8, -20.1, -44.7);
	glVertex3d(-16.9, -20.1, -51.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-16.9, -20.1, -51.2);
	glVertex3d(-16.9, -26.6, -49.7);
	glVertex3d(-18.1, -26.6, -36.0);
	glVertex3d(-18.1, -23.0, -37.5);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-10.6, 33.5, -68.7);
	glVertex3d(-19.9, 35.4, -49.7);
	glVertex3d(-21.9, 9.1, -45.1);
	glVertex3d(-18.8, 3.4, -60.1);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-21.9, 9.1, -45.1);
	glVertex3d(-18.8, 3.4, -60.1);
	glVertex3d(-15.7, -11.1, -57.6);
	glVertex3d(-18.3, -11.1, -48.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-15.7, -11.1, -57.6);
	glVertex3d(-18.3, -11.1, -48.4);
	glVertex3d(-16.9, -20.1, -51.2);
	glVertex3d(-14.5, -20.1, -57.9);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-16.9, -20.1, -51.2);
	glVertex3d(-14.5, -20.1, -57.9);
	glVertex3d(-14.5, -26.6, -56.3);
	glVertex3d(-16.9, -26.6, -49.7);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-12.6, 3.4, -60.1);
	glVertex3d(-18.8, 3.4, -60.1);
	glVertex3d(-15.7, -11.1, -57.6);
	glVertex3d(-10.5, -11.1, -57.6);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-15.7, -11.1, -57.6);
	glVertex3d(-10.5, -11.1, -57.6);
	glVertex3d(-9.4, -20.1, -57.9);
	glVertex3d(-14.5, -20.1, -57.9);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-9.4, -20.1, -57.9);
	glVertex3d(-14.5, -20.1, -57.9);
	glVertex3d(-14.5, -26.6, -56.3);
	glVertex3d(-9.4, -26.6, -56.3);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-10.4, 9.1, -45.1);
	glVertex3d(-12.6, 3.4, -60.1);
	glVertex3d(-10.5, -11.1, -57.6);
	glVertex3d(-8.6, -11.1, -48.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-10.5, -11.1, -57.6);
	glVertex3d(-8.6, -11.1, -48.4);
	glVertex3d(-7.6, -20.1, -51.2);
	glVertex3d(-9.4, -20.1, -57.9);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-7.6, -20.1, -51.2);
	glVertex3d(-9.4, -20.1, -57.9);
	glVertex3d(-9.4, -26.6, -56.3);
	glVertex3d(-7.6, -26.6, -49.7);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-14.0, 7.8, -26.9);
	glVertex3d(-10.4, 9.1, -45.1);
	glVertex3d(-8.6, -11.1, -48.4);
	glVertex3d(-11.6, -11.1, -39.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-8.6, -11.1, -48.4);
	glVertex3d(-11.6, -11.1, -39.4);
	glVertex3d(-10.5, -20.1, -44.7);
	glVertex3d(-7.6, -20.1, -51.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-7.6, -20.1, -51.2);
	glVertex3d(-7.6, -26.6, -49.7);
	glVertex3d(-6.5, -26.6, -36.0);
	glVertex3d(-6.5, -23.0, -37.5);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-16.9, -20.1, -51.2);
	glVertex3d(-15.8, -20.1, -44.7);
	glVertex3d(-16.6, -23.0, -31.0);
	glVertex3d(-18.1, -23.0, -37.5);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-15.8, -20.1, -44.7);
	glVertex3d(-16.6, -23.0, -31.0);
	glVertex3d(-10.1, -23.0, -31.0);
	glVertex3d(-10.5, -20.1, -44.7);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-10.1, -23.0, -31.0);
	glVertex3d(-10.5, -20.1, -44.7);
	glVertex3d(-7.6, -20.1, -51.2);
	glVertex3d(-6.5, -23.0, -37.5);
	glEnd();

	glColor3ub(204, 206, 205);

	glBegin(GL_QUADS);
	glVertex3d(-10.6, 33.5, -68.7);
	glVertex3d(-18.8, 3.4, -60.1);
	glVertex3d(-12.6, 3.4, -60.1);
	glVertex3d(-2.3, 25.5, -70.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-12.6, 3.4, -60.1);
	glVertex3d(-2.3, 25.5, -70.8);
	glVertex3d(-3.7, 13.6, -49.2);
	glVertex3d(-10.4, 9.1, -45.1);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-3.7, 13.6, -49.2);
	glVertex3d(-10.4, 9.1, -45.1);
	glVertex3d(-14.0, 7.8, -26.9);
	glVertex3d(-13.0, 12.5, -27.8);
	glEnd();

	glColor3ub(35, 43, 46);

	glBegin(GL_QUADS);
	glVertex3d(-18.1, -23.0, -37.5);
	glVertex3d(-18.1, -26.6, -36.0);
	glVertex3d(-16.6, -26.6, -29.4);
	glVertex3d(-16.6, -23.0, -31.0);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-16.6, -26.6, -29.4);
	glVertex3d(-16.6, -23.0, -31.0);
	glVertex3d(-10.1, -23.0, -31.0);
	glVertex3d(-10.1, -26.6, -29.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-10.1, -23.0, -31.0);
	glVertex3d(-10.1, -26.6, -29.4);
	glVertex3d(-6.5, -26.6, -36.0);
	glVertex3d(-6.5, -23.0, -37.5);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(-16.6, -26.6, -29.4);
	glVertex3d(-10.1, -26.6, -29.4);
	glVertex3d(-6.5, -26.6, -36.0);
	glVertex3d(-7.6, -26.6, -49.7);
	glVertex3d(-9.4, -26.6, -56.3);
	glVertex3d(-14.5, -26.6, -56.3);
	glVertex3d(-16.9, -26.6, -49.7);
	glVertex3d(-18.1, -26.6, -36.0);
	glEnd();
}

void kakiBelakang() {
	kakiBelakangKiri();
	kakiBelakangKanan();
}

void kaki() {
	kakiDepan();
	kakiBelakang();
}

void badan() {
	glColor3ub(106, 106, 104);

	glBegin(GL_QUADS);
	glVertex3d(0.0, 59.0, 6.7);
	glVertex3d(15.9, 52.0, 6.7);
	glVertex3d(15.9, 52.1, 21.8);
	glVertex3d(0.0, 59.1, 21.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(15.9, 52.0, 6.7);
	glVertex3d(22.4, 35.0, 6.7);
	glVertex3d(22.4, 35.1, 21.8);
	glVertex3d(15.9, 52.1, 21.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(0.0, 60.8, -5.8);
	glVertex3d(15.9, 53.3, -5.8);
	glVertex3d(15.9, 52.0, 6.7);
	glVertex3d(0.0, 59.0, 6.7);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(15.9, 53.3, -5.8);
	glVertex3d(22.4, 35.4, -1.8);
	glVertex3d(22.4, 35.0, 6.7);
	glVertex3d(15.9, 52.0, 6.7);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-15.9, 52.0, 6.7);
	glVertex3d(0.0, 59.0, 6.7);
	glVertex3d(0.0, 59.1, 21.8);
	glVertex3d(-15.9, 52.1, 21.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-22.4, 35.0, 6.7);
	glVertex3d(-15.9, 52.0, 6.7);
	glVertex3d(-15.9, 52.1, 21.8);
	glVertex3d(-22.4, 35.1, 21.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-15.9, 53.3, -5.8);
	glVertex3d(0.0, 60.8, -5.8);
	glVertex3d(0.0, 59.0, 6.7);
	glVertex3d(-15.9, 52.0, 6.7);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-22.4, 35.4, -1.8);
	glVertex3d(-15.9, 53.3, -5.8);
	glVertex3d(-15.9, 52.0, 6.7);
	glVertex3d(-22.4, 35.0, 6.7);
	glEnd();

	glColor3ub(204, 206, 205);

	glBegin(GL_QUADS);
	glVertex3d(12.7, 16.8, 21.8);
	glVertex3d(0.0, 11.2, 21.8);
	glVertex3d(0.0, 11.1, 6.7);
	glVertex3d(5.6, 13.6, 6.7);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(0.0, 11.2, 21.8);
	glVertex3d(0.0, 11.1, 6.7);
	glVertex3d(-5.6, 13.6, 6.7);
	glVertex3d(-12.7, 16.8, 21.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(0.0, 11.1, 6.7);
	glVertex3d(-5.6, 13.6, 6.7);
	glVertex3d(-10.9, 11.0, -4.8);
	glVertex3d(0.0, 9.2, -5.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(0.0, 11.1, 6.7);
	glVertex3d(0.0, 9.2, -5.8);
	glVertex3d(10.9, 11.0, -4.8);
	glVertex3d(5.6, 13.6, 6.7);
	glEnd();

	glColor3ub(106, 106, 104);

	glBegin(GL_QUADS);
	glVertex3d(0.0, 62.7, -19.4);
	glVertex3d(16.8, 54.6, -19.4);
	glVertex3d(15.9, 53.3, -5.8);
	glVertex3d(0.0, 60.8, -5.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(16.8, 54.6, -19.4);
	glVertex3d(15.9, 53.3, -5.8);
	glVertex3d(22.4, 35.4, -1.8);
	glVertex3d(23.8, 35.2, -19.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(22.4, 35.4, -1.8);
	glVertex3d(23.8, 35.2, -19.4);
	glVertex3d(16.8, 15.9, -19.4);
	glVertex3d(13.5, 15.6, -5.8);
	glEnd();

	glColor3ub(204, 206, 205);

	glBegin(GL_QUADS);
	glVertex3d(16.8, 15.9, -19.4);
	glVertex3d(13.5, 15.6, -5.8);
	glVertex3d(0.0, 9.2, -5.8);
	glVertex3d(0.0, 7.8, -19.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(0.0, 9.2, -5.8);
	glVertex3d(0.0, 7.8, -19.4);
	glVertex3d(-16.8, 15.9, -19.4);
	glVertex3d(-13.5, 15.6, -5.8);
	glEnd();

	glColor3ub(106, 106, 104);

	glBegin(GL_QUADS);
	glVertex3d(-16.8, 15.9, -19.4);
	glVertex3d(-13.5, 15.6, -5.8);
	glVertex3d(-22.4, 35.4, -1.8);
	glVertex3d(-23.8, 35.2, -19.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-22.4, 35.4, -1.8);
	glVertex3d(-23.8, 35.2, -19.4);
	glVertex3d(-16.8, 54.6, -19.4);
	glVertex3d(-15.9, 53.3, -5.8);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-16.8, 54.6, -19.4);
	glVertex3d(-15.9, 53.3, -5.8);
	glVertex3d(0.0, 60.8, -5.8);
	glVertex3d(0.0, 62.7, -19.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(0.0, 62.7, -33.9);
	glVertex3d(17.0, 54.6, -33.9);
	glVertex3d(16.8, 54.6, -19.4);
	glVertex3d(0.0, 62.7, -19.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(17.0, 54.6, -33.9);
	glVertex3d(16.8, 54.6, -19.4);
	glVertex3d(24.0, 32.0, -31.9);
	glVertex3d(23.8, 35.2, -19.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(24.0, 32.0, -31.9);
	glVertex3d(23.8, 35.2, -19.4);
	glVertex3d(16.8, 15.9, -19.4);
	glVertex3d(13.0, 12.5, -27.8);
	glEnd();

	glColor3ub(204, 206, 205);

	glBegin(GL_QUADS);
	glVertex3d(16.8, 15.9, -19.4);
	glVertex3d(13.0, 12.5, -27.8);
	glVertex3d(0.0, 7.4, -33.9);
	glVertex3d(0.0, 7.8, -19.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(0.0, 7.4, -33.9);
	glVertex3d(0.0, 7.8, -19.4);
	glVertex3d(-16.8, 15.9, -19.4);
	glVertex3d(-13.0, 12.5, -27.8);
	glEnd();

	glColor3ub(106, 106, 104);

	glBegin(GL_QUADS);
	glVertex3d(-16.8, 15.9, -19.4);
	glVertex3d(-13.0, 12.5, -27.8);
	glVertex3d(-24.0, 32.0, -31.9);
	glVertex3d(-23.8, 35.2, -19.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-24.0, 32.0, -31.9);
	glVertex3d(-23.8, 35.2, -19.4);
	glVertex3d(-16.8, 54.6, -19.4);
	glVertex3d(-17.0, 54.6, -33.9);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-16.8, 54.6, -19.4);
	glVertex3d(-17.0, 54.6, -33.9);
	glVertex3d(0.0, 62.7, -33.9);
	glVertex3d(0.0, 62.7, -19.4);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(0.0, 57.7, -49.2);
	glVertex3d(14.1, 51.0, -49.2);
	glVertex3d(17.0, 54.6, -33.9);
	glVertex3d(0.0, 62.7, -33.9);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(14.1, 51.0, -49.2);
	glVertex3d(17.0, 54.6, -33.9);
	glVertex3d(24.0, 32.0, -31.9);
	glVertex3d(19.9, 35.4, -49.7);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(0.0, 57.7, -49.2);
	glVertex3d(0.0, 62.7, -33.9);
	glVertex3d(-17.0, 54.6, -33.9);
	glVertex3d(-14.1, 51.0, -49.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-17.0, 54.6, -33.9);
	glVertex3d(-14.1, 51.0, -49.2);
	glVertex3d(-19.9, 35.4, -49.7);
	glVertex3d(-24.0, 32.0, -31.9);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(0.0, 42.6, -66.4);
	glVertex3d(6.5, 39.9, -65.7);
	glVertex3d(14.1, 51.0, -49.2);
	glVertex3d(0.0, 57.7, -49.2);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(6.5, 39.9, -65.7);
	glVertex3d(14.1, 51.0, -49.2);
	glVertex3d(19.9, 35.4, -49.7);
	glVertex3d(10.6, 33.5, -68.7);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(0.0, 42.6, -66.4);
	glVertex3d(0.0, 57.7, -49.2);
	glVertex3d(-14.1, 51.0, -49.2);
	glVertex3d(-6.5, 39.9, -65.7);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(-14.1, 51.0, -49.2);
	glVertex3d(-6.5, 39.9, -65.7);
	glVertex3d(-10.6, 33.5, -68.7);
	glVertex3d(-19.9, 35.4, -49.7);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(0.0, 42.6, -66.4);
	glVertex3d(-6.5, 39.9, -65.7);
	glVertex3d(-10.6, 33.5, -68.7);
	glVertex3d(-2.3, 25.5, -70.8);
	glVertex3d(0.0, 27.8, -71.0);
	glVertex3d(2.3, 25.5, -70.8);
	glVertex3d(10.6, 33.5, -68.7);
	glVertex3d(6.5, 39.9, -65.7);
	glEnd();

	glColor3ub(204, 206, 205);

	glBegin(GL_QUADS);
	glVertex3d(0.0, 13.2, -49.2);
	glVertex3d(-3.7, 13.6, -49.2);
	glVertex3d(-13.0, 12.5, -27.8);
	glVertex3d(0.0, 7.4, -33.9);
	glEnd();

	glBegin(GL_QUADS);
	glVertex3d(0.0, 13.2, -49.2);
	glVertex3d(0.0, 7.4, -33.9);
	glVertex3d(13.0, 12.5, -27.8);
	glVertex3d(3.7, 13.6, -49.2);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex3d(3.7, 13.6, -49.2);
	glVertex3d(2.3, 25.5, -70.8);
	glVertex3d(0.0, 27.8, -71.0);
	glVertex3d(-2.3, 25.5, -70.8);
	glVertex3d(-3.7, 13.6, -49.2);
	glEnd();
}

void display() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glPushMatrix();
	gluLookAt(0, 100, 200, 0, 0, 0, 0, 1, 0);
	glRotatef(xrot, 1, 0, 0);
	glRotatef(yrot, 0, 1, 0);

	kepala();
	leher();
	badan();
	kaki();

	glPopMatrix();
	glutSwapBuffers();
}

void myInit() {
	glClearColor(1, 1, 1, 1);
	glLineWidth(2);
	glClearDepth(1.0f);
	glEnable(GL_DEPTH_TEST);
	glEnable(GL_BLEND);
	glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
	glDepthFunc(GL_LEQUAL);
	glShadeModel(GL_SMOOTH);
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
	glMatrixMode(GL_PROJECTION);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowSize(1000, 600);
	glutCreateWindow("Koala Epic");
	myInit();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboardEvent);
	glutMouseFunc(mouseButtonEvent);
	glutMotionFunc(mouseMoveEvent);

	glutMainLoop();
	return 0;
}