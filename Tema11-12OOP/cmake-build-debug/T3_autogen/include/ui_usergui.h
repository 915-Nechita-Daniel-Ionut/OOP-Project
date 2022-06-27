/********************************************************************************
** Form generated from reading UI file 'usergui.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERGUI_H
#define UI_USERGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_usergui
{
public:
    QWidget *layoutWidget;
    QFormLayout *formLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *sizelabel;
    QLineEdit *searchSizelineEdit;
    QPushButton *searchSizeButton;
    QPushButton *printCartButton;
    QHBoxLayout *horizontalLayout;
    QPushButton *addToCartButton;
    QPushButton *nextCoatButton;
    QPushButton *stopButton;
    QListWidget *CartListWidget;

    void setupUi(QWidget *usergui)
    {
        if (usergui->objectName().isEmpty())
            usergui->setObjectName(QString::fromUtf8("usergui"));
        usergui->resize(937, 639);
        layoutWidget = new QWidget(usergui);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 70, 405, 292));
        formLayout = new QFormLayout(layoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        sizelabel = new QLabel(layoutWidget);
        sizelabel->setObjectName(QString::fromUtf8("sizelabel"));
        QFont font;
        font.setPointSize(12);
        sizelabel->setFont(font);

        horizontalLayout_2->addWidget(sizelabel);

        searchSizelineEdit = new QLineEdit(layoutWidget);
        searchSizelineEdit->setObjectName(QString::fromUtf8("searchSizelineEdit"));
        searchSizelineEdit->setFont(font);

        horizontalLayout_2->addWidget(searchSizelineEdit);

        searchSizeButton = new QPushButton(layoutWidget);
        searchSizeButton->setObjectName(QString::fromUtf8("searchSizeButton"));
        searchSizeButton->setFont(font);

        horizontalLayout_2->addWidget(searchSizeButton);

        printCartButton = new QPushButton(layoutWidget);
        printCartButton->setObjectName(QString::fromUtf8("printCartButton"));
        printCartButton->setFont(font);

        horizontalLayout_2->addWidget(printCartButton);


        formLayout->setLayout(1, QFormLayout::LabelRole, horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        addToCartButton = new QPushButton(layoutWidget);
        addToCartButton->setObjectName(QString::fromUtf8("addToCartButton"));
        addToCartButton->setFont(font);

        horizontalLayout->addWidget(addToCartButton);

        nextCoatButton = new QPushButton(layoutWidget);
        nextCoatButton->setObjectName(QString::fromUtf8("nextCoatButton"));
        nextCoatButton->setFont(font);

        horizontalLayout->addWidget(nextCoatButton);

        stopButton = new QPushButton(layoutWidget);
        stopButton->setObjectName(QString::fromUtf8("stopButton"));
        stopButton->setFont(font);

        horizontalLayout->addWidget(stopButton);


        formLayout->setLayout(2, QFormLayout::LabelRole, horizontalLayout);

        CartListWidget = new QListWidget(layoutWidget);
        CartListWidget->setObjectName(QString::fromUtf8("CartListWidget"));

        formLayout->setWidget(0, QFormLayout::LabelRole, CartListWidget);


        retranslateUi(usergui);
        QObject::connect(addToCartButton, SIGNAL(clicked()), usergui, SLOT(addToCart()));
        QObject::connect(nextCoatButton, SIGNAL(clicked()), usergui, SLOT(nextCoat()));
        QObject::connect(searchSizeButton, SIGNAL(clicked()), usergui, SLOT(searchForSize()));
        QObject::connect(stopButton, SIGNAL(clicked()), usergui, SLOT(stopProgram()));
        QObject::connect(printCartButton, SIGNAL(clicked()), usergui, SLOT(printCart()));

        QMetaObject::connectSlotsByName(usergui);
    } // setupUi

    void retranslateUi(QWidget *usergui)
    {
        usergui->setWindowTitle(QCoreApplication::translate("usergui", "usergui", nullptr));
        sizelabel->setText(QCoreApplication::translate("usergui", "Size", nullptr));
        searchSizeButton->setText(QCoreApplication::translate("usergui", "Search", nullptr));
        printCartButton->setText(QCoreApplication::translate("usergui", "Print Cart", nullptr));
        addToCartButton->setText(QCoreApplication::translate("usergui", "Add to cart", nullptr));
        nextCoatButton->setText(QCoreApplication::translate("usergui", "Next coat", nullptr));
        stopButton->setText(QCoreApplication::translate("usergui", "Stop", nullptr));
    } // retranslateUi

};

namespace Ui {
    class usergui: public Ui_usergui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERGUI_H
