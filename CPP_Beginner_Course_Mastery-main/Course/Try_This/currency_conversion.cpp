#include "std_library.h"

int main() {
    // TODO: write a program that converts yen, euros, and pounds into dollars.

    double amount;
    std::string currency;
    std::string yenUnit = "JPY";
    std::string euroUnit = "EUR";
    std::string poundUnit = "GBP";

    std::cout << "Enter the currency (yen, euro, pound): ";
    std::cin >> currency;

    std::cout << "Enter the amount: ";
    std::cin >> amount;

    lower(currency);

    // currency to dollar
    double yenDollar = amount / 153.83;    
    double euroDollar = amount / 1.1820;    
    double poundDollar = amount / 1.3551;    

    if (currency == "yen") {
        std::cout << amount << " " << yenUnit << " == " << yenDollar << (yenDollar > 1 ? " dollars" : " dollar");
    } else if (currency == "euro") {
        std::cout << amount << " " << euroUnit << " == " << euroDollar << (euroDollar > 1 ? " dollars" : " dollar");       
    } else if (currency == "pound") {
        std::cout << amount << " " << poundUnit << " == " << poundDollar << (poundDollar > 1 ? " dollars" : " dollar");
    }
    std::cout << "\n";

    keep_window_open();
    return 0;
}