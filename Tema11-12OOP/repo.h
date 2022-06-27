#include "domain.h"
#include <vector>
#pragma once


class Repo {
private:
    std::vector<Coat> data;
    std:: string filename;

public:
    explicit Repo(const string &filename);
    unsigned int getRepoSize() const {return this -> data.size();}
    void add(Coat &coat);
    void remove(int size, const std::string &colour, int price);
    void update(int size, const std::string &colour, int price, int new_price, int new_quantity);
    std::vector<Coat> & getAll() {return this -> data;}
    std::vector<Coat> getCoatsBySize(unsigned int size);

    void readFromFile();
    void writeToFile();

};

class RepositoryException: public std::exception {
private:
    std::string message;
public:
    explicit RepositoryException(const std::string &message);
    const char *what() const noexcept override;
};