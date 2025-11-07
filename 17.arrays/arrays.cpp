#include <iostream>

using std::cout;
using std::endl;
using string_t = std::string;

int main () {

    //Declaring an array
    int scores[10]; // An array storing 10 integers

    /*
        Whats happening memory wise
        - Compiler allocates contiguous block of memory large enought to store 10 integers
        - int is 4 bytes the total memory reserved = 10 * 4 = 40
        - all 10 integers live next to each other in memory
    */

    // After Declaring an array, if we do not initialize it, it has garbage data.
    cout << '\n';
    cout << "scores[0] Garbage Data : " << scores[0] << '\n';

    int ages[10] = {};          // All values are zero-initialized if you use '{}'

    cout << '\n';
    cout << "ages[0] value : " << ages[0] << '\n';

    // We can change the value of the stored int
    scores[0] = 100;
    ages[0]   = 26;

    cout << '\n';
    cout << "scores[0] New Data : " << scores[0] << '\n';
    cout << "ages[0] New Data : " << ages[0] << '\n';

    // Stored on stack if it is declared in a function
    //     - memory is automatically freed when function exits

    int* scores2 = new int[10]; // Stored on heap if declared with new
    delete[] scores2;           // Must manually free with delete

    int grades[10];

    cout << '\n' << "Writing data in array with loop : ";

    // Write data
    for (size_t i{0} ; i < 10; ++i)
    {
        grades[i] = i * 3;
    }

    // Reading the data out
    for (size_t i{0}; i < 10; ++i)
    {
        cout << "grades["<< i <<"] : " << grades[i] << '\n';
    }

    // Initializing the array at declaration
    cout << '\n';
    cout << "Declare and initializing at the same time : " << '\n';

    double salaries[5] {10.2, 11.11, 7.5, 3.4, 2.9};

    // Omitting elements
    cout << '\n';
    cout << "Declare and initialize only some : " << '\n';

    int mood[5] = {12, 1, 3};   // The other 2 will be initialized to 0.

    return 0;
}

/**
 * Arrays are a collection of elements of the SAME type
 * - Think memory wise
 *      - When we create a int score[4]; 
 *      - We tell compiler to allocate enough contiguous memory to store 4 integers
 *      - the total size is 4 X 4 = 16
 * 
 * The array can only hold exactly 4 integers
 * There is no "remaining memory" inside the array
 *      - Writing past the 4th element causes undefined behavior
 *      - this includes currupt memory or crash
 * 
 * All elements MUST be the SAME type
 *      double in an int array: either truncate value or undefined behaviour
 *      char in an int array: will convert char to ascii
 *      bool in an int array: will conver to 0 or 1
 * 
 * if somehow a different type is inserted into an array, it will run into a compiler error.
 */     