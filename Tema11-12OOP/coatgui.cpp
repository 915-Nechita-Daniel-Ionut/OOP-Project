#include <QMessageBox>
#include "coatgui.h"
#include "./ui_coatgui.h"

using namespace std;

CoatGUI::CoatGUI(Services&s, QWidget *parent)
    : QMainWindow(parent), serv{s}
    , ui(new Ui::CoatGUI)
{
    ui->setupUi(this);
    this->populatelist();
    this->connectSignalAndSlots();
}

CoatGUI::~CoatGUI()
{
    delete ui;
}

void CoatGUI::populatelist() {
    this->ui->coatlistWidget-> clear();
    vector<Coat> allCoats = this->serv.getData();
    for(Coat& c : allCoats)
        this->ui->coatlistWidget->addItem(QString::fromStdString(c.toString()));

}

void CoatGUI::connectSignalAndSlots() {
    QObject::connect(this->ui->deleteButton, &QPushButton::clicked, this, &CoatGUI::deleteCoat);
}

void CoatGUI::deleteCoat() {
    int selectedIndex = this->getSelectedIndex();
    if(selectedIndex < 0){
        QMessageBox::critical(this, "Error", "No coat was selected!");
        return;
    }
    Coat c = this->serv.getData()[selectedIndex];
    this ->serv.removeFromDataBase(c.getSize(), c.getColour(), c.getPrice());
    this->populatelist();
}

int CoatGUI::getSelectedIndex() const {
    QModelIndexList selectedIndexes = this -> ui->coatlistWidget->selectionModel()->selectedIndexes();
    if(selectedIndexes.size() == 0){
        this->ui->sizelineEdit->clear();
        this->ui->colorlineEdit->clear();
        this->ui->pricelineEdit->clear();
        this->ui->quantitylineEdit->clear();
        this->ui->linklineEdit->clear();
        return -1;
    }
    int selectedIndex = selectedIndexes.at(0).row();
    return selectedIndex;
}

void CoatGUI::addCoat() {
    int size = this->ui->sizelineEdit->text().toInt();
    string color = this->ui->colorlineEdit->text().toStdString();
    int price = this->ui->pricelineEdit->text().toInt();
    int quantity = this->ui->quantitylineEdit->text().toInt();
    string link = this->ui->linklineEdit->text().toStdString();

    vector<Coat> allcoats = this->serv.getData();
    auto it = std::find_if(allcoats.begin() , allcoats.end() , [size, price, color](const Coat &C){return size == C.getSize() && price == C.getPrice() && color == C.getColour();});
    if(it !=allcoats.end()){
        QMessageBox::critical(this, "Error", "Coat already exists!");
        return;
    }

    this->serv.addToDataBase(size, color, price, quantity, link);
    this->populatelist();
    int lastElement = this->serv.getSize() -1;
    this->ui->coatlistWidget->setCurrentRow(lastElement);

}

void CoatGUI::editCoat() {
    int selectedIndex = this->getSelectedIndex();
    if(selectedIndex < 0){
        QMessageBox::critical(this, "Error", "No coat was selected!");
        return;
    }
    Coat c = this->serv.getData()[selectedIndex];
    int new_price = this->ui->pricelineEdit->text().toInt();
    int new_quantity = this->ui->quantitylineEdit->text().toInt();
    this->serv.updateCoat(c.getSize(), c.getColour(), c.getPrice(), new_price, new_quantity);
    this->populatelist();
}
