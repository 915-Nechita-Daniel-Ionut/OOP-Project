#pragma once
#include "user.h"

class RepositoryHTML : public User {
public:
    RepositoryHTML(const std::string &fileName);
    void writeToFile() override;
    ~RepositoryHTML();
    void open() override;
};