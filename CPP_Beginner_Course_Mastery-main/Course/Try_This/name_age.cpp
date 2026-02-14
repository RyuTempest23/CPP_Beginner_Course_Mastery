#include "std_library.h"
using std::string;

int main() {
    string first_name = input_str("Enter your first name: "); 
    string last_name  = input_str("Enter your last name : ");

    std::cout << "Hello, " << first_name << " " << last_name << "!\n";

    keep_window_open();
    return 0;
}