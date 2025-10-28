#include <iostream>

// std: standard
// cout: character output

int main () {

    std::cout << "This is the beginning of the string"; 
    std::cout << " And this will be printed on the same line.";

    std::cout << std::endl; // This will create a new line.

    std::cout << "This is printed on a new line" << std::endl;

    std::cout << "Another method is to use the newline character" << '\n';

    std::cout << "This is on a new line as well." << std::endl;

    return 0; // If we return a 0, there was nothing wrong with the program, if its a 1, then that means there was an error.
}