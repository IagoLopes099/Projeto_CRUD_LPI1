/********************************************************************************
** Form generated from reading UI file 'editarJanela.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITARJANELA_H
#define UI_EDITARJANELA_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_BuscarJanela
{
public:
    QFrame *frameEditando;
    QLabel *NomeEditando_2;
    QLineEdit *cpfEditando;
    QLabel *NascimentoEditPage;
    QLabel *CPFEditando;
    QLineEdit *NomeEditando;
    QPushButton *EditarButton;
    QComboBox *generoEditando;
    QLabel *GeneroEditando;
    QLabel *SubequipeEditando;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *AdminCbEdit;
    QRadioButton *PowertrainCbEdit;
    QRadioButton *DinamicaCbEdit;
    QRadioButton *DrivetrainCbEdit;
    QRadioButton *EletricaCbEdit;
    QPushButton *cancelarEditButton;
    QLineEdit *EmailEdit;
    QLineEdit *telefoneEdit;
    QLabel *EmailEditando;
    QLabel *TelefoneEditando;
    QLineEdit *dataEditando;
    QLineEdit *UsuarioEditLine;
    QLabel *UsuarioEditando;
    QLineEdit *SenhaEditLine;
    QLabel *SenhaEditando;

    void setupUi(QDialog *BuscarJanela)
    {
        if (BuscarJanela->objectName().isEmpty())
            BuscarJanela->setObjectName("BuscarJanela");
        BuscarJanela->resize(950, 710);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BuscarJanela->sizePolicy().hasHeightForWidth());
        BuscarJanela->setSizePolicy(sizePolicy);
        BuscarJanela->setMinimumSize(QSize(950, 710));
        BuscarJanela->setMaximumSize(QSize(950, 710));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/debug/editarWhite.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        BuscarJanela->setWindowIcon(icon);
        BuscarJanela->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background-color: rgba(45,45,45,255);\n"
"}"));
        frameEditando = new QFrame(BuscarJanela);
        frameEditando->setObjectName("frameEditando");
        frameEditando->setGeometry(QRect(20, 20, 891, 671));
        frameEditando->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: rgba(30,30,30,255);\n"
"	border-radius: 20px;\n"
"}"));
        frameEditando->setFrameShape(QFrame::Shape::StyledPanel);
        frameEditando->setFrameShadow(QFrame::Shadow::Plain);
        NomeEditando_2 = new QLabel(frameEditando);
        NomeEditando_2->setObjectName("NomeEditando_2");
        NomeEditando_2->setGeometry(QRect(50, 20, 289, 40));
        NomeEditando_2->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        NomeEditando_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-family: Open Sans Light;\n"
"	font-size: 20px;\n"
"	color: #FFF;\n"
"	\n"
"}"));
        NomeEditando_2->setAlignment(Qt::AlignmentFlag::AlignJustify|Qt::AlignmentFlag::AlignVCenter);
        cpfEditando = new QLineEdit(frameEditando);
        cpfEditando->setObjectName("cpfEditando");
        cpfEditando->setGeometry(QRect(50, 170, 351, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Open Sans 61")});
        font.setPointSize(11);
        cpfEditando->setFont(font);
        cpfEditando->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	font-family: Open Sans Light;\n"
"	border: 2px solid rgb(37, 39, 48);\n"
"	border-radius: 16px;\n"
"	color: #FFF;\n"
"	padding-left: 20px;\n"
"	padding-right: 20px; \n"
"	background-color: rgb(34, 36, 44);\n"
"}"));
        cpfEditando->setMaxLength(14);
        NascimentoEditPage = new QLabel(frameEditando);
        NascimentoEditPage->setObjectName("NascimentoEditPage");
        NascimentoEditPage->setGeometry(QRect(50, 230, 289, 40));
        NascimentoEditPage->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-family: Open Sans Light;\n"
"	font-size: 20px;\n"
"	color: #FFF;\n"
"	\n"
"}"));
        CPFEditando = new QLabel(frameEditando);
        CPFEditando->setObjectName("CPFEditando");
        CPFEditando->setGeometry(QRect(50, 120, 289, 41));
        CPFEditando->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-family: Open Sans Light;\n"
"	font-size: 20px;\n"
"	color: #FFF;\n"
"	\n"
"}"));
        NomeEditando = new QLineEdit(frameEditando);
        NomeEditando->setObjectName("NomeEditando");
        NomeEditando->setGeometry(QRect(50, 70, 351, 41));
        NomeEditando->setFont(font);
        NomeEditando->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        NomeEditando->setMaxLength(200);
        NomeEditando->setClearButtonEnabled(false);
        EditarButton = new QPushButton(frameEditando);
        EditarButton->setObjectName("EditarButton");
        EditarButton->setGeometry(QRect(250, 590, 171, 51));
        EditarButton->setStyleSheet(QString::fromUtf8("/*QPushButton{\n"
"	border-radius: 10px;\n"
"	background-color: rgba(60,60,60,255);\n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	border-radius: 10px;\n"
"	background-color: rgba(140,140,140,255);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-radius: 10px;\n"
"	background-color: rgb(57, 57, 57);\n"
"	\n"
"}\n"
"*/\n"
"\n"
"QPushButton{\n"
"	font-family: Open Sans Light;\n"
"	font-size:18px ;\n"
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
"}"));
        generoEditando = new QComboBox(frameEditando);
        generoEditando->addItem(QString());
        generoEditando->addItem(QString());
        generoEditando->addItem(QString());
        generoEditando->setObjectName("generoEditando");
        generoEditando->setGeometry(QRect(530, 70, 261, 41));
        GeneroEditando = new QLabel(frameEditando);
        GeneroEditando->setObjectName("GeneroEditando");
        GeneroEditando->setGeometry(QRect(530, 20, 289, 40));
        GeneroEditando->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        GeneroEditando->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-family: Open Sans Light;\n"
