#pragma once
#include "user.h"

class RepositoryCSV: public User {
public:
    RepositoryCSV(const std::string &fileName);
    void writeToFile() override;
    void open() override;
    ~RepositoryCSV();
};