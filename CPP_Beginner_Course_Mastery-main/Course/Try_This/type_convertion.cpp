#include "std_library.h"

int main() {
    // TODO: Initialize some variables and convert it to char, int, double, and bool

    // int to char
    int num = 65;
    std::cout << (char) num << "\n";

    // char to int
    char ch = 'J';
    std::cout << (int) ch << "\n";

    // double to int
    constexpr double PI = 3.14159265358979323846;
    std::cout << (int) PI << "\n";

    // bool to int
    bool male = true;
    bool female = false;
    std::cout << (int) male << "\n";
    std::cout << (int) female << "\n";
    
    keep_window_open();
    return 0;
}