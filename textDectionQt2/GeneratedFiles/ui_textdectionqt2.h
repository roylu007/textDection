/********************************************************************************
** Form generated from reading UI file 'textdectionqt2.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEXTDECTIONQT2_H
#define UI_TEXTDECTIONQT2_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_textDectionQt2Class
{
public:
    QFrame *line;
    QFrame *line_2;
    QLabel *imageLabel;
    QLabel *resultLabel;
    QLabel *imageShowLabel;
    QPushButton *uploadButton;
    QPushButton *testButton;
    QTextEdit *resultTextEdit;

    void setupUi(QWidget *textDectionQt2Class)
    {
        if (textDectionQt2Class->objectName().isEmpty())
            textDectionQt2Class->setObjectName(QStringLiteral("textDectionQt2Class"));
        textDectionQt2Class->resize(1125, 816);
        line = new QFrame(textDectionQt2Class);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 540, 1121, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(textDectionQt2Class);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(560, 0, 20, 551));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        imageLabel = new QLabel(textDectionQt2Class);
        imageLabel->setObjectName(QStringLiteral("imageLabel"));
        imageLabel->setGeometry(QRect(200, 10, 91, 41));
        imageLabel->setAlignment(Qt::AlignCenter);
        resultLabel = new QLabel(textDectionQt2Class);
        resultLabel->setObjectName(QStringLiteral("resultLabel"));
        resultLabel->setGeometry(QRect(833, 22, 91, 21));
        resultLabel->setAlignment(Qt::AlignCenter);
        imageShowLabel = new QLabel(textDectionQt2Class);
        imageShowLabel->setObjectName(QStringLiteral("imageShowLabel"));
        imageShowLabel->setGeometry(QRect(13, 51, 551, 491));
        uploadButton = new QPushButton(textDectionQt2Class);
        uploadButton->setObjectName(QStringLiteral("uploadButton"));
        uploadButton->setGeometry(QRect(210, 560, 101, 41));
        testButton = new QPushButton(textDectionQt2Class);
        testButton->setObjectName(QStringLiteral("testButton"));
        testButton->setGeometry(QRect(810, 560, 101, 41));
        resultTextEdit = new QTextEdit(textDectionQt2Class);
        resultTextEdit->setObjectName(QStringLiteral("resultTextEdit"));
        resultTextEdit->setGeometry(QRect(570, 50, 551, 491));

        retranslateUi(textDectionQt2Class);

        QMetaObject::connectSlotsByName(textDectionQt2Class);
    } // setupUi

    void retranslateUi(QWidget *textDectionQt2Class)
    {
        textDectionQt2Class->setWindowTitle(QApplication::translate("textDectionQt2Class", "textDectionQt2", Q_NULLPTR));
        imageLabel->setText(QApplication::translate("textDectionQt2Class", "Image", Q_NULLPTR));
        resultLabel->setText(QApplication::translate("textDectionQt2Class", "Result", Q_NULLPTR));
        imageShowLabel->setText(QString());
        uploadButton->setText(QApplication::translate("textDectionQt2Class", "upload", Q_NULLPTR));
        testButton->setText(QApplication::translate("textDectionQt2Class", "Test", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class textDectionQt2Class: public Ui_textDectionQt2Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEXTDECTIONQT2_H
