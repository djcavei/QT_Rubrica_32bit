/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNuovo_contatto;
    QAction *actionCopia;
    QAction *actionTaglia;
    QAction *actionIncolla;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout_9;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_pic;
    QLineEdit *line_search;
    QListWidget *listWidget;
    QWidget *layoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QLineEdit *lineEdit_cognome;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_2;
    QLineEdit *lineEdit_nome;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QLineEdit *lineEdit_documento;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEdit_residenza;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QLineEdit *lineEdit_luogo;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_6;
    QLineEdit *lineEdit_data;
    QHBoxLayout *horizontalLayout;
    QLabel *label_7;
    QTextEdit *textEdit_note;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pushButton_modifica;
    QPushButton *pushButton_elimina;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuModifica;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        actionNuovo_contatto = new QAction(MainWindow);
        actionNuovo_contatto->setObjectName(QString::fromUtf8("actionNuovo_contatto"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/img/New_contact_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNuovo_contatto->setIcon(icon);
        actionNuovo_contatto->setText(QString::fromUtf8("Nuovo contatto"));
        actionCopia = new QAction(MainWindow);
        actionCopia->setObjectName(QString::fromUtf8("actionCopia"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/img/copy_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopia->setIcon(icon1);
        actionTaglia = new QAction(MainWindow);
        actionTaglia->setObjectName(QString::fromUtf8("actionTaglia"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/img/cut_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionTaglia->setIcon(icon2);
        actionIncolla = new QAction(MainWindow);
        actionIncolla->setObjectName(QString::fromUtf8("actionIncolla"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/img/paste_icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionIncolla->setIcon(icon3);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("#centralwidget {\n"
"	background-color: rgb(254, 244,232) \n"
"}"));
        horizontalLayout_9 = new QHBoxLayout(centralwidget);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        splitter = new QSplitter(centralwidget);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_pic = new QLabel(layoutWidget);
        label_pic->setObjectName(QString::fromUtf8("label_pic"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_pic->sizePolicy().hasHeightForWidth());
        label_pic->setSizePolicy(sizePolicy);
        label_pic->setMinimumSize(QSize(345, 300));
        label_pic->setMaximumSize(QSize(345, 300));

        verticalLayout->addWidget(label_pic);

        line_search = new QLineEdit(layoutWidget);
        line_search->setObjectName(QString::fromUtf8("line_search"));
        QFont font;
        font.setPointSize(11);
        line_search->setFont(font);

        verticalLayout->addWidget(line_search);

        listWidget = new QListWidget(layoutWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setFont(font);

        verticalLayout->addWidget(listWidget);

        splitter->addWidget(layoutWidget);
        layoutWidget_2 = new QWidget(splitter);
        layoutWidget_2->setObjectName(QString::fromUtf8("layoutWidget_2"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label = new QLabel(layoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        QFont font1;
        font1.setFamily(QString::fromUtf8("Microsoft YaHei UI"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);

        horizontalLayout_7->addWidget(label);

        lineEdit_cognome = new QLineEdit(layoutWidget_2);
        lineEdit_cognome->setObjectName(QString::fromUtf8("lineEdit_cognome"));
        lineEdit_cognome->setFont(font);

        horizontalLayout_7->addWidget(lineEdit_cognome);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_2 = new QLabel(layoutWidget_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setFont(font1);

        horizontalLayout_6->addWidget(label_2);

        lineEdit_nome = new QLineEdit(layoutWidget_2);
        lineEdit_nome->setObjectName(QString::fromUtf8("lineEdit_nome"));
        lineEdit_nome->setFont(font);

        horizontalLayout_6->addWidget(lineEdit_nome);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(layoutWidget_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setFont(font1);

        horizontalLayout_5->addWidget(label_3);

        lineEdit_documento = new QLineEdit(layoutWidget_2);
        lineEdit_documento->setObjectName(QString::fromUtf8("lineEdit_documento"));
        lineEdit_documento->setFont(font);

        horizontalLayout_5->addWidget(lineEdit_documento);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(layoutWidget_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy1.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy1);
        label_4->setFont(font1);

        horizontalLayout_4->addWidget(label_4);

        lineEdit_residenza = new QLineEdit(layoutWidget_2);
        lineEdit_residenza->setObjectName(QString::fromUtf8("lineEdit_residenza"));
        lineEdit_residenza->setFont(font);

        horizontalLayout_4->addWidget(lineEdit_residenza);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(layoutWidget_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy1.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy1);
        label_5->setFont(font1);

        horizontalLayout_3->addWidget(label_5);

        lineEdit_luogo = new QLineEdit(layoutWidget_2);
        lineEdit_luogo->setObjectName(QString::fromUtf8("lineEdit_luogo"));
        lineEdit_luogo->setFont(font);

        horizontalLayout_3->addWidget(lineEdit_luogo);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(layoutWidget_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setFont(font1);

        horizontalLayout_2->addWidget(label_6);

        lineEdit_data = new QLineEdit(layoutWidget_2);
        lineEdit_data->setObjectName(QString::fromUtf8("lineEdit_data"));
        lineEdit_data->setFont(font);

        horizontalLayout_2->addWidget(lineEdit_data);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_7 = new QLabel(layoutWidget_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy1.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy1);
        label_7->setFont(font1);

        horizontalLayout->addWidget(label_7);

        textEdit_note = new QTextEdit(layoutWidget_2);
        textEdit_note->setObjectName(QString::fromUtf8("textEdit_note"));
        textEdit_note->setFont(font);

        horizontalLayout->addWidget(textEdit_note);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        pushButton_modifica = new QPushButton(layoutWidget_2);
        pushButton_modifica->setObjectName(QString::fromUtf8("pushButton_modifica"));
        pushButton_modifica->setEnabled(false);
        pushButton_modifica->setFlat(false);

        horizontalLayout_8->addWidget(pushButton_modifica);

        pushButton_elimina = new QPushButton(layoutWidget_2);
        pushButton_elimina->setObjectName(QString::fromUtf8("pushButton_elimina"));
        pushButton_elimina->setEnabled(false);
        pushButton_elimina->setFlat(false);

        horizontalLayout_8->addWidget(pushButton_elimina);


        verticalLayout_2->addLayout(horizontalLayout_8);

        splitter->addWidget(layoutWidget_2);

        horizontalLayout_9->addWidget(splitter);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuModifica = new QMenu(menubar);
        menuModifica->setObjectName(QString::fromUtf8("menuModifica"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(toolBar->sizePolicy().hasHeightForWidth());
        toolBar->setSizePolicy(sizePolicy2);
        toolBar->setIconSize(QSize(50, 50));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuModifica->menuAction());
        menuFile->addAction(actionNuovo_contatto);
        menuModifica->addAction(actionCopia);
        menuModifica->addAction(actionTaglia);
        menuModifica->addAction(actionIncolla);
        toolBar->addAction(actionNuovo_contatto);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        actionCopia->setText(QApplication::translate("MainWindow", "Copia", nullptr));
        actionTaglia->setText(QApplication::translate("MainWindow", "Taglia", nullptr));
        actionIncolla->setText(QApplication::translate("MainWindow", "Incolla", nullptr));
        label_pic->setText(QString());
#ifndef QT_NO_TOOLTIP
        line_search->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        line_search->setText(QString());
        line_search->setPlaceholderText(QApplication::translate("MainWindow", "Inserisci cognome da cercare", nullptr));
        label->setText(QApplication::translate("MainWindow", "Cognome", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Nome", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Documento n\302\260", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Residenza", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Luogo di nascita", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Data di nascita", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Note", nullptr));
        pushButton_modifica->setText(QApplication::translate("MainWindow", "Modifica", nullptr));
        pushButton_elimina->setText(QApplication::translate("MainWindow", "Elimina", nullptr));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", nullptr));
        menuModifica->setTitle(QApplication::translate("MainWindow", "Modifica", nullptr));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
