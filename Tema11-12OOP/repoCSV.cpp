#include "repoCSV.h"

RepositoryCSV::RepositoryCSV(const string &fileName) {
    this -> fileName = fileName;
    std::ofstream file(this -> fileName);
}


void RepositoryCSV::writeToFile() {
    std::ofstream file(this -> fileName);
    for(const auto &c : this -> coatList){
        file << c.getSize() << ',' << c.getColour() << ',' << c.getPrice() << ',' <<c.getQuantity() << ','<< c.getLink();
        file << '\n';
    }
    file.close();
}


RepositoryCSV::~RepositoryCSV() {
    this -> writeToFile();
}

void RepositoryCSV::open() {
    system("explorer.exe example.csv");
}






