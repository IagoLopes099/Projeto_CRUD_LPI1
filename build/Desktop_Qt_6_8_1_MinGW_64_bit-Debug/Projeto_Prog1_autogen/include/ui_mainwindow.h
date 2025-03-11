/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *homeButton;
    QSpacerItem *verticalSpacer_2;
    QPushButton *CadastrarButton;
    QSpacerItem *verticalSpacer_3;
    QPushButton *CadastrarButton_2;
    QSpacerItem *verticalSpacer_4;
    QPushButton *CadastrarButton_3;
    QSpacerItem *verticalSpacer_5;
    QStackedWidget *Janelas;
    QWidget *HomePage;
    QTableWidget *listarMembros;
    QLineEdit *NomeBuscarHP;
    QPushButton *BuscarButtonHP;
    QPushButton *AtualizarButtonHP;
    QPushButton *EditarButtonHP;
    QPushButton *DeletarButtonHP;
    QWidget *CadastroPage;
    QFrame *frame_2;
    QLabel *NomeCadastroPage;
    QLineEdit *CPFEditLine;
    QLabel *NascimentoCadastroPage;
    QLabel *CPFCadastroPage;
    QLineEdit *NomeEditLineCadastro;
    QPushButton *CadastrarInputButton;
    QComboBox *GeneroComboBox;
    QLabel *GeneroCadastroPage;
    QLabel *SubequipeCadastroPage;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout_3;
    QRadioButton *AdminCb;
    QRadioButton *PowertrainCb;
    QRadioButton *DinamicaCb;
    QRadioButton *DrivetrainCb;
    QRadioButton *EletricaCb;
    QLabel *EmailCadastroPage;
    QLineEdit *EmailEditLine;
    QLabel *TelefoneCadastroPage;
    QLineEdit *telefoneEditLine;
    QDateEdit *aniversarioCadastro;
    QLineEdit *UsuarioEditLineCadastro;
    QLineEdit *SenhaEditLineCadastro;
    QLabel *UsuarioCadastroPage;
    QLabel *SenhaCadastroPage;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(1200, 680);
        MainWindow->setMinimumSize(QSize(1200, 680));
        MainWindow->setMaximumSize(QSize(1200, 680));
        MainWindow->setAcceptDrops(true);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::AddressBookNew));
        MainWindow->setWindowIcon(icon);
        MainWindow->setStyleSheet(QString::fromUtf8("QMainWindow{\n"
"	background-color: rgba(45,45,45,255);\n"
"}"));
        MainWindow->setAnimated(true);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(30, 10, 191, 651));
        frame->setStyleSheet(QString::fromUtf8("QFrame{\n"
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
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout = new QVBoxLayout(frame);
        verticalLayout->setObjectName("verticalLayout");
        verticalSpacer = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer);

        homeButton = new QPushButton(frame);
        homeButton->setObjectName("homeButton");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/debug/home.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        homeButton->setIcon(icon1);
        homeButton->setIconSize(QSize(40, 40));

        verticalLayout->addWidget(homeButton);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer_2);

        CadastrarButton = new QPushButton(frame);
        CadastrarButton->setObjectName("CadastrarButton");
        CadastrarButton->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 34px;\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/debug/adicionar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        CadastrarButton->setIcon(icon2);
        CadastrarButton->setIconSize(QSize(26, 26));

        verticalLayout->addWidget(CadastrarButton);

        verticalSpacer_3 = new QSpacerItem(10, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer_3);

        CadastrarButton_2 = new QPushButton(frame);
        CadastrarButton_2->setObjectName("CadastrarButton_2");
        CadastrarButton_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 34px;\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/debug/grafico.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        CadastrarButton_2->setIcon(icon3);
        CadastrarButton_2->setIconSize(QSize(26, 26));

        verticalLayout->addWidget(CadastrarButton_2);

        verticalSpacer_4 = new QSpacerItem(20, 10, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);

        verticalLayout->addItem(verticalSpacer_4);

        CadastrarButton_3 = new QPushButton(frame);
        CadastrarButton_3->setObjectName("CadastrarButton_3");
        CadastrarButton_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"	height: 34px;\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/debug/atividades.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        CadastrarButton_3->setIcon(icon4);
        CadastrarButton_3->setIconSize(QSize(30, 30));

        verticalLayout->addWidget(CadastrarButton_3);

        verticalSpacer_5 = new QSpacerItem(20, 315, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer_5);

        Janelas = new QStackedWidget(centralwidget);
        Janelas->setObjectName("Janelas");
        Janelas->setGeometry(QRect(220, 10, 961, 651));
        Janelas->setStyleSheet(QString::fromUtf8(""));
        HomePage = new QWidget();
        HomePage->setObjectName("HomePage");
        listarMembros = new QTableWidget(HomePage);
        listarMembros->setObjectName("listarMembros");
        listarMembros->setGeometry(QRect(30, 70, 900, 581));
        listarMembros->setStyleSheet(QString::fromUtf8("QTableWidget{\n"
"	background-color: rgba(30,30,30,255);\n"
"	border-radius: 10px;\n"
"\n"
"}"));
        NomeBuscarHP = new QLineEdit(HomePage);
        NomeBuscarHP->setObjectName("NomeBuscarHP");
        NomeBuscarHP->setGeometry(QRect(410, 10, 461, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Open Sans 61")});
        font.setPointSize(11);
        NomeBuscarHP->setFont(font);
        NomeBuscarHP->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        NomeBuscarHP->setMaxLength(200);
        NomeBuscarHP->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        NomeBuscarHP->setClearButtonEnabled(false);
        BuscarButtonHP = new QPushButton(HomePage);
        BuscarButtonHP->setObjectName("BuscarButtonHP");
        BuscarButtonHP->setGeometry(QRect(880, 10, 61, 41));
        BuscarButtonHP->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/debug/buscarWhite.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        BuscarButtonHP->setIcon(icon5);
        BuscarButtonHP->setIconSize(QSize(30, 30));
        AtualizarButtonHP = new QPushButton(HomePage);
        AtualizarButtonHP->setObjectName("AtualizarButtonHP");
        AtualizarButtonHP->setGeometry(QRect(30, 10, 61, 41));
        AtualizarButtonHP->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/debug/atualizarWhite.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        AtualizarButtonHP->setIcon(icon6);
        AtualizarButtonHP->setIconSize(QSize(30, 30));
        EditarButtonHP = new QPushButton(HomePage);
        EditarButtonHP->setObjectName("EditarButtonHP");
        EditarButtonHP->setGeometry(QRect(110, 10, 101, 41));
        EditarButtonHP->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/debug/editarWhite.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        EditarButtonHP->setIcon(icon7);
        EditarButtonHP->setIconSize(QSize(30, 30));
        DeletarButtonHP = new QPushButton(HomePage);
        DeletarButtonHP->setObjectName("DeletarButtonHP");
        DeletarButtonHP->setGeometry(QRect(230, 10, 111, 41));
        DeletarButtonHP->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/debug/deletarWhite.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        DeletarButtonHP->setIcon(icon8);
        DeletarButtonHP->setIconSize(QSize(30, 30));
        Janelas->addWidget(HomePage);
        CadastroPage = new QWidget();
        CadastroPage->setObjectName("CadastroPage");
        frame_2 = new QFrame(CadastroPage);
        frame_2->setObjectName("frame_2");
        frame_2->setGeometry(QRect(40, 0, 891, 651));
        frame_2->setStyleSheet(QString::fromUtf8("QFrame{\n"
"	background-color: rgba(30,30,30,255);\n"
"	border-radius: 20px;\n"
"}"));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Plain);
        NomeCadastroPage = new QLabel(frame_2);
        NomeCadastroPage->setObjectName("NomeCadastroPage");
        NomeCadastroPage->setGeometry(QRect(50, 20, 289, 40));
        NomeCadastroPage->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        NomeCadastroPage->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-family: Open Sans Light;\n"
"	font-size: 20px;\n"
"	color: #FFF;\n"
"	\n"
"}"));
        NomeCadastroPage->setAlignment(Qt::AlignmentFlag::AlignJustify|Qt::AlignmentFlag::AlignVCenter);
        CPFEditLine = new QLineEdit(frame_2);
        CPFEditLine->setObjectName("CPFEditLine");
        CPFEditLine->setGeometry(QRect(50, 170, 351, 41));
        CPFEditLine->setFont(font);
        CPFEditLine->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
