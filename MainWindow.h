#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "custommadelistviewdialog.h"
/**
 * 该项目来自互联网 GitHub
 * 和我心目中的 Android listview 很像
 */
namespace Ui {
	class MainWindow;
}

class QListWidgetItem;

class MainWindow : public QMainWindow
{
		Q_OBJECT

	public:
		explicit MainWindow(QWidget *parent = 0);
		~MainWindow();

	private:
		Ui::MainWindow *ui;

	private slots:
		void addCustomItem(QString str);
		void removeCustomItem(QListWidgetItem *item);
        void on_pushButton_demo_clicked();


};

#endif // MAINWINDOW_H
