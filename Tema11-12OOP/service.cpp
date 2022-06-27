
#include <algorithm>
#include "service.h"
#include "validator.h"



void Services::addToDataBase(int size, const string &colour, int price, int quantity, const string &coatLink) {
    ValidateCoat::validateCoat(size, colour, price, quantity, coatLink);
    Coat coat(size, colour, price, quantity, coatLink);
    repo.add(coat);
}

void Services::removeFromDataBase(int size, const string &colour, int price) {
    ValidateCoat::validateSize(size);
    ValidateCoat::validateColour(colour);
    ValidateCoat::validatePrice(price);
    repo.remove(size, colour, price);
}



void Services::updateCoat(int size, const string &colour, int price, int new_price, int new_quantity) {
    ValidateCoat::validateSize(size);
    ValidateCoat::validateColour(colour);
    ValidateCoat::validatePrice(price);
    ValidateCoat::validatePrice(new_price);
    ValidateCoat::validateQuantity(new_quantity);
    repo.update(size, colour, price, new_price, new_quantity);
}

std::vector<Coat> Services::getCoatsBySize(int size) {
    ValidateCoat::validateSize(size);
    return repo.getCoatsBySize(size);
}

//int Services::removeFromList(DynamicVector<Coat> &list, int size, std::string colour, int price) {
//    for(int i = 0; i<list.getSize();i++){
//        if(list[i].getSize() == size && list[i].getColour() == colour && list[i].getPrice() == price){
//            list.remove(i);
//            return 0;
//        }
//    }
//    return 1;
//}


void Services::addUser(const Coat &c) {
    this -> userRepo->addCoat(c);
    this -> userRepo->writeToFile();
}

void Services::deleteUser(int size, const string &colour, int price) {
    this -> userRepo->removeCoat(size, colour, price);
    this -> userRepo -> writeToFile();
}

void Services::openRepo() {
    this -> userRepo->open();
}

Services::~Services() {
    delete this -> userRepo;
}

void Services::handleUserRepo(const string &type) {
    std::string fileName;
    if(type == "html"){
        userRepo = new RepositoryHTML("example.html");
    }
    else if(type == "csv"){
        userRepo = new RepositoryCSV("example.csv");
    }
}