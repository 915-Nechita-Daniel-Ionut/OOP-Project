
#include "validator.h"

ValidationException::ValidationException(const std::string &msg) {
    this -> errorMsg = msg;
}

const char *ValidationException::what() const noexcept {
    return this -> errorMsg.c_str();
}

void ValidateCoat::validateSize(int size) {
    if(size < 0 )
        throw ValidationException("Size can't be negative!");
}


void ValidateCoat::validateQuantity(int quantity) {
    if(quantity < 0)
        throw ValidationException("Quantity can't be negative!");
}

void ValidateCoat::validatePrice(int price) {
    if(price < 0)
        throw ValidationException("Price can't be nagative!");
}


void ValidateCoat::validateColour(const std::string &colour) {
    std::string errorMsg;
    if(colour.empty())
        errorMsg += "Title cannot be empty!\n";
    if(!errorMsg.empty())
        throw ValidationException(errorMsg);
}

void ValidateCoat::validateCoat(int size, const std::string &colour, int price, int quantity,
                                const std::string &coatLink) {
    std::string errorMsg;

    if (size < 0)
        errorMsg += "Size can't be negative!\n";
    if (price < 0)
        errorMsg += "Price can't be nagative!\n";
    if (quantity < 0)
        errorMsg += "Quantity can't be negative!\n";
    if (colour.empty())
        errorMsg += "Title cannot be empty!\n";
    if (coatLink.empty())
        errorMsg += "Link cannot be empty!\n";

    if (!errorMsg.empty())
        throw ValidationException(errorMsg);
}