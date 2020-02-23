#include "birthitem.h"
#include <QLayout>

birthitem::birthitem(QWidget *parent) :
    QLabel(parent)
{
    QFont font;
    font.setPixelSize(40);
    name = new QLabel;
    name->setFont(font);
    name->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
    name->setFixedWidth(180);

    font.setPixelSize(20);
    nextbirth = new QLabel;
    nextbirth->setFont(font);
    nextbirth->setAlignment(Qt::AlignLeft|Qt::AlignBottom);

    days = new QLabel;
    days->setFont(font);
    days->setAlignment(Qt::AlignLeft);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(nextbirth);
    layout->addWidget(days);
    layout->setMargin(3);

    QHBoxLayout *mainlayout = new QHBoxLayout(this);
    mainlayout->addWidget(name);
    mainlayout->addLayout(layout);


    daysnum=0;
    this->setFixedHeight(100);
    setnormal();

}

void birthitem::mouseReleaseEvent(QMouseEvent *evt)
{
    emit clicked(this);
}

void birthitem::setnormal()
{
    name->setStyleSheet("color:rgb(255,238,3)");
    nextbirth->setStyleSheet("color:rgb(255,238,3)");
    days->setStyleSheet("color:rgb(255,238,3)");
    this->setStyleSheet("background-color:rgb(223,126,4)");
}

void birthitem::setselect()
{
    name->setStyleSheet("color:white");
    nextbirth->setStyleSheet("color:white");
    days->setStyleSheet("color:white");
    this->setStyleSheet("background-color:rgb(108,41,20)");
}
