#include "std_library.h"

int main() {
    // TODO: converts spelled-out numbers such as "zero" and "one" into digits 0 and 1.
    // TODO: do it for the values 0, 1, 2, 3, and 4

    std::string str_num;

    std::cout << "Enter a spelled-out number (zero, one, two, three, four): ";
    std::cin >> str_num;

    // call helper function to make the string input into lowercase (for safety comparison)
    lower(str_num);

    if (str_num == "zero") {
        std::cout << str_num << " == " << 0;
    } else if (str_num == "one") {
        std::cout << str_num << " == " << 1;
    } else if (str_num == "two") {
        std::cout << str_num << " == " << 2;
    } else if (str_num == "three") {
        std::cout << str_num << " == " << 3;
    } else if (str_num == "four") {
        std::cout << str_num << " == " << 4;
    } else {
        std::cout << "Not a number I know!";
    }
    std::cout << "\n";

    keep_window_open();
    return 0;
}