#include "std_library.h"

int main() {
    // TODO: write out a table of characters with their corresponding integer values.

    // big characters
    for (int i = 0; i < 26; i++) {
        std::cout << char('A' + i) << "\t" << int('A' + i) << "\n";
    }

    // small characters
    for (int i = 0; i < 26; i++) {
        std::cout << char('a' + i) << "\t" << int('a' + i) << "\n";
    }

    keep_window_open();
    return 0;
}