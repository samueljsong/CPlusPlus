#include <iostream>

// The const keyword tells the compiler that a variables value is constant 
// It tells the compiler to prevent anything from modifying it
// (readonly)
int main () {
    
    const double PI = 3.14159;             // we do not want the value of pi to change so lets pake it const
    
    double radius        = 10;
    double circumference = 2 * PI * radius;

    std::cout << circumference <<  "cm" << std::endl;

    return 0;
}