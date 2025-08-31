#include <iostream>

namespace first_space {
    void func() {
        std::cout << "Inside first_space" << std::endl;
    }
}

// Using a Specific Member of a Namespace
using first_space::func;

int main() {
    
    // Call the method of first_space
    func();  
    return 0;
}