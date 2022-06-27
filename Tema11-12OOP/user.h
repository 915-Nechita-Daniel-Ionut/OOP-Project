#pragma once
#include <vector>
#include <algorithm>
#include <string>
#include "domain.h"

class User{
protected:
    std::vector<Coat> coatList;
    std::string fileName;
public:
    User();
    std::vector<Coat> getData() {return this -> coatList;};
    unsigned long getSize() const{return this -> coatList.size();};
    void addCoat(const Coat &coat);
    void removeCoat(int size, const std::string &colour, int price);
    virtual void writeToFile() = 0;
    virtual void open() = 0;
};



class UserException : public std::exception {
private:
    std::string message;
public:
    explicit UserException(const std::string &msg);
    const char* what() const noexcept override;
};