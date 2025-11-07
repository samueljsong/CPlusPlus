#include <iostream>

using std::cout;

int main ()
{

    int scores[10];

    /**
     * size_t: unsigned integer type used for sizes and counts
     * always non-negative
     * 
     * often used for array indices or loop counters
     * i{0} uniform initialization sets i = 0
     */
    for (size_t i{0}; i < 10; i++)
    {
        scores[i] = i * 3;
    }

    for (auto value : scores)
    {
        cout << "value : " << value << '\n';
    }

    return 0;
}