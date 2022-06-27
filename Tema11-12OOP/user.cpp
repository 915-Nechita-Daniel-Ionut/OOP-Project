#include "user.h"
#include <stdexcept>

User::User() = default;


void User::addCoat(const Coat &coat) {
    int size = coat.getSize(), price = coat.getPrice();
    const std::string colour = coat.getColour();
    auto it = std::find_if(this -> coatList.begin() , this -> coatList.end() , [size, price, colour]\
    (const Coat &C){return size == C.getSize() && price == C.getPrice() && colour == C.getColour();});
    if(it != this -> coatList.end())
        throw UserException("Coat already exists!");
    this -> coatList.push_back(coat);
    this -> writeToFile();
}

void User::removeCoat(int size, const std::string &colour, int price) {

    auto it = std::find_if(this -> coatList.begin() , this -> coatList.end() , [size, price, colour]\
    (const Coat &C){return size == C.getSize() && price == C.getPrice() && colour == C.getColour();});
    if(it == this -> coatList.end())
        throw UserException("Coat does not exists!");
    this -> coatList.erase(it);
    this -> writeToFile();
}


UserException::UserException(const string &msg) {
    this -> message = msg;
}

const char *UserException::what() const noexcept {
    return this -> message.c_str();
}

