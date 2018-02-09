//ELIZABET AVENDANO NUNEZ
#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
//angulo de rotación
GLfloat	angulo = 0.0;
GLfloat	angulo2 = 0.0;
GLfloat	tras = 0.0;
GLfloat	traslin = 0.0;

GLfloat	trasluna = 0.0;
GLfloat	trassol = 0.0;
GLfloat	traspez = 0.0;



GLfloat	pajtras = 0.0;
GLfloat	scpa = 10.0;
GLfloat sx1, sx, sy1, sy, sx2, sy2, h = 0.0;
GLfloat a, b, c, d, t = 0.0, i = 0.0;
GLfloat red, green, blue, red2, green2, blue2;
#define PI 3.1415926535
#define WIDTH 780
#define HEIGHT 780

void dibujaLineas(int x0, int y0, int x1, int y1);
void dibujaRectangulos(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3);
void dibujaTriangulos(int x0, int y0, int x1, int y1, int x2, int y2);
void dibujaCuadros(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4);
void dibujaP(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int x7, int y7, int x8, int y8);
void dibujapuntos();
void dibujaCirculos(int x0, int y0);
void dibujaCirculos1(int x0, int y0);
void dibujaCirculos2(int x0, int y0);



void init(void)
{

	
	sx = 1; sy = 1;
	sx1 = 1; sy1 = 1;
	
}
void display(void)
{
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	printf("TRAS> %f",tras);
	if (tras < -1000)
	{
		tras = 0;
		i = 0;
		if (i == 0)
		{
			trasluna = 0;
		}
		traslin = 0;
		sx = 1;
		sy = 1;
		sx1 = 1;
		sy1 = 1;
		pajtras =0;
		scpa = 1;
		t = 0;
		
	}
	
		glLoadIdentity();
		//cielo noche
		glPushMatrix();
		red = (5.0 / 255.0); green = (22.0 / 255.0); blue = (114.0 / 255.0);
		dibujaRectangulos(0.0, 200.0, 780.0, 200.0, 780.0, 780.0, 0.0, 780.0);
		glPopMatrix();

		//cielo dia
		glPushMatrix();
		if (i > 150) {
			red = (72.0 / 255.0); green = (180.0 / 255.0); blue = (242.0 / 255.0);
			dibujaRectangulos(0.0, 200.0, 780.0, 200.0, 780.0, 780.0, 0.0, 780.0);

		}
		glPopMatrix();

		//MAR
		glPushMatrix();
		red = (0.0 / 255.0); green = (100.0 / 255.0); blue = (158.0 / 255.0);
		dibujaRectangulos(0.0, 200.0, 780.0, 200.0, 780.0, 0.0, 0.0, 0.0);

		glPopMatrix();

		glPushMatrix();
		glTranslatef(tras, 0.0f, 0.0f);
		
		
		//pescado1
		red = (223.0 / 255.0); green = (150.0 / 255.0); blue = (232.0 / 255.0);
		dibujaCirculos2(400.0, 110.0);
		red = (223.0 / 255.0); green = (150.0 / 255.0); blue = (232.0 / 255.0);
		dibujaTriangulos(410.0, 110.0, 420.0, 130.0, 420.0, 90.0);
		//pescado2
		red = (226.0 / 255.0); green = (113.0 / 255.0); blue = (27.0 / 255.0);
		dibujaCirculos2(480.0, 130.0);
		red = (226.0 / 255.0); green = (113.0 / 255.0); blue = (27.0 / 255.0);
		dibujaTriangulos(490.0, 130.0, 500.0, 150.0, 500.0, 110.0);
		//pescado3
		red = (247.0 / 255.0); green = (247.0 / 255.0); blue = (239.0 / 255.0);
		dibujaCirculos2(790.0, 110.0);
		red = (247.0 / 255.0); green = (247.0 / 255.0); blue = (239.0 / 255.0);
		dibujaTriangulos(800.0, 110.0, 810.0, 130.0, 810.0, 90.0);
		glPopMatrix();	
		//sol
		glPushMatrix();
		if (i > 150.00)
		{

			glTranslatef(-1 * tras, 0.0f, 0.0f);
			red = (255.0 / 255.0); green = (245.0 / 255.0); blue = (66.0 / 255.0);
			dibujaCirculos(0.0, 700.0);
		}
		glPopMatrix();
		//luna
		glPushMatrix();
		glTranslatef(-1 * trasluna, 0.0f, 0.0f);
		red = (146.0 / 255.0); green = (160.0 / 255.0); blue = (168.0 / 255.0);
		dibujaCirculos(200.0, 700.0);
		glPopMatrix();
		

		//palomotor
		glPushMatrix();
		glTranslatef(tras, 0.0f, 0.0f);
		red = (76.0 / 255.0); green = (64.0 / 255.0); blue = (13.0 / 255.0);
		dibujaRectangulos(700.0, 290.0, 820.0, 290.0, 820.0, 310.0, 700.0, 310.0);
		glPopMatrix();
		//palospnubes
		glPushMatrix();
		glTranslatef(tras, 0.0f, 0.0f);
		red = (209.0 / 255.0); green = (196.0 / 255.0); blue = (140.0 / 255.0);
		dibujaRectangulos(580.0, 600, 570.0, 600.0, 570.0, 650.0, 580.0, 650.0);

		glPopMatrix();
		//humo
		glPushMatrix();
		glTranslatef(810, 810, 0);
		glScalef(sx1, sy1, 1);
		glTranslatef(-810, -810, 0);
		red = (216.0 / 255.0); green = (215.0 / 255.0); blue = (208.0 / 255.0);
		dibujaCirculos1(575.0, 675.0);
		red = (216.0 / 255.0); green = (215.0 / 255.0); blue = (208.0 / 255.0);
		dibujaCirculos1(595.0, 695.0);
		red = (216.0 / 255.0); green = (215.0 / 255.0); blue = (208.0 / 255.0);
		dibujaCirculos1(615.0, 715.0);
		glPopMatrix();

		glPopMatrix();
		//motor
		glPushMatrix();
		glTranslatef(tras, 0.0f, 0.0f);
		glPushMatrix();
		glTranslatef(800, 300, 0);
		glRotatef(angulo, 0.0f, 0.0f, 1.0f);
		glTranslatef(-800, -300, 0);
		red = (153.0 / 255.0); green = (39.0 / 255.0); blue = (19.0 / 255.0);
		dibujaTriangulos(780.0, 280.0, 850.0, 280.0, 830.0, 330.0);
		red = (153.0 / 255.0); green = (39.0 / 255.0); blue = (19.0 / 255.0);
		dibujaTriangulos(780.0, 320.0, 850.0, 320.0, 830.0, 270.0);
		glPopMatrix();
		glPopMatrix();
		//1 PISO
		glPushMatrix();
		glTranslatef(tras, 0.0f, 0.0f);
		red = (150.0 / 255.0); green = (146.0 / 255.0); blue = (145.0 / 255.0);
		dibujaCuadros(200.0, 200.0, 100.0, 500.0, 300.0, 400.0, 800.0, 400.0, 700.0, 200.0);
		glPopMatrix();

		//2piso barco
		glPushMatrix();
		glTranslatef(tras, 0.0f, 0.0f);
		red = (150.0 / 255.0); green = (146.0 / 255.0); blue = (145.0 / 255.0);
		dibujaCuadros(200.0, 200.0, 100.0, 500.0, 300.0, 400.0, 800.0, 400.0, 700.0, 200.0);
		red = (150.0 / 255.0); green = (146.0 / 255.0); blue = (145.0 / 255.0);
		dibujaP(200.0, 450.0, 200.0, 500.0, 400.0, 500.0, 400.0, 600.0, 600.0, 600.0, 600.0, 500.0, 700.0, 500.0, 700.0, 400.0, 300.0, 400.0);
		glPopMatrix();
		//palo
		glPushMatrix();
		glTranslatef(tras, 0.0f, 0.0f);
		red = (255.0 / 255.0); green = (248.0 / 255.0); blue = (63.0 / 255.0);
		dibujaRectangulos(750.0, 400.0, 750.0, 500.0, 765.0, 500.0, 765.0, 400.0);
		glPopMatrix();

		//pajaros
		glPushMatrix();
		//glTranslatef(tras, 0, 0);
		if (sx > 0)
		{
			glTranslatef(100, 700, 0);
			glScalef(sx, sy, 1);
			glTranslatef(-100, -700, 0);
			red = (25.0 / 255.0); green = (24.0 / 255.0); blue = (24.0 / 255.0);
			dibujaLineas(50.0, 710.0, 100.0, 700.0);
			red = (25.0 / 255.0); green = (24.0 / 255.0); blue = (24.0 / 255.0);
			dibujaLineas(100.0, 700.0, 150.0, 710.0);
			//pajaro2
			red = (25.0 / 255.0); green = (24.0 / 255.0); blue = (24.0 / 255.0);
			dibujaLineas(250.0, 700.0, 300.0, 688.0);
			red = (25.0 / 255.0); green = (24.0 / 255.0); blue = (24.0 / 255.0);
			dibujaLineas(300.0, 688.0, 350.0, 700.0);
			//pajaro3
			red = (25.0 / 255.0); green = (24.0 / 255.0); blue = (24.0 / 255.0);
			dibujaLineas(650.0, 700.0, 700.0, 650.0);
			red = (25.0 / 255.0); green = (24.0 / 255.0); blue = (24.0 / 255.0);
			dibujaLineas(700.0, 650.0, 750.0, 700.0);
			
		}
		glPopMatrix();
		glPushMatrix();
		if (i > 150)
		{
			if (sx2 > 0)
			{

				glTranslatef(100, 700, 0);
				glScalef(sx2, sy2, 1);
				glTranslatef(-100, -700, 0);
				red = (25.0 / 255.0); green = (24.0 / 255.0); blue = (24.0 / 255.0);
				dibujaLineas(50.0, 710.0, 100.0, 700.0);
				red = (25.0 / 255.0); green = (24.0 / 255.0); blue = (24.0 / 255.0);
				dibujaLineas(100.0, 700.0, 150.0, 710.0);
				//pajaro2
				red = (25.0 / 255.0); green = (24.0 / 255.0); blue = (24.0 / 255.0);
				dibujaLineas(250.0, 700.0, 300.0, 688.0);
				red = (25.0 / 255.0); green = (24.0 / 255.0); blue = (24.0 / 255.0);
				dibujaLineas(300.0, 688.0, 350.0, 700.0);
				//pajaro3
				red = (25.0 / 255.0); green = (24.0 / 255.0); blue = (24.0 / 255.0);
				dibujaLineas(650.0, 700.0, 700.0, 650.0);
				red = (25.0 / 255.0); green = (24.0 / 255.0); blue = (24.0 / 255.0);
				dibujaLineas(700.0, 650.0, 750.0, 700.0);
			}


		}
		glPopMatrix();
		//bandera
		glPushMatrix();
		glTranslatef(tras, 0.0f, 0.0f);
		red = (234.0 / 255.0); green = (45.0 / 255.0); blue = (11.0 / 255.0);
		dibujaTriangulos(765.0, 500.0, 800.0, 475.0, 765.0, 450.0);
		glPopMatrix();
		//ventanas
		glPushMatrix();
		glTranslatef(tras, 0.0f, 0.0f);
		//ventanas de abajo
		red = (25.0 / 255.0); green = (24.0 / 255.0); blue = (24.0 / 255.0);
		dibujaRectangulos(310.0, 300.0, 360.0, 300.0, 360.0, 350.0, 310.0, 350.0);
		red = (25.0 / 255.0); green = (24.0 / 255.0); blue = (24.0 / 255.0);
		dibujaRectangulos(410.0, 300.0, 460.0, 300.0, 460.0, 350.0, 410.0, 350.0);
		red = (25.0 / 255.0); green = (24.0 / 255.0); blue = (24.0 / 255.0);
		dibujaRectangulos(510.0, 300.0, 560.0, 300.0, 560.0, 350.0, 510.0, 350.0);
		//ventanas de arriba
		red = (25.0 / 255.0); green = (24.0 / 255.0); blue = (24.0 / 255.0);
		dibujaRectangulos(410.0, 515.0, 460.0, 515.0, 460.0, 570.0, 410.0, 570.0);
		red = (25.0 / 255.0); green = (24.0 / 255.0); blue = (24.0 / 255.0);
		dibujaRectangulos(510.0, 515.0, 560.0, 515.0, 560.0, 570.0, 510.0, 570.0);
		glPushMatrix();
		red = (255.0 / 255.0); green = (254.0 / 255.0); blue = (247.0 / 255.0);
		dibujaRectangulos(320.0, 310.0, 340.0, 310.0, 340.0, 340.0, 320.0, 340.0);
		red = (255.0 / 255.0); green = (254.0 / 255.0); blue = (247.0 / 255.0);
		dibujaRectangulos(420.0, 310.0, 440.0, 310.0, 440.0, 340.0, 420.0, 340.0);
		red = (255.0 / 255.0); green = (254.0 / 255.0); blue = (247.0 / 255.0);
		dibujaRectangulos(520.0, 310.0, 540.0, 310.0, 540.0, 340.0, 520.0, 340.0);
		red = (255.0 / 255.0); green = (254.0 / 255.0); blue = (247.0 / 255.0);
		dibujaRectangulos(420.0, 525.0, 440.0, 525.0, 440.0, 560.0, 420.0, 560.0);
		red = (255.0 / 255.0); green = (254.0 / 255.0); blue = (247.0 / 255.0);
		dibujaRectangulos(520.0, 525.0, 540.0, 525.0, 540.0, 560.0, 520.0, 560.0);
		glPopMatrix();

		//ventanas prendidas

		glPushMatrix();
		if (i < 150) {
			red = (252.0 / 255.0); green = (249.0 / 255.0); blue = (47.0 / 255.0);
			dibujaRectangulos(320.0, 310.0, 340.0, 310.0, 340.0, 340.0, 320.0, 340.0);
			red = (252.0 / 255.0); green = (249.0 / 255.0); blue = (47.0 / 255.0);
			dibujaRectangulos(420.0, 310.0, 440.0, 310.0, 440.0, 340.0, 420.0, 340.0);
			red = (252.0 / 255.0); green = (249.0 / 255.0); blue = (47.0 / 255.0);
			dibujaRectangulos(520.0, 310.0, 540.0, 310.0, 540.0, 340.0, 520.0, 340.0);
			red = (252.0 / 255.0); green = (249.0 / 255.0); blue = (47.0 / 255.0);
			dibujaRectangulos(420.0, 525.0, 440.0, 525.0, 440.0, 560.0, 420.0, 560.0);
			red = (252.0 / 255.0); green = (249.0 / 255.0); blue = (47.0 / 255.0);
			dibujaRectangulos(520.0, 525.0, 540.0, 525.0, 540.0, 560.0, 520.0, 560.0);
		}
		glPopMatrix();

		//Lineas
		glPushMatrix();
		glTranslatef(traslin, 0.0f, 0.0f);
	
		red = (25.0 / 255.0); green = (24.0 / 255.0); blue = (24.0 / 255.0);
		dibujaLineas(100.0, 500.0, 300.0, 400.0);
		red = (25.0 / 255.0); green = (24.0 / 255.0); blue = (24.0 / 255.0);
		dibujaLineas(300.0, 400.0, 800.0, 400.0);
		//linea2
		red = (25.0 / 255.0); green = (24.0 / 255.0); blue = (24.0 / 255.0);
		dibujaLineas(200.0, 500.0, 700.0, 500.0);
		glPopMatrix();
			//strellas
		glPushMatrix();
		h = (t - 2.0 * floor(t / 2.0));

		if (i < 150.00) {
			red = (255.0 / 255.0); green = (254.0 / 255.0); blue = (247.0 / 255.0);
			dibujapuntos();
		}
		glPopMatrix();
		glutSwapBuffers();
	}


