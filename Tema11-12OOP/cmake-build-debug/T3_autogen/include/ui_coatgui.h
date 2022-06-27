/********************************************************************************
** Form generated from reading UI file 'coatgui.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COATGUI_H
#define UI_COATGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CoatGUI
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QListWidget *coatlistWidget;
    QFormLayout *formLayout;
    QLabel *sizelabel;
    QLineEdit *sizelineEdit;
    QLabel *colorlabel;
    QLineEdit *colorlineEdit;
    QLabel *pricelabel;
    QLineEdit *pricelineEdit;
    QLabel *quantitylabel;
    QLineEdit *quantitylineEdit;
    QLabel *linklabel;
    QLineEdit *linklineEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *addButton;
    QPushButton *editButton;
    QPushButton *deleteButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *CoatGUI)
    {
        if (CoatGUI->objectName().isEmpty())
            CoatGUI->setObjectName(QString::fromUtf8("CoatGUI"));
        CoatGUI->resize(947, 684);
        centralwidget = new QWidget(CoatGUI);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        coatlistWidget = new QListWidget(centralwidget);
        coatlistWidget->setObjectName(QString::fromUtf8("coatlistWidget"));

        verticalLayout->addWidget(coatlistWidget);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        sizelabel = new QLabel(centralwidget);
        sizelabel->setObjectName(QString::fromUtf8("sizelabel"));
        QFont font;
        font.setPointSize(12);
        sizelabel->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, sizelabel);

        sizelineEdit = new QLineEdit(centralwidget);
        sizelineEdit->setObjectName(QString::fromUtf8("sizelineEdit"));
        sizelineEdit->setFont(font);

        formLayout->setWidget(0, QFormLayout::FieldRole, sizelineEdit);

        colorlabel = new QLabel(centralwidget);
        colorlabel->setObjectName(QString::fromUtf8("colorlabel"));
        colorlabel->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, colorlabel);

        colorlineEdit = new QLineEdit(centralwidget);
        colorlineEdit->setObjectName(QString::fromUtf8("colorlineEdit"));
        colorlineEdit->setFont(font);

        formLayout->setWidget(1, QFormLayout::FieldRole, colorlineEdit);

        pricelabel = new QLabel(centralwidget);
        pricelabel->setObjectName(QString::fromUtf8("pricelabel"));
        pricelabel->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, pricelabel);

        pricelineEdit = new QLineEdit(centralwidget);
        pricelineEdit->setObjectName(QString::fromUtf8("pricelineEdit"));
        pricelineEdit->setFont(font);

        formLayout->setWidget(2, QFormLayout::FieldRole, pricelineEdit);

        quantitylabel = new QLabel(centralwidget);
        quantitylabel->setObjectName(QString::fromUtf8("quantitylabel"));
        quantitylabel->setFont(font);

        formLayout->setWidget(3, QFormLayout::LabelRole, quantitylabel);

        quantitylineEdit = new QLineEdit(centralwidget);
        quantitylineEdit->setObjectName(QString::fromUtf8("quantitylineEdit"));
        quantitylineEdit->setFont(font);

        formLayout->setWidget(3, QFormLayout::FieldRole, quantitylineEdit);

        linklabel = new QLabel(centralwidget);
        linklabel->setObjectName(QString::fromUtf8("linklabel"));
        linklabel->setFont(font);

        formLayout->setWidget(4, QFormLayout::LabelRole, linklabel);

        linklineEdit = new QLineEdit(centralwidget);
        linklineEdit->setObjectName(QString::fromUtf8("linklineEdit"));
        linklineEdit->setFont(font);

        formLayout->setWidget(4, QFormLayout::FieldRole, linklineEdit);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addButton = new QPushButton(centralwidget);
        addButton->setObjectName(QString::fromUtf8("addButton"));

        horizontalLayout->addWidget(addButton);

        editButton = new QPushButton(centralwidget);
        editButton->setObjectName(QString::fromUtf8("editButton"));

        horizontalLayout->addWidget(editButton);

        deleteButton = new QPushButton(centralwidget);
        deleteButton->setObjectName(QString::fromUtf8("deleteButton"));

        horizontalLayout->addWidget(deleteButton);


        verticalLayout->addLayout(horizontalLayout);

        CoatGUI->setCentralWidget(centralwidget);
        menubar = new QMenuBar(CoatGUI);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 947, 22));
        CoatGUI->setMenuBar(menubar);
        statusbar = new QStatusBar(CoatGUI);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        CoatGUI->setStatusBar(statusbar);

        retranslateUi(CoatGUI);
        QObject::connect(addButton, SIGNAL(clicked()), CoatGUI, SLOT(addCoat()));
        QObject::connect(editButton, SIGNAL(clicked()), CoatGUI, SLOT(editCoat()));

        QMetaObject::connectSlotsByName(CoatGUI);
    } // setupUi

    void retranslateUi(QMainWindow *CoatGUI)
    {
        CoatGUI->setWindowTitle(QCoreApplication::translate("CoatGUI", "CoatGUI", nullptr));
        sizelabel->setText(QCoreApplication::translate("CoatGUI", "Size", nullptr));
        colorlabel->setText(QCoreApplication::translate("CoatGUI", "Color", nullptr));
        pricelabel->setText(QCoreApplication::translate("CoatGUI", "Price", nullptr));
        quantitylabel->setText(QCoreApplication::translate("CoatGUI", "Quantity", nullptr));
        linklabel->setText(QCoreApplication::translate("CoatGUI", "Link", nullptr));
        addButton->setText(QCoreApplication::translate("CoatGUI", "Add", nullptr));
        editButton->setText(QCoreApplication::translate("CoatGUI", "Edit", nullptr));
        deleteButton->setText(QCoreApplication::translate("CoatGUI", "Delete", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CoatGUI: public Ui_CoatGUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COATGUI_H
