#include "Shear.h"
#include "Refleksi.h"

void main(int argc, char** argv)
{
	cout << "masukan jumlah titik: "; cin >> edges;
	for (int i = 0; i < edges; i++)
	{
		cout << "masukan kordinat : " << i + 1 << " : ";
		cin >> pntX1 >> pntY1;
		pntX.push_back(pntX1);
		pntY.push_back(pntY1);
	}

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Shear X dari 1918117 (youras)");
	glutDisplayFunc(myDisplay1);
	myInit();


	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(500, 500);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Shear Y dari 1918117 (youras)");
	glutDisplayFunc(myDisplay2);
	myInit();


	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Refleksi X dari 1918117 (youras)");
	glutDisplayFunc(myDisplay3);
	myInit();


	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(640, 480);
	glutInitWindowPosition(100, 150);
	glutCreateWindow("Refleksi Y dari 1918117 (youras)");
	glutDisplayFunc(myDisplay4);
	myInit();
	glutMainLoop();
}