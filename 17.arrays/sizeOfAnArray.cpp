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

    /**
     * Before the C++ 17 features
     * we would have to get the byte size of the whole array sizeof(array)
     * then we would get the size of the element within the array sizeof(array[0])
     * 
     * Because in c++ memory is contiguous we can divide these values to get specific count.
     */

    cout << '\n';
    cout << "Size of scores : " << sizeof(scores) << '\n';
    cout << "Size of scores[0] : " << sizeof(scores[0]) << '\n';
    cout << "Score item count : " << (sizeof(scores) / sizeof(scores[0])) << '\n';

    size_t count {sizeof(scores) / sizeof(scores[0])};

    cout << "Printing Array :" << '\n';

    for (size_t i{0}; i < count; i++)
    {
        cout << "Scores["<< i <<"] : " << scores[i] << '\n'; 
    }

    

}