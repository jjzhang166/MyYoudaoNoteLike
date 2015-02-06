#include "collapseview.h"
#include "ui_collapseview.h"

#include <QDebug>

CollapseView::CollapseView(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CollapseView)
{
    ui->setupUi(this);

    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(butClick()));

}

CollapseView::~CollapseView()
{
    delete ui;
}

void CollapseView::butClick()
{
    ui->listWidget->setHidden(!ui->listWidget->isHidden());
    qDebug()<<"xxx";
}
