#include <iostream>

using string_t = std::string;
using std::cin;
using std::endl;
using std::cout;

int main() {

    string_t name;

    while(name.empty())
    {
        cout << "Please enter your name: ";
        getline(cin, name);
    }

    cout << "Welcome back " << name << endl;

    // Do-while loop = do some block of code first, then repeat that code if condition is true.

    int number;

    do
    {
        cout << "Enter a positive number: ";
        cin >> number;
    }
    while (number < 0);

    cout << "You chose the number " << number << endl; 

    return 0;
}