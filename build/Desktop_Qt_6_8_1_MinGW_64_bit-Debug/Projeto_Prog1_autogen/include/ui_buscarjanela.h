/********************************************************************************
** Form generated from reading UI file 'buscarjanela.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCARJANELA_H
#define UI_BUSCARJANELA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_BuscarJanela
{
public:
    QLabel *label;

    void setupUi(QDialog *BuscarJanela)
    {
        if (BuscarJanela->objectName().isEmpty())
            BuscarJanela->setObjectName("BuscarJanela");
        BuscarJanela->resize(732, 535);
        label = new QLabel(BuscarJanela);
        label->setObjectName("label");
        label->setGeometry(QRect(330, 240, 63, 20));

        retranslateUi(BuscarJanela);

        QMetaObject::connectSlotsByName(BuscarJanela);
    } // setupUi

    void retranslateUi(QDialog *BuscarJanela)
    {
        BuscarJanela->setWindowTitle(QCoreApplication::translate("BuscarJanela", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("BuscarJanela", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BuscarJanela: public Ui_BuscarJanela {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCARJANELA_H
