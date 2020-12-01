#include "widget.h"
#include "ui_widget.h"
#include <QGroupBox>
#include <QGridLayout>
#include <QStackedLayout>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    this->setMinimumHeight(365);
    this->setMinimumWidth(335);


    QWidget *Ui = new QWidget;
    ui->setupUi(Ui);
    QStackedLayout *mainLayoutW = new QStackedLayout;
    Ui->setContentsMargins(0,0,0,0);
    mainLayoutW->addWidget(Ui);
    setLayout(mainLayoutW);

}

Widget::~Widget()
{
    delete ui;
}
void Widget::Virement(){

}

void Widget::commanderUnCheque(){

}
void Widget::Retirer(){

}
