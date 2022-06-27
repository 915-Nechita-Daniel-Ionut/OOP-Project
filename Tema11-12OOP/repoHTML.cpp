#include "repoHTML.h"


RepositoryHTML::RepositoryHTML(const std::string &fileName) {
    this -> fileName = fileName;
    std::ofstream f(this -> fileName);
}

void RepositoryHTML::writeToFile() {
    std::ofstream file(this -> fileName);
    file << "<!DOCTYPE html>\n<html>\n<head><title> Coats </title> \n</head> \n <body> \n";
    file << "<table border=\"1\">\n";
    for(const auto &c : this -> coatList){
        file << "<tr><td>" << c.getSize() << "</td>";
        file << "<td>" << c.getColour() << "</td>";
        file << "<td>" << c.getPrice() << "</td>";
        file << "<td>" << c.getQuantity() << "</td>";
        file << "<td> <a href = \"\">" << c.getLink() << "</a> </td>";
        file << '\n';
    }
    file << " </tr> </table> </body> </html>";
    file.close();
}

RepositoryHTML::~RepositoryHTML() {
    this -> writeToFile();
}


void RepositoryHTML::open() {
    system("explorer.exe example.html");
}