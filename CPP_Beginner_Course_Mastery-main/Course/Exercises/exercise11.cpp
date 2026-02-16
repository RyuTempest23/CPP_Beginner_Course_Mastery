#include "std_library.h"

int main() {
    /*
    * TODO: program that prompts the user to enter some number of pennies (1-cent coins), 
    * nickels (5-cent coins), dimes (10-cent coins), quarters (25-cent coins), 
    * half dollars (50-cent coins), and one-dollar coins (100-cent coins).
    */

    double penny = input_double("How many pennies do you have? ");
    double nickel = input_double("How many nickels do you have? ");
    double dime = input_double("How many dimes do you have? ");
    double quarter = input_double("How many quarter do you have? ");
    double half_dollar = input_double("How many half-dollars do you have? ");
    double dollar = input_double("How many dollars do you have? ");

    std::vector<double> coins = { penny, nickel * 5, dime * 10, quarter * 25, half_dollar * 50, dollar * 100 };
    double total_coins = std::accumulate(coins.begin(), coins.end(), 0.0) / 100;

    std::string penny_unit = penny > 1 ? " pennies" : " penny";
    std::string nickel_unit = nickel > 1 ? " nickels" : " nickel";
    std::string dime_unit = dime > 1 ? " dimes" : " dime";
    std::string quarter_unit = quarter > 1 ? " quarters" : " quarter";
    std::string half_unit = half_dollar > 1 ? " half-dollars" : " half-dollar";
    std::string dollar_unit = dollar > 1 ? " dollars" : " dollar";

    std::cout << "\nYou have " << penny << penny_unit << "\n";
    std::cout << "You have " << nickel << nickel_unit << "\n";
    std::cout << "You have " << dime << dime_unit << "\n";
    std::cout << "You have " << quarter << quarter_unit << "\n";
    std::cout << "You have " << half_dollar <<half_unit << "\n";
    std::cout << "You have " << dollar << dollar_unit << "\n";
    std::cout << "\nYour total coins is $" << total_coins << ".\n";

    keep_window_open();
    return 0;
}