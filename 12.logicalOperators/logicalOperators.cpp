#include <iostream>

// &&: checks if the two conditions are true
// ||: checks to see if one of the conditions is true
// ! : reverse logical state of an operand.

int main() {

    int age = 25;
    char gender = 'M';

    if (age == 25 && gender == 'M')
        std::cout << "That is an accurate description of myself" << std::endl;
    
    if (age == 25 || gender == 'F')     // even though gender is M it still goes through.
        std::cout << "You got half the information correct" << std::endl;
    
    bool isAFemale = false;

    if(!isAFemale)
        std::cout << "Yes I am a guy" << std::endl;

    return 0;
}