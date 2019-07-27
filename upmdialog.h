#ifndef UPMDIALOG_H
#define UPMDIALOG_H

#include <QDialog>
#include <QCheckBox>
namespace Ui {
class UPMDialog;
}

class UPMDialog : public QDialog
{
    Q_OBJECT

public:
    explicit UPMDialog(QWidget *parent = 0);
    ~UPMDialog();

private:
    Ui::UPMDialog *ui;

private:
    void initListWidget();
    void addObj(const QString &str);
};

#endif // UPMDIALOG_H
