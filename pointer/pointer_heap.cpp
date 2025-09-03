#include <iostream>
using namespace std;

int main(){
    
    // Pointer to an integer in heap
    int* p = new int(42); 
    cout << "Value pointed to by p : " << *p << endl;

    // Free the allocated memory
    delete p; 

    // Avoid dangling pointer
    p = nullptr;

    return 0;
}