"	font-size: 20px;\n"
"	color: #FFF;\n"
"	\n"
"}"));
        GeneroEditando->setAlignment(Qt::AlignmentFlag::AlignJustify|Qt::AlignmentFlag::AlignVCenter);
        SubequipeEditando = new QLabel(frameEditando);
        SubequipeEditando->setObjectName("SubequipeEditando");
        SubequipeEditando->setGeometry(QRect(530, 130, 289, 40));
        SubequipeEditando->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        SubequipeEditando->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-family: Open Sans Light;\n"
"	font-size: 20px;\n"
"	color: #FFF;\n"
"	\n"
"}"));
        SubequipeEditando->setAlignment(Qt::AlignmentFlag::AlignJustify|Qt::AlignmentFlag::AlignVCenter);
        layoutWidget = new QWidget(frameEditando);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(530, 190, 241, 160));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        AdminCbEdit = new QRadioButton(layoutWidget);
        AdminCbEdit->setObjectName("AdminCbEdit");

        verticalLayout_3->addWidget(AdminCbEdit);

        PowertrainCbEdit = new QRadioButton(layoutWidget);
        PowertrainCbEdit->setObjectName("PowertrainCbEdit");

        verticalLayout_3->addWidget(PowertrainCbEdit);

        DinamicaCbEdit = new QRadioButton(layoutWidget);
        DinamicaCbEdit->setObjectName("DinamicaCbEdit");

        verticalLayout_3->addWidget(DinamicaCbEdit);

        DrivetrainCbEdit = new QRadioButton(layoutWidget);
        DrivetrainCbEdit->setObjectName("DrivetrainCbEdit");

        verticalLayout_3->addWidget(DrivetrainCbEdit);

        EletricaCbEdit = new QRadioButton(layoutWidget);
        EletricaCbEdit->setObjectName("EletricaCbEdit");

        verticalLayout_3->addWidget(EletricaCbEdit);

        cancelarEditButton = new QPushButton(frameEditando);
        cancelarEditButton->setObjectName("cancelarEditButton");
        cancelarEditButton->setGeometry(QRect(430, 590, 171, 51));
        cancelarEditButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font-family: Open Sans Light;\n"
