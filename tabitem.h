#ifndef TABITEM_H
#define TABITEM_H

#include <QWidget>

namespace Ui {
class tabItem;
}

class tabItem : public QWidget
{
    Q_OBJECT

public:
    explicit tabItem(QWidget *parent = 0);
    ~tabItem();

private:
    Ui::tabItem *ui;
};

#endif // TABITEM_H
