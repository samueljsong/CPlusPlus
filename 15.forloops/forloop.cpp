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

    return 0;
}