"	font-size:18px ;\n"
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
        EmailEdit = new QLineEdit(frameEditando);
        EmailEdit->setObjectName("EmailEdit");
        EmailEdit->setGeometry(QRect(50, 390, 351, 41));
        EmailEdit->setFont(font);
        EmailEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        EmailEdit->setMaxLength(200);
        EmailEdit->setClearButtonEnabled(false);
        telefoneEdit = new QLineEdit(frameEditando);
        telefoneEdit->setObjectName("telefoneEdit");
        telefoneEdit->setGeometry(QRect(50, 500, 271, 41));
        telefoneEdit->setFont(font);
        telefoneEdit->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        telefoneEdit->setMaxLength(16);
        telefoneEdit->setClearButtonEnabled(false);
        EmailEditando = new QLabel(frameEditando);
        EmailEditando->setObjectName("EmailEditando");
        EmailEditando->setGeometry(QRect(50, 340, 289, 40));
        EmailEditando->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        EmailEditando->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-family: Open Sans Light;\n"
"	font-size: 20px;\n"
"	color: #FFF;\n"
"	\n"
"}"));
        EmailEditando->setAlignment(Qt::AlignmentFlag::AlignJustify|Qt::AlignmentFlag::AlignVCenter);
        TelefoneEditando = new QLabel(frameEditando);
        TelefoneEditando->setObjectName("TelefoneEditando");
        TelefoneEditando->setGeometry(QRect(50, 450, 289, 40));
        TelefoneEditando->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        TelefoneEditando->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-family: Open Sans Light;\n"
"	font-size: 20px;\n"
"	color: #FFF;\n"
"	\n"
"}"));
        TelefoneEditando->setAlignment(Qt::AlignmentFlag::AlignJustify|Qt::AlignmentFlag::AlignVCenter);
        dataEditando = new QLineEdit(frameEditando);
        dataEditando->setObjectName("dataEditando");
        dataEditando->setGeometry(QRect(50, 290, 141, 41));
        dataEditando->setFont(font);
        dataEditando->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        dataEditando->setMaxLength(10);
        dataEditando->setClearButtonEnabled(false);
        UsuarioEditLine = new QLineEdit(frameEditando);
        UsuarioEditLine->setObjectName("UsuarioEditLine");
        UsuarioEditLine->setGeometry(QRect(530, 410, 281, 41));
        UsuarioEditLine->setFont(font);
        UsuarioEditLine->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        UsuarioEditLine->setMaxLength(200);
        UsuarioEditLine->setClearButtonEnabled(false);
        UsuarioEditando = new QLabel(frameEditando);
        UsuarioEditando->setObjectName("UsuarioEditando");
        UsuarioEditando->setGeometry(QRect(530, 360, 289, 40));
        UsuarioEditando->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        UsuarioEditando->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-family: Open Sans Light;\n"
"	font-size: 20px;\n"
"	color: #FFF;\n"
"	\n"
"}"));
        UsuarioEditando->setAlignment(Qt::AlignmentFlag::AlignJustify|Qt::AlignmentFlag::AlignVCenter);
        SenhaEditLine = new QLineEdit(frameEditando);
        SenhaEditLine->setObjectName("SenhaEditLine");
        SenhaEditLine->setGeometry(QRect(530, 510, 291, 41));
        SenhaEditLine->setFont(font);
        SenhaEditLine->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        SenhaEditLine->setMaxLength(200);
        SenhaEditLine->setClearButtonEnabled(false);
        SenhaEditando = new QLabel(frameEditando);
        SenhaEditando->setObjectName("SenhaEditando");
        SenhaEditando->setGeometry(QRect(530, 460, 289, 40));
        SenhaEditando->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        SenhaEditando->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-family: Open Sans Light;\n"
