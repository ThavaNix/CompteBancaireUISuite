#include "mainwindow.h"


MainWindow::MainWindow(QWidget *parent) : QWidget(parent)
{

QGroupBox *echoGroup = new QGroupBox;

PaveNum = new QGroupBox("Utilisez Le Pavé Numerique Pour le MDP");
PaveNum->setStyleSheet("font-size : 14px ; color : blue;");

QLabel *echoLabel = new QLabel(tr("Connexion :"));
loginAlert = new QLabel;
loginAlert->setVisible(false);

idChamp = new QLineEdit;
idChamp->setMaxLength(9);
idChamp->setValidator(new QIntValidator(0, 999999999, this));
mdpChamp = new QLineEdit;
mdpChamp->setMaxLength(4);
mdpChamp->setValidator(new QIntValidator(0, 999999999, this));
mdpChamp->setDisabled(true);


echoMdp = new QCheckBox("Afficher");
echoMdp->setCheckState(Qt::Unchecked);
idChamp->setStyleSheet("*{color : black}");
mdpChamp->setStyleSheet("*{color : black}");

idChamp->setPlaceholderText("ID");

mdpChamp->setPlaceholderText("MotDePasse");
mdpChamp->setEchoMode(QLineEdit::Password);


QGridLayout *echoLayout = new QGridLayout;

echoLayout->addWidget(echoLabel, 0, 0);
echoLayout->addWidget(idChamp, 1, 0, 1, 2);
echoLayout->addWidget(mdpChamp, 2, 0, 1, 2);
echoLayout->addWidget(echoMdp,2 , 3);



echoGroup->setLayout(echoLayout);
echoGroup->setStyleSheet("font-size : 14px;");

QGridLayout *layout = new QGridLayout;
layout->addWidget(echoGroup, 0, 0);
layout->addWidget(PaveNum , 1 , 0);

PaveNum->setVisible(false);
setLayout(layout);
setWindowTitle(tr("Fenetre de connexion"));


QGridLayout *pavNum = new QGridLayout;

pavNum->addWidget(bConn , 3 , 2);
pavNum->addWidget(bClose , 3 , 0);
pavNum->addWidget(loginAlert ,4 ,1);

for (int i = 0; i < 10; ++i) {

    pavButtons[i] = new QPushButton(QString::number(i), this);
    connect(pavButtons[i], SIGNAL(clicked()), this, SLOT(buttonClicked()));
 }
for (int i = 0; i < 9; ++i){
   pavNum->addWidget(pavButtons[i + 1], i / 3, i % 3);
}

pavNum->addWidget(pavButtons[0], 3, 1);
connect( bConn , SIGNAL(clicked()),this, SLOT(slotbConn()));

connect( bClose , SIGNAL(clicked()),this, SLOT(slotbClose()));
connect( echoMdp , SIGNAL(clicked()),this, SLOT(afficherMDP()));


connect(idChamp,SIGNAL(textChanged(QString)),this,SLOT(idVerification()));
connect(mdpChamp,SIGNAL(textChanged(QString)),this,SLOT(mdpVerification()));



bConn->setStyleSheet(" background-color: #5294e2  ; color : black");
bClose->setStyleSheet("background-color: #853934 ; color : black");
PaveNum->setLayout(pavNum);

}



void MainWindow::buttonClicked()
 {
    QPushButton *button = (QPushButton *)sender();
       QString num_button = button->text();
       if(mdpChamp->isEnabled() == true)
         {
             mdpChamp->setText(mdpChamp->text()+num_button);
         }
}

void MainWindow::afficherMDP()
{
    if(!echoMdp->isChecked() == true){
     mdpChamp->setEchoMode(QLineEdit::Password);
}
    else if (echoMdp->isChecked() == true){
     mdpChamp->setEchoMode(QLineEdit::Normal);
    }
}

void MainWindow::idVerification(){
    if(idChamp->text()=="000000000")
    {
        idChamp->setDisabled(true);
        mdpChamp->setDisabled(false);
       PaveNum->setVisible(true);
       }

}

bool MainWindow::slotbConn(){
    if (mdpChamp->text() == "0000")
        {
            loginAlert->setVisible(true);
            loginAlert->setText("Connexion Réussie");
            loginAlert->setStyleSheet("color:green");
            Widget *w = new Widget;
            w->show() ;
            this->hide();

        }
        else if (mdpChamp->text() != "0000"){

           loginAlert->setVisible(true);
          loginAlert->setText("Connexion Refuser" );
          loginAlert->setStyleSheet("color:red");
          mdpChamp->clear();
    }
    return 1;

}



void MainWindow::slotbClose(){
this->close();
}
void MainWindow::mdpVerification(){
//   int essaies = 3;
//   if (slotbConn() == 1){
//        while(mdpChamp->text()!="0000" && essaies<=3){
//                essaies++;
//                if(essaies == 3){
//                    this->close();
//                }
//        }
//    }
}





