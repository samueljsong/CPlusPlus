#include <iostream>

using std::cout;
using std::size;

int main()
{
    // After C++ 17 we were able to get the size of the array like this.
    int scores[] {10,11,2,3,14,5};

    cout << "scores size : " << size(scores) << '\n';

    for (size_t i{0}; i < size(scores); i++)
    {
        cout << "scores["<< i <<"] : " << scores[i] << '\n';
    }

    // Before C++ 17

    
}