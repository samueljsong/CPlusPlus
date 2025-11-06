#include <iostream>

using string_t = std::string;

int main() {

    string_t name;

    std::cout << "What is your name?";
    std::getline(std::cin, name);

    int lengthOfName = name.length();
    std::cout << "Your name is " << lengthOfName << " characters long." << std::endl;

    if (name.empty())
        std::cout << "You forgot to write a name" << std::endl;
    
    name.clear();

    std::cout << "name has been cleared" << std::endl;

    std::cout << "What is your name again?: ";
    std::getline(std::cin, name);

    name.append("@gmail.com");                      // appends to the end of the string.

    std::cout << "Is your gmail perhaps: " << name << std::endl;

    int index;

    std::cout << "What number of character do you want to see from you email?: ";
    std::cin >> index;

    std::cout << name.at(index) << std::endl;       // at() will give you the element at that index
    
    name.insert(0, "LOL@");                            // inserts a string at the index pushing everything else

    std::cout << name << std::endl;                 

    std::cout << name.find("sam") << std::endl;        // find() will find the first index of where the string or character starts.

    std::cout << name.erase(0, 3) << std::endl;        // erase() will remove elements from starting index to end index(not inclusive)  

    return 0;
}   