"	font-family: Open Sans Light;\n"
"	border: 2px solid rgb(37, 39, 48);\n"
"	border-radius: 16px;\n"
"	color: #FFF;\n"
"	padding-left: 20px;\n"
"	padding-right: 20px; \n"
"	background-color: rgb(34, 36, 44);\n"
"}"));
        CPFEditLine->setInputMask(QString::fromUtf8("999.999.999-99"));
        CPFEditLine->setMaxLength(14);
        NascimentoCadastroPage = new QLabel(frame_2);
        NascimentoCadastroPage->setObjectName("NascimentoCadastroPage");
        NascimentoCadastroPage->setGeometry(QRect(50, 230, 289, 40));
        NascimentoCadastroPage->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-family: Open Sans Light;\n"
"	font-size: 20px;\n"
"	color: #FFF;\n"
"	\n"
"}"));
        CPFCadastroPage = new QLabel(frame_2);
        CPFCadastroPage->setObjectName("CPFCadastroPage");
        CPFCadastroPage->setGeometry(QRect(50, 120, 289, 41));
        CPFCadastroPage->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-family: Open Sans Light;\n"
"	font-size: 20px;\n"
"	color: #FFF;\n"
"	\n"
"}"));
        NomeEditLineCadastro = new QLineEdit(frame_2);
        NomeEditLineCadastro->setObjectName("NomeEditLineCadastro");
        NomeEditLineCadastro->setGeometry(QRect(50, 70, 351, 41));
        NomeEditLineCadastro->setFont(font);
        NomeEditLineCadastro->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        NomeEditLineCadastro->setMaxLength(200);
        NomeEditLineCadastro->setClearButtonEnabled(false);
        CadastrarInputButton = new QPushButton(frame_2);
        CadastrarInputButton->setObjectName("CadastrarInputButton");
        CadastrarInputButton->setGeometry(QRect(340, 580, 171, 51));
        CadastrarInputButton->setStyleSheet(QString::fromUtf8("/*QPushButton{\n"
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
        GeneroComboBox = new QComboBox(frame_2);
        GeneroComboBox->addItem(QString());
        GeneroComboBox->addItem(QString());
        GeneroComboBox->addItem(QString());
        GeneroComboBox->setObjectName("GeneroComboBox");
        GeneroComboBox->setGeometry(QRect(560, 70, 261, 41));
        GeneroCadastroPage = new QLabel(frame_2);
        GeneroCadastroPage->setObjectName("GeneroCadastroPage");
        GeneroCadastroPage->setGeometry(QRect(560, 20, 289, 40));
        GeneroCadastroPage->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        GeneroCadastroPage->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-family: Open Sans Light;\n"
"	font-size: 20px;\n"
"	color: #FFF;\n"
"	\n"
"}"));
        GeneroCadastroPage->setAlignment(Qt::AlignmentFlag::AlignJustify|Qt::AlignmentFlag::AlignVCenter);
        SubequipeCadastroPage = new QLabel(frame_2);
        SubequipeCadastroPage->setObjectName("SubequipeCadastroPage");
        SubequipeCadastroPage->setGeometry(QRect(560, 120, 289, 40));
        SubequipeCadastroPage->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        SubequipeCadastroPage->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-family: Open Sans Light;\n"
