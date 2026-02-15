#include "std_library.h"

int main() {
    string current_word;
    string previous_word = "";

    std::cout << "Please enter any word or enter q to quit.\n";

    while (std::cin >> current_word) {
        if (current_word == "q") {
            break;
        }
        if (previous_word == current_word) {
            std::cout << "Repeated word: " << current_word << "\n";
        }
        previous_word = current_word;
    }

    keep_window_open();
    return 0;
}