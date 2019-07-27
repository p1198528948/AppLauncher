#include "MainWindow.h"
#include <QApplication>
#include "upmdialog.h"
#include "custommadelistviewdialog.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

    //UPMDialog w;

    //MainWindow w;
    CustomMadeListViewDialog w;
    w.show();

	return a.exec();
}