"	font-size: 20px;\n"
"	color: #FFF;\n"
"	\n"
"}"));
        SubequipeCadastroPage->setAlignment(Qt::AlignmentFlag::AlignJustify|Qt::AlignmentFlag::AlignVCenter);
        layoutWidget = new QWidget(frame_2);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(560, 170, 241, 160));
        verticalLayout_3 = new QVBoxLayout(layoutWidget);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        AdminCb = new QRadioButton(layoutWidget);
        AdminCb->setObjectName("AdminCb");

        verticalLayout_3->addWidget(AdminCb);

        PowertrainCb = new QRadioButton(layoutWidget);
        PowertrainCb->setObjectName("PowertrainCb");

        verticalLayout_3->addWidget(PowertrainCb);

        DinamicaCb = new QRadioButton(layoutWidget);
        DinamicaCb->setObjectName("DinamicaCb");

        verticalLayout_3->addWidget(DinamicaCb);

        DrivetrainCb = new QRadioButton(layoutWidget);
        DrivetrainCb->setObjectName("DrivetrainCb");

        verticalLayout_3->addWidget(DrivetrainCb);

        EletricaCb = new QRadioButton(layoutWidget);
        EletricaCb->setObjectName("EletricaCb");

        verticalLayout_3->addWidget(EletricaCb);

        EmailCadastroPage = new QLabel(frame_2);
        EmailCadastroPage->setObjectName("EmailCadastroPage");
        EmailCadastroPage->setGeometry(QRect(50, 330, 289, 40));
        EmailCadastroPage->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        EmailCadastroPage->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-family: Open Sans Light;\n"
