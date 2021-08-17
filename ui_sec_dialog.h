/********************************************************************************
** Form generated from reading UI file 'sec_dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEC_DIALOG_H
#define UI_SEC_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_sec_dialog
{
public:
    QHBoxLayout *horizontalLayout_9;
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
    QPushButton *pushButton_salva;
    QPushButton *pushButton_annulla;

    void setupUi(QDialog *sec_dialog)
    {
        if (sec_dialog->objectName().isEmpty())
            sec_dialog->setObjectName(QString::fromUtf8("sec_dialog"));
        sec_dialog->resize(400, 300);
        horizontalLayout_9 = new QHBoxLayout(sec_dialog);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label = new QLabel(sec_dialog);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        horizontalLayout_7->addWidget(label);

        lineEdit_cognome = new QLineEdit(sec_dialog);
        lineEdit_cognome->setObjectName(QString::fromUtf8("lineEdit_cognome"));
        QFont font1;
        font1.setPointSize(11);
        lineEdit_cognome->setFont(font1);

        horizontalLayout_7->addWidget(lineEdit_cognome);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_2 = new QLabel(sec_dialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        sizePolicy.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy);
        label_2->setFont(font);

        horizontalLayout_6->addWidget(label_2);

        lineEdit_nome = new QLineEdit(sec_dialog);
        lineEdit_nome->setObjectName(QString::fromUtf8("lineEdit_nome"));
        lineEdit_nome->setFont(font1);

        horizontalLayout_6->addWidget(lineEdit_nome);


        verticalLayout_2->addLayout(horizontalLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(sec_dialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy);
        label_3->setFont(font);

        horizontalLayout_5->addWidget(label_3);

        lineEdit_documento = new QLineEdit(sec_dialog);
        lineEdit_documento->setObjectName(QString::fromUtf8("lineEdit_documento"));
        lineEdit_documento->setFont(font1);

        horizontalLayout_5->addWidget(lineEdit_documento);


        verticalLayout_2->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(sec_dialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy);
        label_4->setFont(font);

        horizontalLayout_4->addWidget(label_4);

        lineEdit_residenza = new QLineEdit(sec_dialog);
        lineEdit_residenza->setObjectName(QString::fromUtf8("lineEdit_residenza"));
        lineEdit_residenza->setFont(font1);

        horizontalLayout_4->addWidget(lineEdit_residenza);


        verticalLayout_2->addLayout(horizontalLayout_4);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(sec_dialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        sizePolicy.setHeightForWidth(label_5->sizePolicy().hasHeightForWidth());
        label_5->setSizePolicy(sizePolicy);
        label_5->setFont(font);

        horizontalLayout_3->addWidget(label_5);

        lineEdit_luogo = new QLineEdit(sec_dialog);
        lineEdit_luogo->setObjectName(QString::fromUtf8("lineEdit_luogo"));
        lineEdit_luogo->setFont(font1);

        horizontalLayout_3->addWidget(lineEdit_luogo);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_6 = new QLabel(sec_dialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        sizePolicy.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy);
        label_6->setFont(font);

        horizontalLayout_2->addWidget(label_6);

        lineEdit_data = new QLineEdit(sec_dialog);
        lineEdit_data->setObjectName(QString::fromUtf8("lineEdit_data"));
        lineEdit_data->setFont(font1);

        horizontalLayout_2->addWidget(lineEdit_data);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_7 = new QLabel(sec_dialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy);
        label_7->setFont(font);

        horizontalLayout->addWidget(label_7);

        textEdit_note = new QTextEdit(sec_dialog);
        textEdit_note->setObjectName(QString::fromUtf8("textEdit_note"));
        textEdit_note->setFont(font1);

        horizontalLayout->addWidget(textEdit_note);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        pushButton_salva = new QPushButton(sec_dialog);
        pushButton_salva->setObjectName(QString::fromUtf8("pushButton_salva"));
        pushButton_salva->setEnabled(false);
        pushButton_salva->setFlat(false);

        horizontalLayout_8->addWidget(pushButton_salva);

        pushButton_annulla = new QPushButton(sec_dialog);
        pushButton_annulla->setObjectName(QString::fromUtf8("pushButton_annulla"));
        pushButton_annulla->setEnabled(true);
        pushButton_annulla->setFlat(false);

        horizontalLayout_8->addWidget(pushButton_annulla);


        verticalLayout_2->addLayout(horizontalLayout_8);


        horizontalLayout_9->addLayout(verticalLayout_2);


        retranslateUi(sec_dialog);

        QMetaObject::connectSlotsByName(sec_dialog);
    } // setupUi

    void retranslateUi(QDialog *sec_dialog)
    {
        sec_dialog->setWindowTitle(QApplication::translate("sec_dialog", "Dialog", nullptr));
        label->setText(QApplication::translate("sec_dialog", "Cognome", nullptr));
        label_2->setText(QApplication::translate("sec_dialog", "Nome", nullptr));
        label_3->setText(QApplication::translate("sec_dialog", "Documento n\302\260", nullptr));
        label_4->setText(QApplication::translate("sec_dialog", "Residenza", nullptr));
        label_5->setText(QApplication::translate("sec_dialog", "Luogo di nascita", nullptr));
        label_6->setText(QApplication::translate("sec_dialog", "Data di nascita", nullptr));
        label_7->setText(QApplication::translate("sec_dialog", "Note", nullptr));
        pushButton_salva->setText(QApplication::translate("sec_dialog", "Salva", nullptr));
        pushButton_annulla->setText(QApplication::translate("sec_dialog", "Annulla", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sec_dialog: public Ui_sec_dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEC_DIALOG_H
