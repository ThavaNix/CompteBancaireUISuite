#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
 //   this->setMinimumHeight(365);
 //   this->setMinimumWidth(335);
    QVBoxLayout *mainLayoutW = new QVBoxLayout;

    opLayout = new QStackedLayout;

    QWidget *Ui = new QWidget;

    ui->setupUi(Ui);
    Ui->setMinimumWidth(336);
    Ui->setMinimumHeight(366);

  //   connect(pageComboBox, SIGNAL(activated(int)),opLayout, SLOT(setCurrentIndex(int)));


    ///////////////////////////////// Virement ////////////////////////////////////////////////
    QWidget *Virement = new QWidget;
    QLabel *test[3];
    test[0] = new QLabel("A Debiter");
    test[1] = new QLabel("A Verser");
    test[2] = new QLabel("Saisir Le mont");
    QLineEdit* montant = new QLineEdit;
    QGroupBox* groupSaisie = new QGroupBox("Saisir Le montant");
    QGridLayout* saisieLayout= new QGridLayout;
    QPushButton* effectuerLeVirement = new QPushButton("Effectuer Le Virement");
    QPushButton* retourAuPrincipal = new QPushButton("<- Retour");
    retourAuPrincipal->setMaximumWidth(60);
    effectuerLeVirement->setMaximumHeight(80);
    saisieLayout->addWidget(montant , 0 ,  0 , 4 , 4 );
    saisieLayout->addWidget(effectuerLeVirement , 2 ,  0, 4 , 4 );
    groupSaisie->setLayout(saisieLayout);
    QGridLayout *Vlayout = new QGridLayout;
    static float soldeComptes[3] = {500 ,200, 700};
    QComboBox* selectCompteADebiter = new QComboBox;
    selectCompteADebiter->addItem("Compte a : " + QString::number(soldeComptes[0]));
    selectCompteADebiter->addItem("Compte b : " + QString::number(soldeComptes[1]));
    selectCompteADebiter->addItem("Compte c : " + QString::number(soldeComptes[2]));
    QComboBox* selectCompteAVerser = new QComboBox;
    selectCompteAVerser->addItem("Compte a : " + QString::number(soldeComptes[0]));
    selectCompteAVerser->addItem("Compte b : " + QString::number(soldeComptes[1]));
    selectCompteAVerser->addItem("Compte c : " + QString::number(soldeComptes[2]));
    Vlayout->addWidget(retourAuPrincipal , 0 , 0 , 1 , 1);
    Vlayout->addWidget(test[0], 1 , 0);
    Vlayout->addWidget(selectCompteADebiter , 1 , 1);
    Vlayout->addWidget(test[1], 2 , 0);
    Vlayout->addWidget(selectCompteAVerser , 2 ,1);
    Vlayout->addWidget(groupSaisie, 3 ,0 , 2 , 2);
    Virement->setLayout(Vlayout);

    /////////////////////////////////////////////////////////////////////////////////////////////




    QWidget *Debiter = new QWidget;

    opLayout->addWidget(Ui);
    opLayout->addWidget(Virement);
    opLayout->addWidget(Debiter);
    mainLayoutW->addLayout(opLayout , 0);
    //mainLayoutW->addWidget(Ui);
    setLayout(mainLayoutW);
    connect(ui->operation1, SIGNAL(clicked()) , this , SLOT(Virement()));


}

Widget::~Widget()
{
    delete ui;
}
void Widget::Virement(){
   opLayout->setCurrentIndex(1);

}

void Widget::commanderUnCheque(){

}
void Widget::Retirer(){

}
