#include "std_library.h"

int main() {
    // TODO: prompts the user for an integer and identify if it is odd or even.

    int n;

    std::cout << "Enter an integer: ";
    std::cin >> n;

    // check if the remainder of n / 2 is 0 or not, if true, then it is even, otherwise it is odd.
    if (n % 2 == 0) {
        std::cout << n << " is an even number.\n";
    } else {
        std::cout << n << " is an odd number.\n";
    }

    keep_window_open();
    return 0;
}