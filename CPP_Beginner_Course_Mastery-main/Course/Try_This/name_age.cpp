#include "std_library.h"
using std::string;

int main() {
    string first_name = input_str("Please Enter your first name: "); 
    string last_name  = input_str("Please Enter your last name : ");
    int    age        = input_int("Please Enter your age       : ");

    // Concatenate the first name and last name using + operator.
    string full_name  = first_name + " " + last_name;

    std::cout << "\nI am " << full_name << ", and I am " << age << " years old.\n";

    keep_window_open();
    return 0;
}