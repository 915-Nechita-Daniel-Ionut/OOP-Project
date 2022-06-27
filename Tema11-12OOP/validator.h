#pragma once
#include <vector>
#include <iostream>
#include <string>

class ValidationException : public std::exception {
private:
    std::string errorMsg;
public:
    explicit ValidationException(const std::string &msg);
    const char* what() const noexcept override;
};


class ValidateCoat {
public:
    static void validateSize(int size);
    static void validatePrice(int price);
    static void validateQuantity(int quantity);
    static void validateColour(const std::string &colour);
    static void validateCoat(int size, const std::string &colour, int price, int quantity, const std::string &coatLink);
};