void dibujaRectangulos(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3)
{
	glColor3f(red, green, blue);

	glBegin(GL_QUADS);
	glVertex2f(x0, y0); //v1	
	glVertex2f(x1, y1); //v2
	glVertex2f(x2, y2);  //v3
	glVertex2f(x3, y3);  //v4

	glEnd();
}
void dibujaCirculos(int x0, int y0) {
	glColor3f(red, green, blue);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i = i++)
	{
		float rad = i*3.1459265 / 180;
		glVertex2f((cos(rad) * 45) + x0, (sin(rad) * 45) + y0);
	}
	glEnd();
}
void dibujaCirculos1(int x0, int y0) {
	glColor3f(red, green, blue);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i = i++)
	{
		float rad = i*3.1459265 / 180;
		glVertex2f((cos(rad) * 25) + x0, (sin(rad) * 25) + y0);
	}
	glEnd();
}
void dibujaCirculos2(int x0, int y0) {
	glColor3f(red, green, blue);
	glBegin(GL_POLYGON);
	for (int i = 0; i < 360; i = i++)
	{
		float rad = i*3.1459265 / 180;
		glVertex2f((cos(rad) * 13) + x0, (sin(rad) * 13) + y0);
	}
	glEnd();
}
void dibujapuntos()
{
	glColor3f(red, green, blue);
	float xstar, ystar;
	int i;

	glPointSize(2);
	glBegin(GL_POINTS);
	for (i = 0; i < 50; i++)
	{
		xstar = rand() % 810;
		ystar = rand() % 300 + 600;
		glVertex2f(xstar, ystar);

	}
	glEnd();


}
void dibujaLineas(int x0, int y0, int x1, int y1)
{
	glColor3f(red, green, blue);

	glBegin(GL_LINES);
	glVertex2f(x0, y0);
	glVertex2f(x1, y1);
	glEnd();
}
void dibujaTriangulos(int x0, int y0, int x1, int y1, int x2, int y2) {
	glColor3f(red, green, blue);

	glBegin(GL_TRIANGLES);
	glVertex2f(x0, y0);
	glVertex2f(x1, y1);
	glVertex2f(x2, y2);
	glEnd();
}
void dibujaCuadros(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4)
{
	glColor3f(red, green, blue);

	glBegin(GL_POLYGON);

	glVertex2f(x0, y0); //v1	
	glVertex2f(x1, y1); //v2
	glVertex2f(x2, y2);  //v3
	glVertex2f(x3, y3);  //v4
	glVertex2f(x4, y4);  //v4

	glEnd();
}
void dibujaP(int x0, int y0, int x1, int y1, int x2, int y2, int x3, int y3, int x4, int y4, int x5, int y5, int x6, int y6, int x7, int y7, int x8, int y8)
{
	glColor3f(red, green, blue);

	glBegin(GL_POLYGON);

	glVertex2f(x0, y0); //v1	
	glVertex2f(x1, y1); //v2
	glVertex2f(x2, y2);  //v3
	glVertex2f(x3, y3);  //v4
	glVertex2f(x4, y4);  //v4
	glVertex2f(x5, y5);  //v4
	glVertex2f(x6, y6);  //v4
	glVertex2f(x7, y7);  //v4
	glVertex2f(x8, y8);  //v4


	glEnd();
}

//utilizo la perspectiva
void reshape(int width, int height)
{
	if (height == 0)
	{
		height = 1;
	}
	glutReshapeWindow(WIDTH, HEIGHT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(10, WIDTH, 10, HEIGHT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}



void Idle(void)
{
	angulo += 5.0;
	angulo2 += 0.3;
	tras -= 1.5;
	traslin -= 0.01;
	trasluna -= 2.4;
	trassol -= 1.9;
	sx -= 0.0010;
	sy -= 0.0010;
	sx1 -= 0.008;
	sy1 -= 0.008;
	pajtras += 1.0;
	scpa += 0.07;
	t += 1.0;
	i += 1.0;
	display();
	//Sleep(10);
}
int main(int argc, char** argv)
{
	glutInit(&argc, argv);
	//inicializa la ventana en el modo Doble Buffer
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_SINGLE);
	glutInitWindowSize(1020, 1020);
	glutInitWindowPosition(20, 50);
	glutCreateWindow("PROYECTO FINAL");
	init();
	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glutIdleFunc(Idle);

	//inicia el proceso de eventos
	glutMainLoop();
	return 0;
}