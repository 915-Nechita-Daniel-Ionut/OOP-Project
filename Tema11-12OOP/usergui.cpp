
#include <QMessageBox>
#include "usergui.h"
#include "./ui_usergui.h"
#include <vector>


usergui::usergui(Services& us, QWidget *parent) :
        QWidget(parent), user{us}
        ,ui(new Ui::usergui) {
    ui->setupUi(this);
}

usergui::~usergui() {
    delete ui;
}

void usergui::searchForSize() {
    searchSize = this->ui->searchSizelineEdit->text().toInt();
    counter = 0;
    if(searchSize == 0)
        sizeCoats = this->user.getData();
    else
        sizeCoats = this->user.getCoatsBySize(searchSize);
    sizeCoats[counter].showPhoto();

}

void usergui::addToCart() {
    //this->ui->CartListWidget->addItem(QString::fromStdString(cartCoats[counter].toString()));
    cartCoats.push_back(sizeCoats[counter]);
    nextCoat();

}

void usergui::nextCoat() {
    if(counter < sizeCoats.size() - 1)
        counter++;
    else
        counter = 0;
    sizeCoats[counter].showPhoto();
}

void usergui::stopProgram() {
    close();
}

void usergui::printCart() {
    this->ui->CartListWidget-> clear();
    int cartprice = 0;
    for(Coat& c : cartCoats) {
        cartprice+=c.getPrice();
        this->ui->CartListWidget->addItem(QString::fromStdString(c.toString()));
    }
    this->ui->CartListWidget->addItem(QString::fromStdString(to_string(cartprice)));

}


