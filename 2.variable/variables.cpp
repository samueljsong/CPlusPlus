#include <iostream>

/*
    int:    datatype can only store whole numbers.
    double: number including decimals.
    char:   single character
    boolean: true or false
    string: object that represents a sequence of text
*/
int main () {

    //integers
    int x; // This is declaration
    int age = 25;

    x = 123; // This is assignment

    std::cout << x << std::endl;

    int y = 5;

    std::cout << y << std::endl;

    int sum = x + y; // you can do arithmetic.

    std::cout << sum << std::endl;

    int test = 7.5;

    std::cout << test << std::endl;     // this will truncate the decimal.˜

    //doubles
    double temperature = 36.5;
    double price = 99.99;

    std::cout<< "The price of the steak is $" << price << std::endl;

    //char
    char grade = 'A';

    char charTest = 'ABC';

    std::cout << charTest << std::endl;     // this will print out the last character.

    //bool

    bool student = true;
    bool power = false;

    //Strings

    std::string name = "Samuel Song";

    std::cout << name << std::endl;

    //Now lets try some custom couts

    std::cout << "Hello " << name << '\n';
    std::cout << "you are " << age << " years old!" << std::endl;

    return 0;
}