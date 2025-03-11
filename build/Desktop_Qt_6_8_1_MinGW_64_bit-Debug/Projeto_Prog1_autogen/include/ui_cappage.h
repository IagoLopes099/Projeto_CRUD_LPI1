/********************************************************************************
** Form generated from reading UI file 'cappage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPPAGE_H
#define UI_CAPPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CapPage
{
public:
    QStackedWidget *Janelas;
    QWidget *HomePageCp;
    QTableWidget *listarMembrosCP;
    QLineEdit *NomeBuscarCP;
    QPushButton *BuscarButtonCP;
    QPushButton *AtualizarButtonCP;
    QPushButton *EditarButtonCP;
    QPushButton *DeletarButtonCP;
    QLineEdit *SubequipeBuscarCp;
    QWidget *RelatoriosPageCP;
    QFrame *frameCapPage;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *homeButtonCp;
    QSpacerItem *verticalSpacer_2;
    QPushButton *RelatorioButtonCP;
    QSpacerItem *verticalSpacer_4;
    QPushButton *AtividadesButtonCP;
    QSpacerItem *verticalSpacer_5;

    void setupUi(QDialog *CapPage)
    {
        if (CapPage->objectName().isEmpty())
            CapPage->setObjectName("CapPage");
        CapPage->resize(1300, 680);
        CapPage->setMinimumSize(QSize(1300, 680));
        CapPage->setMaximumSize(QSize(1300, 680));
        CapPage->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background-color: rgba(45,45,45,255);\n"
"}"));
        Janelas = new QStackedWidget(CapPage);
        Janelas->setObjectName("Janelas");
        Janelas->setGeometry(QRect(210, 10, 1071, 651));
        Janelas->setStyleSheet(QString::fromUtf8("background-color:none;"));
        HomePageCp = new QWidget();
        HomePageCp->setObjectName("HomePageCp");
        listarMembrosCP = new QTableWidget(HomePageCp);
        listarMembrosCP->setObjectName("listarMembrosCP");
        listarMembrosCP->setGeometry(QRect(30, 70, 1011, 581));
        listarMembrosCP->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"	background-color: rgba(30,30,30,255);\n"
"	border-radius: 10px;\n"
"\n"
"}"));
        NomeBuscarCP = new QLineEdit(HomePageCp);
        NomeBuscarCP->setObjectName("NomeBuscarCP");
        NomeBuscarCP->setGeometry(QRect(650, 10, 321, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Open Sans 61")});
        font.setPointSize(11);
        NomeBuscarCP->setFont(font);
        NomeBuscarCP->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	font-family: Open Sans Light;\n"
"	border: 2px solid rgb(37, 39, 48);\n"
"	border-radius: 16px;\n"
"	color: #FFF;\n"
"	padding-left: 20px;\n"
"	padding-right: 20px; \n"
"	background-color: rgb(34, 36, 44);\n"
"}\n"
"\n"
"QLiteEdit:hover {\n"
"	border: 2px solid rgb(48, 50, 62);\n"
"}\n"
"\n"
"QLiteEdit:focus {\n"
"	border: 2px solid rgb(85, 170, 255);\n"
"	background-color: rgb(43, 45, 56);\n"
"}\n"
""));
        NomeBuscarCP->setMaxLength(200);
        NomeBuscarCP->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        NomeBuscarCP->setClearButtonEnabled(false);
        BuscarButtonCP = new QPushButton(HomePageCp);
        BuscarButtonCP->setObjectName("BuscarButtonCP");
        BuscarButtonCP->setGeometry(QRect(980, 10, 61, 41));
        BuscarButtonCP->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	/*color: #FFF;*/\n"
"	border-radius: 10px;\n"
"	background-color: rgba(60,60,60,255);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	border-radius: 10px;\n"
"	background-color: rgba(78,78,79,255);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-radius: 10px;\n"
"	background-color: rgba(45,45,45,255);\n"
"	\n"
"}\n"
"\n"
""));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/debug/buscarWhite.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        BuscarButtonCP->setIcon(icon);
        BuscarButtonCP->setIconSize(QSize(30, 30));
        AtualizarButtonCP = new QPushButton(HomePageCp);
        AtualizarButtonCP->setObjectName("AtualizarButtonCP");
        AtualizarButtonCP->setGeometry(QRect(30, 10, 61, 41));
        AtualizarButtonCP->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	/*color: #FFF;*/\n"
"	border-radius: 10px;\n"
"	background-color: rgba(60,60,60,255);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	border-radius: 10px;\n"
"	background-color: rgba(78,78,79,255);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-radius: 10px;\n"
"	background-color: rgba(45,45,45,255);\n"
"	\n"
"}\n"
"\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/debug/atualizarWhite.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        AtualizarButtonCP->setIcon(icon1);
        AtualizarButtonCP->setIconSize(QSize(30, 30));
        EditarButtonCP = new QPushButton(HomePageCp);
        EditarButtonCP->setObjectName("EditarButtonCP");
        EditarButtonCP->setGeometry(QRect(110, 10, 101, 41));
        EditarButtonCP->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #FFF;\n"
