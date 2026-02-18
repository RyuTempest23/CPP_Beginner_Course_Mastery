#include "std_library.h"

enum class Unit { yen, euro, pound, yuan, kroner };

int main() {
    // TODO: write a program that converts yen, euros, pounds, yuan, and kroner into dollars.

    // Make a dictionary for the currency with key-values.
    std::unordered_map<std::string, Unit> currencyMap = {
        {"yen", Unit::yen},
        {"euro", Unit::euro},
        {"pound", Unit::pound},
        {"yuan", Unit::yuan},
        {"kroner", Unit::kroner}
    };

    std::string currency;
    double amount, dollars;

    std::cout << "Enter the amount and currency (yen, euro, pound, yuan, kroner): ";
    std::cin >> amount >> currency;

    // make the currency value lowercase.
    lower(currency);

    // Check if the key is in the dictionary, if not end the program.
    if (currencyMap.find(currency) == currencyMap.end()) {
        std::cout << "Invalid currency!\n";
        keep_window_open();
        return 0;
    }

    // after successfully finding the key, assign the value with that key.
    Unit unit = currencyMap[currency];

    // switch statement is just like if-else statements
    switch (unit) {
        case Unit::yen:
            dollars = amount * 0.0065;
            break;
            
        case Unit::euro:
            dollars = amount * 1820;
            break;

        case Unit::pound:
            dollars = amount * 1.3551;
            break;

        case Unit::yuan:
            dollars = amount * 0.1447;
            break;

        case Unit::kroner:
            dollars = amount * 0.1586;
            break;
    }

    std::cout << amount << " " << currency << " == " << dollars << " USD\n";

    keep_window_open();
    return 0;
}