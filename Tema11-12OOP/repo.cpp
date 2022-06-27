#include "repo.h"
#include <algorithm>
#include <stdexcept>
#include <string>

Repo::Repo(const string &filename){
    this-> filename = filename;
    this -> readFromFile();
}

void Repo::readFromFile() {
    std::ifstream file(this -> filename);
    Coat c;
    if(!file.is_open())
        return ;
    while(file >> c){
        this -> add(c);
    }
    file.close();
}

void Repo::writeToFile() {
    std::ofstream file(this -> filename);
    if(!file.is_open())
        return ;
    for(const auto& s : this -> data){
        file << s;
    }
    file.close();
}

RepositoryException::RepositoryException(const std::string &message) {
    this -> message = message;
}

const char *RepositoryException::what() const noexcept {
    return this -> message.c_str();
}


void Repo::add(Coat &coat) {
    int size = coat.getSize(), price = coat.getPrice();
    const std::string colour = coat.getColour();
    auto it = std::find_if(this -> data.begin() , this -> data.end() , [size, price, colour]\
    (const Coat &C){return size == C.getSize() && price == C.getPrice() && colour == C.getColour();});
    if(it != this -> data.end())
        throw RepositoryException("Coat already exists!");
    this -> data.push_back(coat);
    this -> writeToFile();
}

//int Repo::find(int size, std::string colour, int price) {
//    for(int i = 0; i< this->data.getSize(); i++){
//        if(this ->data[i].getSize() == size && this ->data[i].getColour() == colour && this ->data[i].getPrice() == price){
//            return i;
//        }
//    }
//    return -1;
//}

void Repo::remove(int size, const std::string &colour, int price) {
    auto it = std::find_if(this -> data.begin() , this -> data.end() , [size, price, colour]\
    (const Coat &C){return size == C.getSize() && price == C.getPrice() && colour == C.getColour();});
    if(it == this -> data.end())
        throw RepositoryException("Coat does not exists!");
    this -> data.erase(it);
    this -> writeToFile();
}

void Repo::update(int size, const std::string &colour, int price, int new_price, int new_quantity) {
    auto it = std::find_if(this -> data.begin() , this -> data.end() , [size, price, colour]\
    (const Coat &C){return size == C.getSize() && price == C.getPrice() && colour == C.getColour();});
    if(it == this -> data.end())
        throw RepositoryException("Coat does not exists!");
    it->changePrice(new_price);
    it->changeQuantity(new_quantity);
    this -> writeToFile();
}

//DynamicVector<Coat> Repo::getAll() {
//    return this -> data;
//}

std::vector<Coat> Repo::getCoatsBySize(unsigned int size){
    std::vector <Coat> result(this -> data.size());
    auto it = std::copy_if(this -> data.begin() , this -> data.end() ,
                           result.begin() , [size](const Coat &c) {return size == c.getSize();});
    result.resize(std::distance(result.begin() , it));
    return result;
}




