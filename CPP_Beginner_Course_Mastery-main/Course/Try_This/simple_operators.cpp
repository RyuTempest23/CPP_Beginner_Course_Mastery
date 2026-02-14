#include "std_library.h"

int main() {
    double num = input_double("Please enter a number: ");

    std::cout << num << " + 1 == "         << num + 1      << "\n";
    std::cout << num << " * 3 == "         << num * 3      << "\n";
    std::cout << num << " - 5 == "         << num - 5      << "\n";
    std::cout << num << " / 7 == "         << num / 7      << "\n";
    std::cout << num << " % 9 == "         << (int)num % 9 << "\n";
    std::cout << num << " twice == "       << num + num    << "\n";
    std::cout << num << " square == "      << num * num    << "\n";
    std::cout << num << " half == "        << num / 2      << "\n";
    std::cout << num << " square root == " << sqrt(num)    << "\n";

    keep_window_open();
    return 0;
}