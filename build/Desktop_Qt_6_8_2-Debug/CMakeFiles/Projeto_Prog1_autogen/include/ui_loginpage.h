/********************************************************************************
** Form generated from reading UI file 'loginpage.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINPAGE_H
#define UI_LOGINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_loginPage
{
public:
    QLabel *LoginLabel;
    QPushButton *LoginButton;
    QLineEdit *UsernameEditLine;
    QLineEdit *PasswordEditLine;
    QPushButton *MostrarPasswordButton;

    void setupUi(QDialog *loginPage)
    {
        if (loginPage->objectName().isEmpty())
            loginPage->setObjectName("loginPage");
        loginPage->resize(400, 500);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginPage->sizePolicy().hasHeightForWidth());
        loginPage->setSizePolicy(sizePolicy);
        loginPage->setMinimumSize(QSize(400, 500));
        loginPage->setMaximumSize(QSize(400, 500));
        loginPage->setStyleSheet(QString::fromUtf8("QDialog{\n"
"	background-color: rgba(30,30,30,255);\n"
"	border-radius:10px;\n"
"}"));
        LoginLabel = new QLabel(loginPage);
        LoginLabel->setObjectName("LoginLabel");
        LoginLabel->setGeometry(QRect(30, 90, 331, 40));
        LoginLabel->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        LoginLabel->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-family: Open Sans Light;\n"
"	font-size: 25px;\n"
"	color: #FFF;\n"
"	\n"
"}"));
        LoginLabel->setAlignment(Qt::AlignmentFlag::AlignJustify|Qt::AlignmentFlag::AlignVCenter);
        LoginButton = new QPushButton(loginPage);
        LoginButton->setObjectName("LoginButton");
        LoginButton->setGeometry(QRect(30, 310, 331, 41));
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(LoginButton->sizePolicy().hasHeightForWidth());
        LoginButton->setSizePolicy(sizePolicy1);
        LoginButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 30px;\n"
"	color: #FFF;\n"
"	border-radius: 18px;\n"
"	font-family: Open Sans Light;\n"
"	font-size: 20px;\n"
"	background-color: rgba(13,117,190,255);\n"
"    \n"
"}\n"
"\n"
"QPushButton:hover {\n"
"	border-radius: 20px;\n"
"	background-color: rgb(85,150,190);\n"
"}\n"
"\n"
"QPushButton:pressed {\n"
"	border-radius: 20px;\n"
"	background-color: rgb(28,81,115);\n"
"	\n"
"}"));
        UsernameEditLine = new QLineEdit(loginPage);
        UsernameEditLine->setObjectName("UsernameEditLine");
        UsernameEditLine->setGeometry(QRect(30, 160, 331, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Open Sans 61")});
        font.setPointSize(11);
        UsernameEditLine->setFont(font);
        UsernameEditLine->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        UsernameEditLine->setMaxLength(200);
        UsernameEditLine->setClearButtonEnabled(false);
        PasswordEditLine = new QLineEdit(loginPage);
        PasswordEditLine->setObjectName("PasswordEditLine");
        PasswordEditLine->setGeometry(QRect(30, 220, 331, 41));
        PasswordEditLine->setFont(font);
        PasswordEditLine->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        PasswordEditLine->setMaxLength(200);
        PasswordEditLine->setEchoMode(QLineEdit::EchoMode::Password);
        PasswordEditLine->setClearButtonEnabled(false);
        MostrarPasswordButton = new QPushButton(loginPage);
        MostrarPasswordButton->setObjectName("MostrarPasswordButton");
        MostrarPasswordButton->setGeometry(QRect(280, 226, 71, 31));
        MostrarPasswordButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	font-family: Open Sans Light;\n"
"	background: transparent;\n"
"	border: none;\n"
"\n"
"\n"
"}"));

        retranslateUi(loginPage);

        QMetaObject::connectSlotsByName(loginPage);
    } // setupUi

    void retranslateUi(QDialog *loginPage)
    {
        loginPage->setWindowTitle(QCoreApplication::translate("loginPage", "Formula Login", nullptr));
        LoginLabel->setText(QCoreApplication::translate("loginPage", "Login", nullptr));
        LoginButton->setText(QCoreApplication::translate("loginPage", "Entrar", nullptr));
        UsernameEditLine->setPlaceholderText(QCoreApplication::translate("loginPage", "Usu\303\241rio", nullptr));
        PasswordEditLine->setPlaceholderText(QCoreApplication::translate("loginPage", "Senha", nullptr));
        MostrarPasswordButton->setText(QCoreApplication::translate("loginPage", "Mostrar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loginPage: public Ui_loginPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINPAGE_H
