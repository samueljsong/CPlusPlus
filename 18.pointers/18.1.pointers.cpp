#include <iostream>

using std::cout;

/**
 * Every variable has an address in memory
 * 
 * We can actually grab that address and store it in a special variable called a pointer.
 *      Pointers: special variable that stores addresses of other variables.
 * 
 * 
 */
int main()
{
    // 1.Declaring and using pointers.

    int    *p_number {};               // can only store an address of a variable of type int
    double *p_fractional_number {};    // can only store an address of a variable of type double

    // by initializing these pointers with a brace, it will give it a special address that states this address points to nothing.

    // This is the explicit way to state they are not pointing to anything.
    int    *p_number1 {nullptr};
    double *p_fractional_number1 {nullptr};

    // 2. All pointer variables will have the same size
    //      if we have a pointer to a double and an int, they are the same size as they are variables that hold addresses.

    cout << "The size of the int pointer : " << sizeof(p_number) << '\n';
    cout << "The size of the double pointer : " << sizeof(p_fractional_number) << '\n';

    // Becareful of same line initialization.

    int *p_test1 {}, other_int_var {}; // This will create a pointer and a normal int

    // 3. Assigning data to pointer variables.
    //      - & is the address operator

    int age = 25;
    int *p_age {&age};  // Stores the address of age

    cout << "Age value : " << age << '\n';
    cout << "p_age (Address in memory) : " << p_age << '\n';

    return 0;
}