"	border-radius: 10px;\n"
"	background-color: rgba(60,60,60,255);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	border-radius: 10px;\n"
"	background-color: rgba(78,78,79,255);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-radius: 10px;\n"
"	background-color: rgba(45,45,45,255);\n"
"	\n"
"}\n"
"\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/debug/editarWhite.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        EditarButtonCP->setIcon(icon2);
        EditarButtonCP->setIconSize(QSize(30, 30));
        DeletarButtonCP = new QPushButton(HomePageCp);
        DeletarButtonCP->setObjectName("DeletarButtonCP");
        DeletarButtonCP->setGeometry(QRect(230, 10, 191, 41));
        DeletarButtonCP->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	color: #FFF;\n"
"	border-radius: 10px;\n"
"	background-color: rgba(60,60,60,255);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	border-radius: 10px;\n"
"	background-color: rgba(78,78,79,255);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-radius: 10px;\n"
"	background-color: rgba(45,45,45,255);\n"
"	\n"
"}\n"
"\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/debug/promocaorebaixamentoWhite.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        DeletarButtonCP->setIcon(icon3);
        DeletarButtonCP->setIconSize(QSize(24, 30));
        SubequipeBuscarCp = new QLineEdit(HomePageCp);
        SubequipeBuscarCp->setObjectName("SubequipeBuscarCp");
        SubequipeBuscarCp->setGeometry(QRect(440, 10, 191, 41));
        SubequipeBuscarCp->setFont(font);
        SubequipeBuscarCp->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	font-family: Open Sans Light;\n"
"	border: 2px solid rgb(37, 39, 48);\n"
"	border-radius: 16px;\n"
"	color: #FFF;\n"
"	padding-left: 20px;\n"
"	padding-right: 20px; \n"
"	background-color: rgb(34, 36, 44);\n"
"}\n"
"\n"
"QLiteEdit:hover {\n"
"	border: 2px solid rgb(48, 50, 62);\n"
"}\n"
"\n"
"QLiteEdit:focus {\n"
"	border: 2px solid rgb(85, 170, 255);\n"
"	background-color: rgb(43, 45, 56);\n"
"}\n"
""));
        SubequipeBuscarCp->setMaxLength(200);
        SubequipeBuscarCp->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        SubequipeBuscarCp->setClearButtonEnabled(false);
        Janelas->addWidget(HomePageCp);
        RelatoriosPageCP = new QWidget();
        RelatoriosPageCP->setObjectName("RelatoriosPageCP");
        Janelas->addWidget(RelatoriosPageCP);
        frameCapPage = new QFrame(CapPage);
        frameCapPage->setObjectName("frameCapPage");
        frameCapPage->setGeometry(QRect(20, 10, 191, 651));
        frameCapPage->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: rgba(30,30,30,255);\n"
"	border-radius: 20px;\n"
"}\n"
"\n"
"QPushButton{\n"
"	color: #FFF;\n"
"	border-radius: 10px;\n"
"	background-color: rgba(13,117,190,255);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	border-radius: 10px;\n"
"	background-color: rgb(85,150,190);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-radius: 10px;\n"
"	background-color: rgb(28,81,115);\n"
"	\n"
"}\n"
""));
        frameCapPage->setFrameShape(QFrame::Shape::StyledPanel);
        frameCapPage->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frameCapPage);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer);

        homeButtonCp = new QPushButton(frameCapPage);
        homeButtonCp->setObjectName("homeButtonCp");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/debug/home.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        homeButtonCp->setIcon(icon4);
        homeButtonCp->setIconSize(QSize(40, 40));

        verticalLayout->addWidget(homeButtonCp);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer_2);

        RelatorioButtonCP = new QPushButton(frameCapPage);
        RelatorioButtonCP->setObjectName("RelatorioButtonCP");
        RelatorioButtonCP->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 34px;\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/debug/grafico.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        RelatorioButtonCP->setIcon(icon5);
        RelatorioButtonCP->setIconSize(QSize(26, 26));

        verticalLayout->addWidget(RelatorioButtonCP);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer_4);

        AtividadesButtonCP = new QPushButton(frameCapPage);
        AtividadesButtonCP->setObjectName("AtividadesButtonCP");
        AtividadesButtonCP->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 34px;\n"
"}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/debug/atividades.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        AtividadesButtonCP->setIcon(icon6);
        AtividadesButtonCP->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(AtividadesButtonCP);

        verticalSpacer_5 = new QSpacerItem(20, 315, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);


        retranslateUi(CapPage);

        Janelas->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CapPage);
    } // setupUi

    void retranslateUi(QDialog *CapPage)
    {
        CapPage->setWindowTitle(QCoreApplication::translate("CapPage", "Formula UFPB", nullptr));
        NomeBuscarCP->setPlaceholderText(QCoreApplication::translate("CapPage", "Nome usu\303\241rio", nullptr));
        BuscarButtonCP->setText(QString());
        AtualizarButtonCP->setText(QString());
        EditarButtonCP->setText(QCoreApplication::translate("CapPage", "Editar", nullptr));
        DeletarButtonCP->setText(QCoreApplication::translate("CapPage", " Promove/ Rebaixar", nullptr));
        SubequipeBuscarCp->setPlaceholderText(QCoreApplication::translate("CapPage", "Sub-equipe", nullptr));
        homeButtonCp->setText(QCoreApplication::translate("CapPage", "In\303\255cio", nullptr));
        RelatorioButtonCP->setText(QCoreApplication::translate("CapPage", "Relat\303\263rios", nullptr));
        AtividadesButtonCP->setText(QCoreApplication::translate("CapPage", "Atividades", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CapPage: public Ui_CapPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPPAGE_H