"	font-size: 20px;\n"
"	color: #FFF;\n"
"	\n"
"}"));
        EmailCadastroPage->setAlignment(Qt::AlignmentFlag::AlignJustify|Qt::AlignmentFlag::AlignVCenter);
        EmailEditLine = new QLineEdit(frame_2);
        EmailEditLine->setObjectName("EmailEditLine");
        EmailEditLine->setGeometry(QRect(50, 380, 351, 41));
        EmailEditLine->setFont(font);
        EmailEditLine->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        EmailEditLine->setMaxLength(200);
        EmailEditLine->setClearButtonEnabled(false);
        TelefoneCadastroPage = new QLabel(frame_2);
        TelefoneCadastroPage->setObjectName("TelefoneCadastroPage");
        TelefoneCadastroPage->setGeometry(QRect(50, 440, 289, 40));
        TelefoneCadastroPage->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        TelefoneCadastroPage->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-family: Open Sans Light;\n"
"	font-size: 20px;\n"
"	color: #FFF;\n"
"	\n"
"}"));
        TelefoneCadastroPage->setAlignment(Qt::AlignmentFlag::AlignJustify|Qt::AlignmentFlag::AlignVCenter);
        telefoneEditLine = new QLineEdit(frame_2);
        telefoneEditLine->setObjectName("telefoneEditLine");
        telefoneEditLine->setGeometry(QRect(50, 490, 271, 41));
        telefoneEditLine->setFont(font);
        telefoneEditLine->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        telefoneEditLine->setMaxLength(16);
        telefoneEditLine->setClearButtonEnabled(false);
        aniversarioCadastro = new QDateEdit(frame_2);
        aniversarioCadastro->setObjectName("aniversarioCadastro");
        aniversarioCadastro->setGeometry(QRect(50, 280, 171, 41));
        aniversarioCadastro->setStyleSheet(QString::fromUtf8("QDateEdit{\n"
"	font-family: Open Sans Light;\n"
"	border-radius: 10px;\n"
"	color: #FFF;\n"
"\n"
"}"));
        UsuarioEditLineCadastro = new QLineEdit(frame_2);
        UsuarioEditLineCadastro->setObjectName("UsuarioEditLineCadastro");
        UsuarioEditLineCadastro->setGeometry(QRect(560, 390, 281, 41));
        UsuarioEditLineCadastro->setFont(font);
        UsuarioEditLineCadastro->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        UsuarioEditLineCadastro->setMaxLength(200);
        UsuarioEditLineCadastro->setClearButtonEnabled(false);
        SenhaEditLineCadastro = new QLineEdit(frame_2);
        SenhaEditLineCadastro->setObjectName("SenhaEditLineCadastro");
        SenhaEditLineCadastro->setGeometry(QRect(560, 490, 281, 41));
        SenhaEditLineCadastro->setFont(font);
        SenhaEditLineCadastro->setStyleSheet(QString::fromUtf8("QLineEdit{\n"
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
        SenhaEditLineCadastro->setMaxLength(200);
        SenhaEditLineCadastro->setClearButtonEnabled(false);
        UsuarioCadastroPage = new QLabel(frame_2);
        UsuarioCadastroPage->setObjectName("UsuarioCadastroPage");
        UsuarioCadastroPage->setGeometry(QRect(560, 340, 289, 40));
        UsuarioCadastroPage->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        UsuarioCadastroPage->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-family: Open Sans Light;\n"
"	font-size: 20px;\n"
"	color: #FFF;\n"
"	\n"
"}"));
        UsuarioCadastroPage->setAlignment(Qt::AlignmentFlag::AlignJustify|Qt::AlignmentFlag::AlignVCenter);
        SenhaCadastroPage = new QLabel(frame_2);
        SenhaCadastroPage->setObjectName("SenhaCadastroPage");
        SenhaCadastroPage->setGeometry(QRect(560, 440, 289, 40));
        SenhaCadastroPage->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        SenhaCadastroPage->setStyleSheet(QString::fromUtf8("QLabel{\n"
"	font-family: Open Sans Light;\n"
"	font-size: 20px;\n"
"	color: #FFF;\n"
"	\n"
"}"));
        SenhaCadastroPage->setAlignment(Qt::AlignmentFlag::AlignJustify|Qt::AlignmentFlag::AlignVCenter);
        Janelas->addWidget(CadastroPage);
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        Janelas->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Formula UFPB", nullptr));
        homeButton->setText(QCoreApplication::translate("MainWindow", "In\303\255cio", nullptr));
        CadastrarButton->setText(QCoreApplication::translate("MainWindow", "Cadastrar", nullptr));
        CadastrarButton_2->setText(QCoreApplication::translate("MainWindow", "Relat\303\263rios", nullptr));
        CadastrarButton_3->setText(QCoreApplication::translate("MainWindow", "Atividades", nullptr));
        NomeBuscarHP->setPlaceholderText(QCoreApplication::translate("MainWindow", "Nome usu\303\241rio", nullptr));
        BuscarButtonHP->setText(QString());
        AtualizarButtonHP->setText(QString());
        EditarButtonHP->setText(QCoreApplication::translate("MainWindow", "Editar", nullptr));
        DeletarButtonHP->setText(QCoreApplication::translate("MainWindow", "Deletar", nullptr));
        NomeCadastroPage->setText(QCoreApplication::translate("MainWindow", "Nome", nullptr));
        CPFEditLine->setText(QCoreApplication::translate("MainWindow", "..-", nullptr));
        CPFEditLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "CPF", nullptr));
        NascimentoCadastroPage->setText(QCoreApplication::translate("MainWindow", "Data de nascimento", nullptr));
        CPFCadastroPage->setText(QCoreApplication::translate("MainWindow", "CPF", nullptr));
        NomeEditLineCadastro->setPlaceholderText(QCoreApplication::translate("MainWindow", "Nome completo", nullptr));
        CadastrarInputButton->setText(QCoreApplication::translate("MainWindow", "Cadastrar", nullptr));
        GeneroComboBox->setItemText(0, QCoreApplication::translate("MainWindow", "Masculino", nullptr));
        GeneroComboBox->setItemText(1, QCoreApplication::translate("MainWindow", "Feminino", nullptr));
        GeneroComboBox->setItemText(2, QCoreApplication::translate("MainWindow", "Outros", nullptr));

        GeneroCadastroPage->setText(QCoreApplication::translate("MainWindow", "G\303\252nero", nullptr));
        SubequipeCadastroPage->setText(QCoreApplication::translate("MainWindow", "Sub-equipe", nullptr));
        AdminCb->setText(QCoreApplication::translate("MainWindow", "Admin", nullptr));
        PowertrainCb->setText(QCoreApplication::translate("MainWindow", "Powertrain", nullptr));
        DinamicaCb->setText(QCoreApplication::translate("MainWindow", "Din\303\242mica veicular", nullptr));
        DrivetrainCb->setText(QCoreApplication::translate("MainWindow", "Drivetrain", nullptr));
        EletricaCb->setText(QCoreApplication::translate("MainWindow", "El\303\251trica", nullptr));
        EmailCadastroPage->setText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        EmailEditLine->setText(QString());
        EmailEditLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "Email", nullptr));
        TelefoneCadastroPage->setText(QCoreApplication::translate("MainWindow", "Telefone", nullptr));
        telefoneEditLine->setInputMask(QCoreApplication::translate("MainWindow", "(99) 9 9999-9999", nullptr));
        telefoneEditLine->setText(QCoreApplication::translate("MainWindow", "()  -", nullptr));
        telefoneEditLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "Telefone", nullptr));
        UsuarioEditLineCadastro->setText(QString());
        UsuarioEditLineCadastro->setPlaceholderText(QCoreApplication::translate("MainWindow", "Usu\303\241rio", nullptr));
        SenhaEditLineCadastro->setText(QString());
        SenhaEditLineCadastro->setPlaceholderText(QCoreApplication::translate("MainWindow", "Senha", nullptr));
        UsuarioCadastroPage->setText(QCoreApplication::translate("MainWindow", "Usu\303\241rio", nullptr));
        SenhaCadastroPage->setText(QCoreApplication::translate("MainWindow", "Senha", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
