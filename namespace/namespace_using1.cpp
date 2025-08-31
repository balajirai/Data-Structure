#include <iostream>

namespace first_space {
    void func() {
        std::cout << "Inside first_space" << std::endl;
    }
}

// Using the Entire Namespace
using namespace first_space;

int main() {
    
    // Call the method of first_space
    func();  
    return 0;
}