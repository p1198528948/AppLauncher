#include "appiconwidget.h"
#include "ui_appiconwidget.h"

/**
 * @details 模仿 app 图标
 * @brief AppIconWidget::AppIconWidget
 * @param parent
 */
AppIconWidget::AppIconWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AppIconWidget)
{
    ui->setupUi(this);

    // 初始化
    appName = ui->appName_label->text();
}

AppIconWidget::~AppIconWidget()
{
    delete ui;
}

void AppIconWidget::setAppName(QString name)
{
    this->appName = name;
    ui->appName_label->setText(name);
}

QString AppIconWidget::getAppName()
{
    return appName;
}

void AppIconWidget::setAppIcon(QString path)
{
    // 去除边框
    ui->app_pushButton->setFlat(true);

    // 设置图标
    ui->app_pushButton->setIcon(QIcon(path));
}

void AppIconWidget::on_app_pushButton_clicked()
{
    qDebug() << appName;
}
