#include <iostream>

using std::cout;

int main()
{
    cout << '\n';

    // Valid index = 0 - 9
    int numbers[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    // Reading beyond bounds: will read garbage or crash
    cout << "Attempting to read out of bounds: " << numbers[10] << '\n';

    // The compiler will allow you to write beyond the bounds
    //      1. you do not own that memory so other programs can modify it
    //      2. or you can corrupt data that was used by other parts of your program.

    numbers[12] = 1000;
    cout << "Number[12] : " << numbers[12] << '\n';

    return 0;
}