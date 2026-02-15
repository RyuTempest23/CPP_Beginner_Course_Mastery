#include "std_library.h"

int main() {
    // TODO: Implement a program that prompts the user of three integer value, then output it in numerical sequence.

    int num1, num2, num3;
    std::vector<int> nums;

    std::cout << "Please enter three integer values: ";
    std::cin >> num1 >> num2 >> num3;

    // Append the element at the end of the vector
    nums.push_back(num1);
    nums.push_back(num2);
    nums.push_back(num3);

    // Sort the elements inside the vector
    std::sort(nums.begin(), nums.end());

    // Sorted output
    std::cout << nums[0] << ", " << nums[1] << ", " << nums[2] << "\n";

    keep_window_open();
    return 0;
}