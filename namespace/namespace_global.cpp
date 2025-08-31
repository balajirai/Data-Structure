#include <iostream>
using namespace std;

// Global variable
int n = 3;

int main() {

    // Local variable
    int n = 7;
    
    // Accessing global namespace
    cout << "Global variable 'n' : " << ::n << endl;
    cout << "Local  variable 'n' : " << n << endl;

    return 0;
}


/*

When you write ::n, no namespace is explicitly written, 
but the compiler knows :: with nothing before it always means global scope.

*/