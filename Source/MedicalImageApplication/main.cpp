#include <QApplication>
#include "../../Include/MedicalImageApplication/ZQMainWindow.h"
#include <stdio.h>

void main(int argc, char *argv[])
{
	QApplication application(argc,argv);

	ZQMainWindow window;
	window.show();

	application.exec();

}