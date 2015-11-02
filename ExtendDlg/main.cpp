#include "extenddlg.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ExtendDlg w;
	w.show();
	return a.exec();
}
