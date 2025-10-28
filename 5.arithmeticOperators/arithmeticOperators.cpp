#include <iostream>

// Returns the result of a specific operation (- + * /)
// Arithmetic has an order of precedence: parenthesis, multiplication and division, then addition and subtraction.

int main () {

    int students = 20;

    students = students + 1;
    std::cout << students << std::endl;

    students++;
    std::cout << students << std::endl;

    students += 1;
    std::cout << students << std::endl;

    students *= 2;
    std::cout << students << std::endl;

    students /= 2;
    std::cout << students << std::endl;

    int remainder = students % 2;
    std::cout << students << std::endl;


    return 0;
}