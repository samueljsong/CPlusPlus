#include <iostream>

// break: break out of the loop
// continue: skip current iteration

using std::cout;
using std::cin;
using std::endl;
using string_t = std::string;

int main() {

    string_t name;
    int breakPoint;

    cout << "What is your name?: ";
    cin >> name;

    cout << "What index do you want to skip or break at?: ";
    cin >> breakPoint;

    cout << "This will break at break point" << endl;

    for (int i = 0; i < name.length(); i++)
    {
        if (i == breakPoint)
            break;                                          // This will completely break out of the loop.
        
        cout << name.at(i) << endl;
    }

    cout << "This will skip at the breakPoint" << endl;

    for (int i = 0; i < name.length(); i++)
    {
        if (i == breakPoint)
            continue;                                       // this will just skip that specific index and continue 
        
        cout << name.at(i) << endl;
    }


    return 0;
}