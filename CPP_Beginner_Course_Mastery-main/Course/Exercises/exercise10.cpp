#include "std_library.h"

int main() {
    // TODO: implement a program that takes an operation followed by two operands and output the result.

    int num1, num2;
    char operation;

    std::cout << "Choose an operation (+, -, *, /, %): ";
    std::cin >> operation;

    std::cout << "Enter first number: ";
    std::cin >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout << "Result: ";
    if (operation == '+') {
        std::cout << num1 + num2;
    } else if (operation == '-') {
        std::cout << num1 - num2;
    } else if (operation == '*') {
        std::cout << num1 * num2;
    } else if (operation == '/') {
        std::cout << num1 / num2;
    } else if (operation == '%') {
        std::cout << num1 % num2;
    } else {
        std::cout << "Invalid choice of operation!";
    }
    std::cout << "\n";

    keep_window_open();
    return 0;
}