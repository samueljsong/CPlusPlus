#include <iostream>

using string_t = std::string;

int main() {
    int age = 20;

    // Standard if else
    if (age > 20)
        std::cout << "Your age is too old" << std::endl;
    else
        std::cout << "You are only " << age << std::endl;

    // Else if statement
    if (age == 21)
        std::cout << "Viral meme" << std::endl;
    else if (age == 20)
        std::cout << "Correct Age" << std::endl;
    else
        std::cout << "IDK" << std::endl;


    // Ternary operators
    string_t message = (age > 20) ? "old" : "young";
    
    return 0;
}