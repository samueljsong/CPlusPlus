#include <iostream>

// Namespaces: provides a solution for preventing name conflicts in large projects
//             Each entity needs a unique name. A namespace allows for identical named entities
//             as long as the namespaces are different.

namespace first {
    int x = 1;       // This will not run into the declaration error
}

namespace second {
    int x = 2;
    int y = 100;
}

int main() {

    int x = 0;
    // int x = 1; This would cause a compiler error of redeclaration of a variable.

    std::cout << x << std::endl;        // If i dont specify which x to use, it will use the local scope
    std::cout << first::x << std::endl; // This will get the x from the namespace of "first"

    using namespace second;             // This will change it so any variables we use is coming from that specific namespace

    std::cout << x << std::endl;        // This will get x from the local scope because it does not reassign.

    std::cout << y << std::endl;        // It only gets variables that does not exist in current scope.

    // You could also use namespace with standard library.

    return 0;
}