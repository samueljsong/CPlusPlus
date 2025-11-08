#include <iostream>

using std::cout;

int main ()
{
    char message [5] = {'H', 'e', 'l', 'l', 'o'};

    cout << '\n';
    cout << "Message : ";
    
    for (char character : message)
        cout << character;
    
    cout << '\n';
    cout << "The Size of the message: " << sizeof(message) << '\n';

    /**
     * You can also do a Direct printout without a loop for arrays of chars
     */

    cout << "Message : " << message << '\n';

    // But you will notice that it might print garbage characters. 
    // That is because we can only print out proper C strings
    //      - Proper c string has a null terminator '\0'

    char message2 [6] = {'H', 'e', 'l', 'l', 'o', '\0'};

    cout << "Message2 has no garbage after : " << message2 << '\n';
    cout << "The Size of the message: " << sizeof(message2) << '\n';

    // we can also just make the array 1 size bigger than the characters we store
    // This will make the compiler fill it with a null terminator

    char message3 [6] = { 'H', 'e', 'l', 'l', 'o' };

    cout << "Message3 : " << message3 << '\n';
    cout << "The Size of the message: " << sizeof(message3) << '\n';

    return 0;
}