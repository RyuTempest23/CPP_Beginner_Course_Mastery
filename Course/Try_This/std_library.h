#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <iomanip>
#include <algorithm>

using std::string;
using std::vector;

// Keep the console window open until the user press any key.
void keep_window_open() {
    std::cout << std::endl;
    system("pause");
}

// Convert any strings to lowercase letters.
void lower(string &str) {
    for (char &c : str) {
        c = std::tolower((unsigned char)c);
    }
}

// Convert any strings to uppercase letters.
void upper(string &str) {
    for (char &c : str) {
        c = std::toupper((unsigned char)c);
    }
}

// Convert any strings to titlecase (example:  i love you -> I Love You).
void title(string &str) {
    bool capitaize_next = true;
    for (char &c : str) {
        if (capitaize_next) {
            c = std::toupper((unsigned char)c);
            capitaize_next = false;
        } else {
            c = std::tolower((unsigned char)c);
        }
    }
}

// Returna a string input value.
string inpute_str(const string &text) {
    string str;
    std::cout << str;
    std::cin >> str;
    return str;
}

// Returns an integer input value.
int inpute_int(const string &text) {
    int num;
    std::cout << text;
    std::cin >> num;
    return num;
}

// Returns a double input value.
int inpute_double(const string &text) {
    double num;
    std::cout << text;
    std::cin >> num;
    return num;
}

// Returns a character input value.
char inpute_char(const string &text) {
    char ch;
    std::cout << text;
    std::cin >> ch;
    return ch;
}

// Prompts the user to try again or not.
bool try_again() {
    char c = inpute_char("Do you want to try again [y/n]?: ");
    return c == 'y' || c == 'Y';
}

// Returns the maximum value between two number.
int get_max(int num1, int num2) {
    return num1 > num2 ? num1 : num2; 
}

// Returns the minimum value between two number.
int get_min(int num1, int num2) {
    return num1 < num2 ? num1 : num2; 
}