#include<stdio.h>
#include<GL/glut.h>
#include <GL/gl.h>
#include <stdlib.h>
void draw_pixel(GLint cx, GLint cy)
{

	glBegin(GL_POINTS);
		glVertex2i(cx,cy);
	glEnd();
}
void plotpixels(GLint h,GLint k, GLint x,GLint y)
{
	draw_pixel(x+h,y+k);
	draw_pixel(-x+h,y+k);
	draw_pixel(x+h,-y+k);
	draw_pixel(-x+h,-y+k);
	draw_pixel(y+h,x+k);
	draw_pixel(-y+h,x+k);
	draw_pixel(y+h,-x+k);
	draw_pixel(-y+h,-x+k);
}
void draw_circle(GLint h, GLint k, GLint r)
{
	GLint d=1-r, x=0, y=r;
	while(y>x)
	{
		plotpixels(h,k,x,y);
		if(d<0) d+=2*x+3;
		else
		{
			d+=2*(x-y)+5;
			--y;
		}
		++x;
	}
	plotpixels(h,k,x,y);
}
void draw_object()
{
//grass
glColor3f(0.6,0.8,0.196078);
glBegin(GL_POLYGON);
glVertex2f(0,160);
glVertex2f(0,380);
glVertex2f(1100,380);
glVertex2f(1100,160);
glEnd();
//Ground
glColor3f(0.0,0.3,0.0);
glBegin(GL_POLYGON);
glVertex2f(-600,0);
glVertex2f(-600,185);
glVertex2f(1100,185);
glVertex2f(1100,0);
glEnd();
//sky
glColor3f(0.0,0.9,0.9);
glBegin(GL_POLYGON);
glVertex2f(0,380);
glVertex2f(0,700);
glVertex2f(1100,700);
glVertex2f(1100,380);
glEnd();
//tree
glColor3f(0.9,0.2,0.0);
glBegin(GL_POLYGON);
glVertex2f(280,185);
glVertex2f(280,255);
glVertex2f(295,255);
glVertex2f(295,185);
glEnd();
int l;
	for(l=0;l<=30;l++)
	{
		glColor3f(0.0,0.5,0.0);
		draw_circle(270,250,l);
		draw_circle(310,250,l);
	}

	for(l=0;l<=25;l++)
	{
		glColor3f(0.0,0.5,0.0);
		draw_circle(280,290,l);
		draw_circle(300,290,l);
	}

	for(l=0;l<=20;l++)
	{
		glColor3f(0.0,0.5,0.0);
		draw_circle(290,315,l);
	}
//tree 1
glColor3f(0.9,0.2,0.0);
glBegin(GL_POLYGON);
glVertex2f(100,135);
glVertex2f(100,285);
glVertex2f(140,285);
glVertex2f(140,135);
glEnd();
for(l=0;l<=40;l++)
	{
		glColor3f(0.0,0.5,0.0);
		draw_circle(40,280,l);
		draw_circle(90,280,l);
		draw_circle(150,280,l);
		draw_circle(210,280,l);
		draw_circle(65,340,l);
		draw_circle(115,340,l);
		draw_circle(175,340,l);
    }
for(l=0;l<=55;l++)
	{
		glColor3f(0.0,0.5,0.0);
		draw_circle(115,360,l);
    }
//roof
glColor3f(0.35,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(540,330);
glVertex2f(540,350);
glVertex2f(960,350);
glVertex2f(960,330);
glEnd();
//home
glColor3f(.555, .724, .930);
glBegin(GL_POLYGON);
glVertex2f(550,100);
glVertex2f(550,330);
glVertex2f(950,330);
glVertex2f(950,100);
glVertex2f(850,100);
glVertex2f(850,250);
glVertex2f(650,250);
glVertex2f(650,100);
glEnd();
//window border
glColor3f(0.35,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(595,205);
glVertex2f(595,285);
glVertex2f(675,285);
glVertex2f(675,205);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(825,205);
glVertex2f(825,285);
glVertex2f(905,285);
glVertex2f(905,205);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(845,205);
glVertex2f(845,285);
glVertex2f(850,285);
glVertex2f(850,205);
glEnd();
//door
glColor3f(0,0,0);
glBegin(GL_POLYGON);
glVertex2f(800,100);
glVertex2f(800,220);
glVertex2f(700,220);
glVertex2f(700,100);
glEnd();
glColor3f(0.35,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(760,120);
glVertex2f(760,200);
glVertex2f(700,220);
glVertex2f(700,100);
glEnd();
//window
glColor3f(0,0,0);
glBegin(GL_POLYGON);
glVertex2f(600,210);
glVertex2f(600,280);
glVertex2f(670,280);
glVertex2f(670,210);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(830,210);
glVertex2f(830,280);
glVertex2f(900,280);
glVertex2f(900,210);
glEnd();
glColor3f(0.35,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(620,210);
glVertex2f(620,280);
glVertex2f(625,280);
glVertex2f(625,210);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(650,210);
glVertex2f(650,280);
glVertex2f(655,280);
glVertex2f(655,210);
glEnd();
glColor3f(0.35,0.0,0.0);
glBegin(GL_POLYGON);
glVertex2f(850,205);
glVertex2f(850,285);
glVertex2f(855,285);
glVertex2f(855,205);
glEnd();
glBegin(GL_POLYGON);
glVertex2f(880,205);
glVertex2f(880,285);
glVertex2f(885,285);
glVertex2f(885,205);
glEnd();






//HouseRoof
glBegin(GL_POLYGON);
glColor3f(.990, 0.0, 0.0);
glVertex2i(285, 105);
glVertex2i(285, 130);
glVertex2i(380, 115);
glVertex2i(380, 105);
glEnd();
//Housetop
glBegin(GL_POLYGON);
glColor3f(.555, 1.0, 1.0);
glVertex2i(290, 70);
glVertex2i(290, 104);
glVertex2i(375, 104);
glVertex2i(375, 70);
glEnd();
//House_Door
glBegin(GL_POLYGON);
glColor3f(0.38, 0.41, 0.36);
glVertex2i(330, 70);
glVertex2i(330, 100);
glVertex2i(350, 100);
glVertex2i(350, 70);
glEnd();
//House_Window1
glBegin(GL_POLYGON);
glColor3f(0.38, 0.21, 0.26);
glVertex2i(295, 75);
glVertex2i(295, 90);
glVertex2i(310, 90);
glVertex2i(310, 75);
glEnd();
//House_Window2
glBegin(GL_POLYGON);
glColor3f(0.38, 0.21, 0.26);
glVertex2i(312, 75);
glVertex2i(312, 90);
glVertex2i(327, 90);
glVertex2i(327, 75);
glEnd();
//House_Window3
glBegin(GL_POLYGON);
glColor3f(0.38, 0.21, 0.26);
glVertex2i(355, 75);
glVertex2i(355, 90);
glVertex2i(370, 90);
glVertex2i(370, 75);
glEnd();
//House_Small_Roof
glBegin(GL_POLYGON);
glColor3f(1.0, 0.0, 0.0);
glVertex2i(250, 90);
glVertex2i(257, 104);
glVertex2i(290, 104);
glVertex2i(290, 90);
glEnd();
//House_Small_Fence
glBegin(GL_POLYGON);
glColor3f(.555, .724, .930);
glVertex2i(255, 70);
glVertex2i(255, 90);
glVertex2i(290, 90);
glVertex2i(290, 70);
glEnd();
//House_Small_Door
glBegin(GL_POLYGON);
glColor3f(0.11, 0.23, 0.36);
glVertex2i(260, 70);
glVertex2i(260, 80);
glVertex2i(285, 80);
glVertex2i(285, 70);
glEnd();
glFlush();
}
void myinit()
{
glClearColor(1.0,1.0,1.0,1.0);
glColor3f(0.0,0.0,1.0);
glPointSize(2.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(0.0,1000.0,0.0,600.0);
}
void display()
{
glClear(GL_COLOR_BUFFER_BIT);
draw_object();
glFlush();
}
int main(int argc,char** argv)
{
    glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowSize(500,360);
	glutInitWindowPosition(0,0);
	glutCreateWindow("Simple Village");
	glutDisplayFunc(display);
	myinit();
	glutMainLoop();
	return 0;
}
