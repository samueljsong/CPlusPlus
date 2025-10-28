#include <iostream>

// cout << (insertion operator) 
// cin  >> (extraction operator) where we want to put it

using string_t = std::string;

int main() {

    string_t name;
    int age;

    std::cout << "What is your name: " << std::endl;        
    std::cin >> name;                                           // This will however only take the first word. does not take in spaces
    std::cout << "Hello " << name <<std::endl;

    std::cout << "How old are you?: " << std::endl;
    std::cin >> age;

    string_t ageMessage = (age > 20) ? "Boomer" : "Zoomer";

    std::cout << ageMessage <<std::endl;

    // To get multiple words with spaces use the getline function in std
    // something to note is that the getline function will look for the newline to end.
    // if you ended off the previous output message with a std::endl or '\n' it will look like it skipped.
    // so we need to input >>std::ws which is whitespaces. this will get rid of any white space or new lines
    string_t fullname;
    
    std::cout << "What is your fullname?" << std::endl;
    std::getline(std::cin >> std::ws, fullname);

    std::cout << "What a wonderful name! " << fullname << std::endl;

    return 0;
}