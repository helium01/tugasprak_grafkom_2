#include <stdio.h>
#include <math.h>
#include <iostream>
#include <vector> // membuat matriks
#include <glut.h>


void gambarRX()
{
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 1.0);
	for (int i = 0; i < edges; i++)
	{
		glVertex2i((pntX[i]), (pntY[i] * -1));
	}
	glEnd();
	glFlush();
}

void gambarRY()
{
	glBegin(GL_POLYGON);
	glColor3f(0.0, 1.0, 1.0);
	for (int i = 0; i < edges; i++)
	{
		glVertex2i((pntX[i] * -1), (pntY[i]));
	}
	glEnd();
	glFlush();
}



void myDisplay3()
{
	drawPolygon();
	gambarRX();
}

void myDisplay4()
{
	drawPolygon();
	gambarRY();
}
