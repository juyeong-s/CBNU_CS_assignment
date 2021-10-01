//#include<windows.h>
//#include<stdio.h>
//#include <stdlib.h>
//#include<GL/gl.h>
//#include <GL/glu.h>
//#include <GL/glut.h>
//
//
//
///* 최초의 사면체 */
//GLfloat v[4][3] = { {0.0,0.0,1.0},{0.0,0.942809,-0.33333},{-0.81649,-0.471405,-0.333333},{0.816497,-0.471405,-0.333333} };
//GLfloat colors[4][3] = { {1.0,0.0,0.0},{0.0,1.0,0.0},{0.0,0.0,1.0},{0.0,0.0,1.0} };
//int n;
//void triangle(GLfloat *va, GLfloat *vb, GLfloat *vc)
//{
//	glVertex3fv(va);
//	glVertex3fv(vb);
//	glVertex3fv(vc);
//}
//
//void tetra(GLfloat *a, GLfloat *b, GLfloat *c, GLfloat *d)
//{
//
//	glColor3fv(colors[0]);
//	triangle(a, b, c);
//	glColor3fv(colors[1]);
//	triangle(a, c, d);
//	glColor3fv(colors[2]);
//	triangle(a, d, b);
//	glColor3fv(colors[3]);
//	triangle(b, d, c);
//
//}
//
//void divide_tetra(GLfloat *a, GLfloat *b, GLfloat *c, GLfloat *d, int m)
//{
//	GLfloat mid[6][3];
//	int j;
//	if (m > 0)
//	{
//		/* 6개의 중점을 계산 */
//		for (j = 0; j < 3; j++) mid[0][j] = (a[j] + b[j]) / 2;
//		for (j = 0; j < 3; j++) mid[1][j] = (a[j] + c[j]) / 2;
//		for (j = 0; j < 3; j++) mid[2][j] = (a[j] + d[j]) / 2;
//		for (j = 0; j < 3; j++) mid[3][j] = (b[j] + c[j]) / 2;
//		for (j = 0; j < 3; j++) mid[4][j] = (c[j] + d[j]) / 2;
//		for (j = 0; j < 3; j++) mid[5][j] = (b[j] + d[j]) / 2;
//
//		/* 분할해서 4개의 사면체를 생성 */
//		divide_tetra(a, mid[0], mid[1], mid[2], m - 1);
//		divide_tetra(mid[0], b, mid[3], mid[5], m - 1);
//		divide_tetra(mid[1], mid[3], c, mid[4], m - 1);
//		divide_tetra(mid[2], mid[5], mid[4], d, m - 1);
//	}
//	else tetra(a, b, c, d); /* 순환호출의 끝에는 사면체를 그린다*/
//}
//
//void display(void)
//{
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//	glBegin(GL_TRIANGLES);
//	divide_tetra(v[0], v[1], v[2], v[3], n);
//	glEnd();
//	glFlush();
//}
//void myReshape(int w, int h)
//{
//	glViewport(0, 0, w, h);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	if (w <= h)
//		glOrtho(-2.0, 2.0, -2.0*(GLfloat)h / (GLfloat)w, 2.0*(GLfloat)h / (GLfloat)w, -10.0, 10.0);
//	else
//		glOrtho(-2.0*(GLfloat)w / (GLfloat)h, 2.0*(GLfloat)w / (GLfloat)h, -2.0, 2.0, -10.0, 10.0);
//	glMatrixMode(GL_MODELVIEW);
//	glutPostRedisplay();
//}
//
//int main(int argc, char **argv)
//{
//	//n = atoi(argv[1]); /*또는 분할 횟수를 여기서 설정 */
//	n = 3;
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
//	glutInitWindowSize(500, 500);
//	glutCreateWindow("3D Gasket");
//	glutReshapeFunc(myReshape);
//	glutDisplayFunc(display);
//	glEnable(GL_DEPTH_TEST);
//	glClearColor(1.0, 1.0, 1.0, 1.0);
//	glutMainLoop();
//}