#ifndef APPICONWIDGET_H
#define APPICONWIDGET_H

#include <QWidget>
#include <QDebug>

// 支付宝
// D:/CProject/QListWidget_Sample-master/res/Alipay.png

namespace Ui {
class AppIconWidget;
}

class AppIconWidget : public QWidget
{
    Q_OBJECT

public:
    explicit AppIconWidget(QWidget *parent = 0);
    ~AppIconWidget();

private slots:
    void on_app_pushButton_clicked();

public:
    void setAppName(QString name);
    QString getAppName();
    void setAppIcon(QString path);

private:
    Ui::AppIconWidget *ui;
    QString appName;

};

#endif // APPICONWIDGET_H
