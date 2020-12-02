#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
 //   this->setMinimumHeight(365);
 //   this->setMinimumWidth(335);
///////////////////////// Page Principale //////////////////////////////////
    ui->setupUi(Ui);
    ui->soldeCompte->setText("Solde : " + QString::number(Solde));
    Ui->setMinimumWidth(336);
    Ui->setMinimumHeight(366);

///////////////////////////////////////////////////////////////////////////////


    //   connect(pageComboBox, SIGNAL(activated(int)),opLayout, SLOT(setCurrentIndex(int)));
    for (int x =0; x<3 ;x++ ) {
        retourAuPrincipal[x] = new QPushButton("<- Retour");
        connect(retourAuPrincipal[x], SIGNAL(clicked()) , this , SLOT(slotWidgetRetour()));

    }

    ///////////////////////////////// Virement ////////////////////////////////////////////////

    test[0] = new QLabel("A Debiter");
    test[1] = new QLabel("A Verser");
    test[2] = new QLabel("Saisir Le mont");


    selectCompteADebiter->addItem("Livret  a : " + QString::number(soldeComptes[0]));
    selectCompteADebiter->addItem("Livret Jeune : " + QString::number(soldeComptes[1]));
    selectCompteADebiter->addItem("Livret X : " + QString::number(soldeComptes[2]));


    saisieSelect->addWidget(retourAuPrincipal[0] , 0 , 0);
    saisieSelect->addWidget(test[0], 1 , 0);
    saisieSelect->addWidget(selectCompteADebiter , 1 , 1);
    //saisieSelect->addWidget(test[1], 2 , 0);
    //saisieSelect->addWidget(selectCompteAVerser , 2 ,1);
    selectGroup->setLayout(saisieSelect);

    effectuerLeVirement->setMaximumHeight(70);
    saisieLayout->addWidget(montant , 0 ,  0 , 4 , 4 );
    saisieLayout->addWidget(effectuerLeVirement , 2 ,  0, 4 , 4 );
    groupSaisie->setLayout(saisieLayout);

    Vlayout->addWidget(selectGroup , 0 , 0 , 2 , 4);
    Vlayout->addWidget(groupSaisie, 3 ,0 , 2 , 4);
    Virement->setLayout(Vlayout);
    connect(effectuerLeVirement, SIGNAL(clicked()) , this , SLOT(slotVirement()));


    /////////////////////////////////////////////////////////////////////////////////////////////

   /////////////////////////////////// Crediter ////////////////////////////////////

    creLayout->addWidget(retourAuPrincipal[1] , 0 , 0 , 1 ,1);
    creSaisieLayout->addWidget(creSomme , 0, 0  , 1 , 5);
    creSomme->setValidator(new QIntValidator(0, 999999999, this));
    creSaisieLayout->addWidget(boutonCrediter, 1 , 0  , 1 , 5 );
    boutonCrediter->setMinimumHeight(70);
    saisieCredit->setLayout(creSaisieLayout);
    creLayout->addWidget(saisieCredit , 1 , 0  , 1 , 5);
    Crediter->setLayout(creLayout);
    connect(boutonCrediter, SIGNAL(clicked()) , this , SLOT(slotCrediter()));

   /////////////////////////////////////////////////////////////////////////////////////////////



    opLayout->addWidget(Ui);
    opLayout->addWidget(Virement);
    opLayout->addWidget(Crediter);
    mainLayoutW->addLayout(opLayout , 0);
    //mainLayoutW->addWidget(Ui);
    setLayout(mainLayoutW);
    connect(ui->virementBouton , SIGNAL(clicked()) , this , SLOT(slotWidgetVirement()));
    connect(ui->crediterBouton, SIGNAL(clicked()) , this , SLOT(slotWidgetCrediter()));




}

Widget::~Widget()
{
    delete ui;
}
void Widget::slotWidgetVirement(){
   opLayout->setCurrentIndex(1);




}
void Widget::slotCrediter( ){
    QString tmp = creSomme->text();
    double x = tmp.toDouble();
    this->Solde =  this->Solde - x ;
    ui->soldeCompte->setText("Solde : " + QString::number(Solde));
    creSomme->clear();
    opLayout->setCurrentIndex(0);


}
void Widget::slotWidgetCrediter(){
   opLayout->setCurrentIndex(2);

}
void Widget::slotWidgetDebiter(){
   opLayout->setCurrentIndex(3);

}

void Widget::commanderUnCheque(){

}
void Widget::slotWidgetRetour(){
    opLayout->setCurrentIndex(0);
}
void Widget::slotVirement(){

    soldeComptes[selectCompteADebiter->currentIndex()] = soldeComptes[selectCompteADebiter->currentIndex()] - montant->text().toDouble();
    Solde = Solde + montant->text().toDouble();
    ui->soldeCompte->setText("Solde : " + QString::number(Solde));
    selectCompteADebiter->clear();
    selectCompteADebiter->addItem("Livret  a : " + QString::number(soldeComptes[0]));
    selectCompteADebiter->addItem("Livret Jeune : " + QString::number(soldeComptes[1]));
    selectCompteADebiter->addItem("Livret X : " + QString::number(soldeComptes[2]));

    montant->clear();
    opLayout->setCurrentIndex(0);


}
void Widget::Retirer(){

}
