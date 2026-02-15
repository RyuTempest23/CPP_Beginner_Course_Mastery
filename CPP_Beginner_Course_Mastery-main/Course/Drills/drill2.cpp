#include "std_library.h"

int main() {
    /*
     * TODO: make a letter for someone and add an introduction line or two.
     * Next, prompt the user for the name of another friend and ask him/her if he/she saw a person you know.
     * Declare char variable for the gender of that person, and prompt the user to enter m if male, otherwise f if female.
     * Prompt the user to enter the age of the recipient and display his age, if age is less than zero, then display an error.
     * Add this to your letter:
     * if friend is under 12, display the age in next year.
     * if friend is 17, display a message saying that in his/her next birthday he/she can vote.
     * if friend is over 70, display a message saying "I hope you are enjoying your retirement."
     * Lastly, add a closing to the letter, like "Sincerely yours" etc, then your name.
    */
    
    // variables
    int age;
    char gender;
    std::string first_name;
    std::string friend_name;

    // Prompt for the recipient's first name
    std::cout << "Please enter your first name: ";
    std::cin >> first_name;

    // Introduction
    std::cout << "\nDear " << first_name << ",\n";
    std::cout << "\n\tHow are you? I am fine. I miss you.\n";
    std::cout << "\tEven if we are far from each other, my love for you will never disappear.\n";

    // Prompts for the name of another friend
    std::cout << "\tPlease enter the name of your friend: ";
    std::cin >> friend_name;

    // Asks for someone
    std::cout << "\tHave you seen " << friend_name << " lately?\n";
    
    // Prompt for the gender
    std::cout << "\tEnter the gender of your friend: ";
    std::cin >> gender;

    // Check if male or female
    if (gender == 'm' || gender == 'M') {
        std::cout << "\tIf you see " << friend_name << " please ask him to call me.\n";
    } else {
        std::cout << "\tIf you see " << friend_name << " please ask her to call me.\n";
    }

    //Prompts the user for the recipient
    std::cout << "\tEnter the age of the recipient: ";
    std::cin >> age;
    std::cout << "\n\t";

    // Check age conditions
    if (age < 12) {
        std::cout << "You'll be " << age + 1 << " next year.";
    } else if (age == 17) {
        std::cout << "You are able to vote next year.";
    } else if (age > 70) {
        std::cout << "I hope you enjoy your retirement.";
    } 
    std::cout << "\n";

    // Closing 
    std::cout << "\tSincerely yours,\n\tVencie";

    keep_window_open();
    return 0;
}