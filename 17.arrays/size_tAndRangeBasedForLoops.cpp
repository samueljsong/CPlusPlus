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
     * 
     * Why do we use this and not just int i = 0;?
     *      1. Array indices should not be negative
     *      2. On 64 bit systems, int is usually 32 bits (max~2billion)
     *          - So if we had an array that has more than 2 billion, overflow occurs causing undefined or incorrect behavior
     *          - size_t is usually 64 bits - can safely index very large arrays
     */
    for (size_t i{0}; i < 10; i++)
    {
        scores[i] = i * 3;
    }

    /**
     * auto: tells compiler figure out the type automatically
     * value: will have the same elements in scores = int
     * 
     * range based for loop: loops over each element in array directly
     */
    for (auto value : scores)
    {
        cout << "value : " << value << '\n';
    }

    return 0;
}