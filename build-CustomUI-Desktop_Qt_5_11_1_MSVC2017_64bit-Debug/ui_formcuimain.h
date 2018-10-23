/********************************************************************************
** Form generated from reading UI file 'formcuimain.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMCUIMAIN_H
#define UI_FORMCUIMAIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormCUIMain
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_ave;
    QLabel *label_tot;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *FormCUIMain)
    {
        if (FormCUIMain->objectName().isEmpty())
            FormCUIMain->setObjectName(QLatin1String("FormCUIMain"));
        FormCUIMain->resize(800, 480);
        pushButton = new QPushButton(FormCUIMain);
        pushButton->setObjectName(QLatin1String("pushButton"));
        pushButton->setGeometry(QRect(40, 90, 201, 131));
        pushButton_2 = new QPushButton(FormCUIMain);
        pushButton_2->setObjectName(QLatin1String("pushButton_2"));
        pushButton_2->setGeometry(QRect(690, 420, 81, 51));
        label = new QLabel(FormCUIMain);
        label->setObjectName(QLatin1String("label"));
        label->setGeometry(QRect(50, 400, 80, 17));
        label_2 = new QLabel(FormCUIMain);
        label_2->setObjectName(QLatin1String("label_2"));
        label_2->setGeometry(QRect(50, 430, 102, 17));
        label_ave = new QLabel(FormCUIMain);
        label_ave->setObjectName(QLatin1String("label_ave"));
        label_ave->setGeometry(QRect(180, 430, 121, 17));
        label_tot = new QLabel(FormCUIMain);
        label_tot->setObjectName(QLatin1String("label_tot"));
        label_tot->setGeometry(QRect(180, 400, 121, 17));
        label_5 = new QLabel(FormCUIMain);
        label_5->setObjectName(QLatin1String("label_5"));
        label_5->setGeometry(QRect(320, 400, 20, 17));
        label_6 = new QLabel(FormCUIMain);
        label_6->setObjectName(QLatin1String("label_6"));
        label_6->setGeometry(QRect(320, 430, 20, 17));

        retranslateUi(FormCUIMain);

        QMetaObject::connectSlotsByName(FormCUIMain);
    } // setupUi

    void retranslateUi(QWidget *FormCUIMain)
    {
        FormCUIMain->setWindowTitle(QApplication::translate("FormCUIMain", "FormCUIMain", nullptr));
        pushButton->setText(QApplication::translate("FormCUIMain", "start", nullptr));
        pushButton_2->setText(QApplication::translate("FormCUIMain", "back", nullptr));
        label->setText(QApplication::translate("FormCUIMain", "Total time : ", nullptr));
        label_2->setText(QApplication::translate("FormCUIMain", "Average time : ", nullptr));
        label_ave->setText(QApplication::translate("FormCUIMain", "0", nullptr));
        label_tot->setText(QApplication::translate("FormCUIMain", "0", nullptr));
        label_5->setText(QApplication::translate("FormCUIMain", "ms", nullptr));
        label_6->setText(QApplication::translate("FormCUIMain", "ms", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormCUIMain: public Ui_FormCUIMain {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMCUIMAIN_H
