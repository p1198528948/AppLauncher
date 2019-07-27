#include "custommadelistviewdialog.h"
#include "ui_custommadelistviewdialog.h"

CustomMadeListViewDialog::CustomMadeListViewDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CustomMadeListViewDialog)
{
    ui->setupUi(this);
    this->setWindowTitle(tr("定制ListView"));

    // 初始化 图标对应路径
    icons.insert
            (tr("支付宝"),
                 ":/res/Alipay.png");

    // 设置排版样式
    ui->listWidget->setViewMode(QListView::IconMode);

    // 去掉外框
    ui->listWidget->setFrameShape(QListWidget::NoFrame);

    for(int i=0; i<3; i++)
    {
        // 1.为了测试 默认添加几个在ListView上
        QListWidgetItem *item = new QListWidgetItem();
        item->setSizeHint(QSize(100, 100));
        ui->listWidget->addItem(item);

        // 2.在该item上放置你自定义的控件
        AppIconWidget *alipayWidget = new AppIconWidget();
        QString appName = tr("支付宝");
        alipayWidget->setAppIcon(icons.value(appName));
        alipayWidget->setAppName(appName);
        ui->listWidget->setItemWidget(item, alipayWidget);
    }
}

CustomMadeListViewDialog::~CustomMadeListViewDialog()
{
    delete ui;
}
