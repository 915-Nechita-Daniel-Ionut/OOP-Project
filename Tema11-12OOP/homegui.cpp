

#include "homegui.h"
#include "./ui_homegui.h"

#include "coatgui.h"
//#include "./ui_coatgui.h"

#include "usergui.h"
//#include "./ui_usergui.h"


homegui::homegui(Services& s, Services& us, QWidget *parent) :
        QWidget(parent), serv{s}, user{us},
        homeui(new Ui::homegui) {
    homeui->setupUi(this);
}

homegui::~homegui() {
    delete homeui;
}

void homegui::openAdminMode() {
    CoatGUI* gui = new CoatGUI{serv};
    close();
    gui->show();
}

void homegui::openUserMode() {
    usergui *gui = new usergui{user};
    close();
    gui->show();
}

