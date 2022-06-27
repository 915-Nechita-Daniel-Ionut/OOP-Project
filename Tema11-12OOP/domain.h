
#pragma once
#include <string>
#include <fstream>
using std::string;
using std::ostream;
using std::istream;

class Coat{
private:
    int size, price, quantity;
    string colour, coatLink;

public:
    Coat();

    Coat(int size, string colour, int price, int quantity, string coatLink);

    Coat(const Coat& coat);

    int getSize() const{ return this -> size;}

    int getPrice() const{ return this -> price;}

    int getQuantity() const{return this -> quantity;}

    string getColour() const{return this -> colour;}

    string getLink() const{return this -> coatLink;}

    ~Coat();

    void changeQuantity(int q){this -> quantity = q;}

    void changePrice(int p){this -> price = p;}

    string toString();

    void showPhoto();

    bool operator ==(const Coat &c)const;

    Coat& operator =(const Coat &c);

    friend ostream& operator << (ostream &os , const Coat &c);

    friend istream& operator >> (istream &is , Coat &c);

};
