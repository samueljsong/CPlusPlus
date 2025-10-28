#include <iostream>
#include <vector>
// typedef: reserved keyword used to create an additional name
//          (alias) for another data type
//          New Identifier for an existing type
//          Helps with readability and reduces typos


// Instead of using the original datatype = std::vector<std::pair<std::string, int>> everytime we need to use it
// we can now use pairlist_t
// common standard is to use '_t" for any typedefs
// acts as a new identifier keeping code more readable.

// Something important to note is that typedef is now deprecated and now we use the 'using' keyword
// as it works better with templates.

typedef std::vector<std::pair<std::string, int>> pairlist_t;
typedef std::string string_t;

using number_t = int;       // unlike typedef, we do the name of the alias first = the actual data

int main() {

    pairlist_t pairlist;

    // we can now declare strings without using std::string
    string_t name = "Samuel Song";
    std::cout << name << std::endl;

    number_t age = 25;
    std::cout << age << std::endl;

    return 0;
}