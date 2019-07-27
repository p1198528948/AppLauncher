#include "upmdialog.h"
#include "ui_upmdialog.h"

UPMDialog::UPMDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UPMDialog)
{
    ui->setupUi(this);
}

UPMDialog::~UPMDialog()
{
    delete ui;
}

void UPMDialog::initListWidget()
{

}

void UPMDialog::addObj(const QString &str)
{

}
