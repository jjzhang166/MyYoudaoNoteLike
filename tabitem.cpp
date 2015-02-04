#include "tabitem.h"
#include "ui_tabitem.h"

tabItem::tabItem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tabItem)
{
    ui->setupUi(this);
}

tabItem::~tabItem()
{
    delete ui;
}
