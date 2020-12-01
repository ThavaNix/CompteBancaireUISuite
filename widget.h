#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QGroupBox>
#include <QGridLayout>
#include <QStackedLayout>
#include <QVBoxLayout>
#include <QComboBox>
#include <QLabel>
#include <QLineEdit>
QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots :

void Virement();
void Retirer();
void commanderUnCheque();

private:
    Ui::Widget *ui;
    double Solde = 80.00;
   QStackedLayout* opLayout;

};
#endif // WIDGET_H