"	font-size: 20px;\n"
"	color: #FFF;\n"
"	\n"
"}"));
        SenhaEditando->setAlignment(Qt::AlignmentFlag::AlignJustify|Qt::AlignmentFlag::AlignVCenter);

        retranslateUi(BuscarJanela);

        QMetaObject::connectSlotsByName(BuscarJanela);
    } // setupUi

    void retranslateUi(QDialog *BuscarJanela)
    {
        BuscarJanela->setWindowTitle(QCoreApplication::translate("BuscarJanela", "Editar usu\303\241rio", nullptr));
        NomeEditando_2->setText(QCoreApplication::translate("BuscarJanela", "Nome", nullptr));
        cpfEditando->setInputMask(QCoreApplication::translate("BuscarJanela", "999.999.999-99", nullptr));
        cpfEditando->setPlaceholderText(QCoreApplication::translate("BuscarJanela", "CPF", nullptr));
        NascimentoEditPage->setText(QCoreApplication::translate("BuscarJanela", "Data de nascimento", nullptr));
        CPFEditando->setText(QCoreApplication::translate("BuscarJanela", "CPF", nullptr));
        NomeEditando->setPlaceholderText(QCoreApplication::translate("BuscarJanela", "Nome completo", nullptr));
        EditarButton->setText(QCoreApplication::translate("BuscarJanela", "Editar", nullptr));
        generoEditando->setItemText(0, QCoreApplication::translate("BuscarJanela", "Masculino", nullptr));
        generoEditando->setItemText(1, QCoreApplication::translate("BuscarJanela", "Feminino", nullptr));
        generoEditando->setItemText(2, QCoreApplication::translate("BuscarJanela", "Outros", nullptr));

        GeneroEditando->setText(QCoreApplication::translate("BuscarJanela", "G\303\252nero", nullptr));
        SubequipeEditando->setText(QCoreApplication::translate("BuscarJanela", "Sub-equipe", nullptr));
        AdminCbEdit->setText(QCoreApplication::translate("BuscarJanela", "Admin", nullptr));
        PowertrainCbEdit->setText(QCoreApplication::translate("BuscarJanela", "Powertrain", nullptr));
        DinamicaCbEdit->setText(QCoreApplication::translate("BuscarJanela", "Din\303\242mica veicular", nullptr));
        DrivetrainCbEdit->setText(QCoreApplication::translate("BuscarJanela", "Drivetrain", nullptr));
        EletricaCbEdit->setText(QCoreApplication::translate("BuscarJanela", "El\303\251trica", nullptr));
        cancelarEditButton->setText(QCoreApplication::translate("BuscarJanela", "Cancelar", nullptr));
        EmailEdit->setText(QString());
        EmailEdit->setPlaceholderText(QCoreApplication::translate("BuscarJanela", "Email", nullptr));
        telefoneEdit->setInputMask(QCoreApplication::translate("BuscarJanela", "(99) 9 9999-9999", nullptr));
        telefoneEdit->setText(QCoreApplication::translate("BuscarJanela", "()  -", nullptr));
        telefoneEdit->setPlaceholderText(QCoreApplication::translate("BuscarJanela", "Telefone", nullptr));
        EmailEditando->setText(QCoreApplication::translate("BuscarJanela", "Email", nullptr));
        TelefoneEditando->setText(QCoreApplication::translate("BuscarJanela", "Telefone", nullptr));
        dataEditando->setInputMask(QCoreApplication::translate("BuscarJanela", "99/99/9999", nullptr));
        dataEditando->setText(QCoreApplication::translate("BuscarJanela", "//", nullptr));
        dataEditando->setPlaceholderText(QCoreApplication::translate("BuscarJanela", "Nascimento", nullptr));
        UsuarioEditLine->setText(QString());
        UsuarioEditLine->setPlaceholderText(QCoreApplication::translate("BuscarJanela", "Usu\303\241rio", nullptr));
        UsuarioEditando->setText(QCoreApplication::translate("BuscarJanela", "Usu\303\241rio", nullptr));
        SenhaEditLine->setText(QString());
        SenhaEditLine->setPlaceholderText(QCoreApplication::translate("BuscarJanela", "Senha", nullptr));
        SenhaEditando->setText(QCoreApplication::translate("BuscarJanela", "Senha", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BuscarJanela: public Ui_BuscarJanela {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITARJANELA_H
