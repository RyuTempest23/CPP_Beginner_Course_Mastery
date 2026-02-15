#include "std_library.h"

int main() {
    // TODO: Make a program that converts miles to kilometers. 
    // 1 mile = 1.609 kilometers
    double mile;
    constexpr double KM = 1.609;

    std::cout << "Enter the value of mile/s: ";
    std::cin >> mile;

    double km_per_mile = mile * KM;
    std::string m_unit = mile > 1 ? "miles" : "miles";
    std::string km_unit = km_per_mile > 1 ? "kilometers" : "kilometer";

    std::cout << mile << " " << m_unit << " == " << km_per_mile << " " << km_unit << "\n";

    keep_window_open();
    return 0;
}