//
// Created by Nechita Daniel on 29 May 2022.
//

#ifndef T3_HOMEGUI_H
#define T3_HOMEGUI_H

#include <QWidget>

#include "service.h"

QT_BEGIN_NAMESPACE
namespace Ui { class homegui; }
QT_END_NAMESPACE

class homegui : public QWidget {
Q_OBJECT

public:
    explicit homegui(Services& s, Services& us, QWidget *parent = nullptr);

    ~homegui() override;

private:
    Services& serv;
    Services& user;
    Ui::homegui *homeui;

public slots:
    void openAdminMode();
    void openUserMode();

};


#endif //T3_HOMEGUI_H
