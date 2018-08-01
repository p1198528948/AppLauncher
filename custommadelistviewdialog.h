#ifndef CUSTOMMADELISTVIEWDIALOG_H
#define CUSTOMMADELISTVIEWDIALOG_H

#include <QDialog>
#include "appiconwidget.h"
namespace Ui {
class CustomMadeListViewDialog;
}

class CustomMadeListViewDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CustomMadeListViewDialog(QWidget *parent = 0);
    ~CustomMadeListViewDialog();

private:
    Ui::CustomMadeListViewDialog *ui;

public:
    QMap<QString, QString> icons;
};

#endif // CUSTOMMADELISTVIEWDIALOG_H
