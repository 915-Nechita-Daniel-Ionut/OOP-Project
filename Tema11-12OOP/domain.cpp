
#include "domain.h"
#include <Windows.h>
#include <string>
#include <iomanip>


Coat::Coat(int size, std::string colour, int price, int quantity, std::string coatLink){
    this -> size = size;
    this -> colour = colour;
    this -> price = price;
    this -> quantity = quantity;
    this -> coatLink = coatLink;
}

Coat::Coat(const Coat& coat){
    this -> size = coat.size;
    this -> colour = coat.colour;
    this -> price = coat.price;
    this -> quantity = coat.quantity;
    this -> coatLink = coat.coatLink;
}


Coat::Coat(){
    this -> size = 0;
    this -> colour = "";
    this -> price = 0;
    this -> quantity = 0;
    this -> coatLink = "";
}


std::string Coat::toString() {
    return "Size: " + std::to_string(this -> size) + " ---Colour: " + this -> colour + " ---Price: " + std::to_string(this -> price) +
           " ---Quantity: " + std::to_string(this ->quantity) + " ---Link: " + this -> getLink();
}

void Coat::showPhoto() {
    ShellExecuteA(nullptr, nullptr, "chrome.exe", this -> getLink().c_str(), nullptr, SW_SHOWMAXIMIZED);
}

Coat::~Coat() = default;

bool Coat::operator==(const Coat &c) const{
    if(c.size != this -> size) return false;
    if(c.colour != this -> colour) return false;
    if(c.price != this -> price) return false;
    if(c.quantity != this -> quantity) return false;
    if(c.coatLink != this -> coatLink) return false;
    return true;
}

ostream &operator<<(ostream &os, const Coat &c) {
    os << c.size << ',';
    os << c.colour << ',';
    os << c.price << ',';
    os << c.quantity << ',';
    os << c.coatLink;
    os << '\n';
    return os;
}

Coat &Coat::operator=(const Coat &c) {
    this -> size = c.size;
    this -> colour = c.colour;
    this -> price = c.price;
    this -> quantity = c.quantity;
    this -> coatLink = c.coatLink;
    return *this;
}


istream &operator>>(istream &is, Coat &c) {
    if(is.eof())
        is.setstate(std::ios_base::failbit);
    else {
        string size, price, quantity;
        getline(is , size , ',');
        getline(is , c.colour , ',');
        getline(is , price , ',');
        getline(is , quantity , ',');
        c.size = atoi(size.c_str());
        c.price = atoi(price.c_str());
        c.quantity = atoi(quantity.c_str());
        getline(is , c.coatLink , '\n');
    }
    return is;
}