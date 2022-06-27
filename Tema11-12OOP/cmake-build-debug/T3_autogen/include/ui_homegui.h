/********************************************************************************
** Form generated from reading UI file 'homegui.ui'
**
** Created by: Qt User Interface Compiler version 6.3.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOMEGUI_H
#define UI_HOMEGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_homegui
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *adminModeButton;
    QPushButton *userModeButton;

    void setupUi(QWidget *homegui)
    {
        if (homegui->objectName().isEmpty())
            homegui->setObjectName(QString::fromUtf8("homegui"));
        homegui->resize(445, 307);
        layoutWidget = new QWidget(homegui);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(130, 60, 221, 101));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        adminModeButton = new QPushButton(layoutWidget);
        adminModeButton->setObjectName(QString::fromUtf8("adminModeButton"));
        adminModeButton->setEnabled(true);

        horizontalLayout->addWidget(adminModeButton);

        userModeButton = new QPushButton(layoutWidget);
        userModeButton->setObjectName(QString::fromUtf8("userModeButton"));

        horizontalLayout->addWidget(userModeButton);


        retranslateUi(homegui);
        QObject::connect(adminModeButton, SIGNAL(clicked()), homegui, SLOT(openAdminMode()));
        QObject::connect(userModeButton, SIGNAL(clicked()), homegui, SLOT(openUserMode()));

        QMetaObject::connectSlotsByName(homegui);
    } // setupUi

    void retranslateUi(QWidget *homegui)
    {
        homegui->setWindowTitle(QCoreApplication::translate("homegui", "homegui", nullptr));
        adminModeButton->setText(QCoreApplication::translate("homegui", "Admin Mode", nullptr));
        userModeButton->setText(QCoreApplication::translate("homegui", "User Mode", nullptr));
    } // retranslateUi

};

namespace Ui {
    class homegui: public Ui_homegui {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOMEGUI_H
