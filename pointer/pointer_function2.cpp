#include <iostream>
using namespace std;

int add(int a, int b){
    return a + b;
}

int main(){
    
    // Function pointer declaration and assignment
    // Pointer to a function that takes two int parameters and returns an int
    int (*funcPtr)(int, int) = add;

    // Invoke the function directly
    cout << "Invoke the function directly -> add(3, 4) : " ;
    cout << add(3, 4) << endl;

    // Invoke the function via the function pointer
    cout << "Invoke the function via the function pointer -> funcPtr(3, 4) : " ;
    cout << funcPtr(3, 4) << endl;
    
    return 0;
}