#include "std_library.h"

int main() {
    // TODO: Do exercise 6 but use a string variable.

    // Declare variables of strings and vector of string
    std::string str1, str2, str3;
    std::vector<std::string> strings;

    std::cout << "Please enter three string values: ";
    std::cin >> str1 >> str2 >> str3;

    // Append the values at the end of the vector
    strings.push_back(str1);
    strings.push_back(str2);
    strings.push_back(str3);

    // Sort the values inside the vector
    std::sort(strings.begin(), strings.end());

    // Sorted output
    std::cout << strings[0] << ", " << strings[1] << ", " << strings[2] << "\n";

    keep_window_open();
    return 0;
}