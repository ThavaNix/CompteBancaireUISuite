/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGroupBox *mainGroup;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *mainLayout;
    QGroupBox *interfaceGroup;
    QGroupBox *operationGauche;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *virementBouton;
    QPushButton *crediterBouton;
    QPushButton *debiterBouton;
    QPushButton *cmrBouton;
    QPushButton *cmdChequier;
    QGroupBox *groupPerso;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *nCompte;
    QLabel *prenomCompte;
    QLabel *nomCompte;
    QLabel *soldeCompte;
    QGroupBox *historique;
    QWidget *formLayoutWidget;
    QFormLayout *historiqueLayout;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(372, 391);
        Widget->setMaximumSize(QSize(16777215, 16777215));
        mainGroup = new QGroupBox(Widget);
        mainGroup->setObjectName(QString::fromUtf8("mainGroup"));
        mainGroup->setGeometry(QRect(0, 0, 341, 361));
        mainGroup->setStyleSheet(QString::fromUtf8(""));
        horizontalLayoutWidget = new QWidget(mainGroup);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(0, 20, 341, 341));
        mainLayout = new QHBoxLayout(horizontalLayoutWidget);
        mainLayout->setObjectName(QString::fromUtf8("mainLayout"));
        mainLayout->setContentsMargins(0, 0, 0, 0);
        interfaceGroup = new QGroupBox(horizontalLayoutWidget);
        interfaceGroup->setObjectName(QString::fromUtf8("interfaceGroup"));
        operationGauche = new QGroupBox(interfaceGroup);
        operationGauche->setObjectName(QString::fromUtf8("operationGauche"));
        operationGauche->setGeometry(QRect(0, 0, 141, 321));
        verticalLayoutWidget = new QWidget(operationGauche);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 20, 141, 321));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 9);
        virementBouton = new QPushButton(verticalLayoutWidget);
        virementBouton->setObjectName(QString::fromUtf8("virementBouton"));
        virementBouton->setMinimumSize(QSize(0, 45));
        virementBouton->setBaseSize(QSize(16, 5));

        verticalLayout->addWidget(virementBouton);

        crediterBouton = new QPushButton(verticalLayoutWidget);
        crediterBouton->setObjectName(QString::fromUtf8("crediterBouton"));
        crediterBouton->setMinimumSize(QSize(0, 45));

        verticalLayout->addWidget(crediterBouton);

        debiterBouton = new QPushButton(verticalLayoutWidget);
        debiterBouton->setObjectName(QString::fromUtf8("debiterBouton"));
        debiterBouton->setMinimumSize(QSize(0, 45));

        verticalLayout->addWidget(debiterBouton);

        cmrBouton = new QPushButton(verticalLayoutWidget);
        cmrBouton->setObjectName(QString::fromUtf8("cmrBouton"));
        cmrBouton->setMinimumSize(QSize(0, 45));

        verticalLayout->addWidget(cmrBouton);

        cmdChequier = new QPushButton(verticalLayoutWidget);
        cmdChequier->setObjectName(QString::fromUtf8("cmdChequier"));
        cmdChequier->setMinimumSize(QSize(0, 45));

        verticalLayout->addWidget(cmdChequier);

        groupPerso = new QGroupBox(interfaceGroup);
        groupPerso->setObjectName(QString::fromUtf8("groupPerso"));
        groupPerso->setGeometry(QRect(150, 0, 191, 341));
        gridLayoutWidget = new QWidget(groupPerso);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(0, 20, 201, 390));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        nCompte = new QLabel(gridLayoutWidget);
        nCompte->setObjectName(QString::fromUtf8("nCompte"));
        nCompte->setMargin(1);

        gridLayout->addWidget(nCompte, 1, 0, 1, 1);

        prenomCompte = new QLabel(gridLayoutWidget);
        prenomCompte->setObjectName(QString::fromUtf8("prenomCompte"));

        gridLayout->addWidget(prenomCompte, 3, 0, 1, 1);

        nomCompte = new QLabel(gridLayoutWidget);
        nomCompte->setObjectName(QString::fromUtf8("nomCompte"));
        nomCompte->setMargin(1);

        gridLayout->addWidget(nomCompte, 2, 0, 1, 1);

        soldeCompte = new QLabel(gridLayoutWidget);
        soldeCompte->setObjectName(QString::fromUtf8("soldeCompte"));

        gridLayout->addWidget(soldeCompte, 4, 0, 1, 1);

        historique = new QGroupBox(gridLayoutWidget);
        historique->setObjectName(QString::fromUtf8("historique"));
        historique->setMinimumSize(QSize(0, 300));
        formLayoutWidget = new QWidget(historique);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 20, 191, 211));
        historiqueLayout = new QFormLayout(formLayoutWidget);
        historiqueLayout->setObjectName(QString::fromUtf8("historiqueLayout"));
        historiqueLayout->setContentsMargins(0, 0, 0, 0);

        gridLayout->addWidget(historique, 5, 0, 1, 1);


        mainLayout->addWidget(interfaceGroup);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        mainGroup->setTitle(QApplication::translate("Widget", "Mon Compte", nullptr));
        interfaceGroup->setTitle(QString());
        operationGauche->setTitle(QApplication::translate("Widget", "Operations", nullptr));
        virementBouton->setText(QApplication::translate("Widget", "Virement", nullptr));
        crediterBouton->setText(QApplication::translate("Widget", "Crediter", nullptr));
        debiterBouton->setText(QApplication::translate("Widget", "Debiter", nullptr));
        cmrBouton->setText(QApplication::translate("Widget", "Consulter Mon Rib", nullptr));
        cmdChequier->setText(QApplication::translate("Widget", "Cmd un Chequier", nullptr));
        groupPerso->setTitle(QApplication::translate("Widget", "Info Personnel", nullptr));
        nCompte->setText(QString());
        prenomCompte->setText(QString());
        nomCompte->setText(QString());
        soldeCompte->setText(QString());
        historique->setTitle(QApplication::translate("Widget", "Historique", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
