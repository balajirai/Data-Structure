#include <iostream>
using namespace std;

// An inline namespace is a type of namespace
// where its members are accessible directly without using the namespace name.

inline namespace inline_space {
    void display() {
        cout << "Inside inline namespace" << endl;
    }
}

int main() {
    
    // Direct access due to inline namespace
    display();  

    return 0;
}