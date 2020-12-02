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
#include <QPushButton>
#include <QString>
#include <QValidator>
#include <QMessageBox>
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

void slotWidgetVirement();
void Retirer();
void commanderUnCheque();
void slotWidgetDebiter();
void slotWidgetRetour();
void slotWidgetCrediter();
void slotCrediter();
void slotVirement();
void slotDebiter();
void slotCmr();
void slotCmdChequier();
private:
 double Solde = 800.00;
 QString RIB = "FR76XXXXXXXXXXXXXXXXXXXX456546";
 QString Nom = "Thavan";
 QString Prenom = "Prasanth";
 QString nCompte= "000211255654";
 double soldeComptes[3] = {500 ,200, 700};
Ui::Widget *ui;
   QVBoxLayout *mainLayoutW = new QVBoxLayout;
   QWidget *Ui = new QWidget;
   QLabel *test[3];
   QStackedLayout* opLayout =new QStackedLayout;;
   QPushButton* retourAuPrincipal[3] ;

   QWidget *Virement = new QWidget;
   QLineEdit* montant = new QLineEdit;
   QGroupBox* groupSaisie = new QGroupBox("Saisir Le montant");
   QGridLayout* saisieLayout= new QGridLayout;
   QPushButton* effectuerLeVirement = new QPushButton("Effectuer Le Virement");
   QGridLayout* saisieSelect = new QGridLayout;
   QGroupBox* selectGroup = new QGroupBox;
   QComboBox* selectCompteADebiter = new QComboBox;

   QGridLayout *Vlayout = new QGridLayout;

   QWidget *Crediter = new QWidget;
   QLineEdit *credSommeSaisie = new QLineEdit;
   QGridLayout *credLayout = new QGridLayout;
   QPushButton *boutonCrediter = new QPushButton("Crediter");
   QGroupBox *saisieCredit= new QGroupBox("Entrez La Somme a ajouter");
   QGridLayout *creSaisieLayout = new QGridLayout;

   QWidget *Debiter = new QWidget;
   QGridLayout *debLayout = new QGridLayout;
   QGridLayout *mainDebLayout = new QGridLayout;
   QPushButton *boutonDebiter = new QPushButton("Debiter");
   QLineEdit *debSommeSaisie = new QLineEdit;
   QGroupBox *groupDebiter= new QGroupBox("Entrez La Somme a Retirer");



};
#endif // WIDGET_H
