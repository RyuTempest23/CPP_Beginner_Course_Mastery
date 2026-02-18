#include "std_library.h"

int main() {
    // TODO: write out a table of characters with their corresponding integer values.

    char c = 'A';
    // output big characters
    while (c <= 'Z') {
        std::cout << c << "\t" << int(c) << "\n";
        c++;
    }
    
    c = 'a';
    // output small characters
    while (c <= 'z') {
        std::cout << c << "\t" << int(c) << "\n";
        c++;
    }

    keep_window_open();
    return 0;
}