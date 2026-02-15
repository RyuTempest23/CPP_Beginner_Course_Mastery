#include "std_library.h"

// Gets the gcd of two integer
int get_gcd(int num1, int num2) {
    while (num2 != 0) {
        int temp = num2; 
        num2 = num1 % num2; 
        num1 = temp;
    }
    return num1;
}

// Return a string representation of a ratio
std::string get_ratio(int num1, int num2) {
    int gcd = get_gcd(num1, num2);
    return std::to_string(num1 / gcd) + ":" + std::to_string(num2 / gcd);
}

int main() {
    /*
    * TODO: make a program that prompts the user for two integer values. 
    * Determine the smallest, largest, sum, difference, product, and ratio.
    */ 

    int num1, num2;

    std::cout << "Please enter two integer values: ";
    std::cin >> num1 >> num2;

    int max = num1 > num2 ? num1 : num2;    
    int min = num1 < num2 ? num1 : num2;   
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    std::string ratio = get_ratio(num1, num2);

    std::cout << "\n";
    std::cout << "Minimum    == " << min << "\n"; 
    std::cout << "Maximum    == " << max << "\n"; 
    std::cout << "Sum        == " << sum << "\n"; 
    std::cout << "Difference == " << difference << "\n"; 
    std::cout << "Product    == " << product << "\n"; 
    std::cout << "Ratio      == " << ratio << "\n"; 

    keep_window_open();
    return 0;
}