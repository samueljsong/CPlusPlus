#include <iostream>

using std::cout;
using std::cin;
using std::endl;

using string_t = std::string;

int main() {

    string_t name;

    cout << "What name do you want me to spell?: ";
    cin >> name;

    for (int i = 0; i < name.length(); i++)
        cout << name.at(i) << endl;

    // after C++ 11 we have a new range-based forloop

    int scores[] = { 1, 2, 3, 4, 5 };

    // its like a python foreach.
    for (auto score : scores)       // auto instructs the compiler to deduce the type of variable it is.
    {
        cout << "Score: " << score << '\n';
    }

    return 0;
}