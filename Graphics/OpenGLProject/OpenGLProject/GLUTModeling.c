//#include <stdlib.h>
//#include <GL/glut.h>
//void MyInit() {
//	GLfloat mat_ambient[] = { 0.5, 0.4, 0.3, 1.0 };
//	GLfloat mat_specular[] = { 1.0, 1.0, 1.0, 1.0 };
//	GLfloat mat_shininess[] = { 50.0 };
//	GLfloat light_position[] = { -1.0, 1.0, 0.5, 0.0 };
//	GLfloat model_ambient[] = { 0.5, 0.4, 0.3, 1.0 };
//	glClearColor(0.0, 0.0, 0.0, 0.0);
//	glMaterialfv(GL_FRONT, GL_AMBIENT, mat_ambient);
//	glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
//	glMaterialfv(GL_FRONT, GL_SHININESS, mat_shininess);
//	glLightfv(GL_LIGHT0, GL_POSITION, light_position);
//	glLightModelfv(GL_LIGHT_MODEL_AMBIENT, model_ambient);
//	glEnable(GL_LIGHTING);
//	glEnable(GL_LIGHT0);
//	glEnable(GL_DEPTH_TEST);
//}
//
//void MyDisplay() {
//	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//	glRotatef(20.0, 1.0, 0.0, 0.0);
//	glEnable(GL_LIGHTING);
//	glShadeModel(GL_SMOOTH);
//	glutSolidTeapot(1.0);
//	glutSwapBuffers();
//}
//void MyReshape(int w, int h) {
//	glViewport(0, 0, (GLsizei)w, (GLsizei)h);
//	glMatrixMode(GL_PROJECTION);
//	glLoadIdentity();
//	glOrtho(-2.5, 2.5, -2.5 * (GLfloat)h / (GLfloat)w, 2.5 * (GLfloat)h / (GLfloat)w, -10.0, 10.0);
//	glMatrixMode(GL_MODELVIEW);
//	glLoadIdentity();
//}
//
//int main(int argc, char** argv) {
//	glutInit(&argc, argv);
//	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
//	glutInitWindowSize(800, 600);
//	glutInitWindowPosition(0, 0);
//	glutCreateWindow("Graphics Primitives");
//	MyInit();
//	glutDisplayFunc(MyDisplay);
//	glutReshapeFunc(MyReshape);
//	glutMainLoop();
//	return 0;
//}