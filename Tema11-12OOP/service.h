#pragma once
#include "repo.h"
#include "user.h"
#include "repoHTML.h"
#include "repoCSV.h"
using std::string;


class Services{
private:
    Repo &repo;
    User *userRepo;
public:
    Services(Repo &repo) : repo{repo}{};//
    unsigned int getSize() const {return repo.getRepoSize();}//
    void addToDataBase(int size, const string &colour, int price, int quantity, const string &coatLink);//
    void removeFromDataBase(int size, const string &colour, int price);//
    std::vector<Coat> getCoatsBySize(int size);//
    void updateCoat(int size, const string &colour, int price, int new_price, int new_quantity);//
    std::vector<Coat>& getData(){return repo.getAll();}//
    void addUser(const Coat &c);//

    void deleteUser(int size, const std::string &colour, int price);//
    std::vector<Coat> getUserData() {return this -> userRepo->getData();};//
    void handleUserRepo(const std::string &type);
    void openRepo();
    ~Services();
};