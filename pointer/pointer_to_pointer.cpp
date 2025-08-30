#include <iostream>
using namespace std;

int main(){
    int n = 10;

    // Declare a pointer
    int* ptr = &n;

    // Declare a pointer to a pointer
    int** ptr_to_ptr = &ptr;


    // Address outputs
    cout << "Address of n: " << &n << endl;
    cout << "Address stored in ptr: " << ptr << endl;
    cout << "Address of ptr: " << &ptr << endl;
    cout << "Address stored in ptr_to_ptr: " << ptr_to_ptr << endl;
    cout << "Address of ptr_to_ptr: " << &ptr_to_ptr << endl;


    // Output the values
    cout << "\nValue of n: " << n << endl;
    cout << "Value via *ptr: " << *ptr << endl;
    cout << "Value via **ptr_to_ptr: " << **ptr_to_ptr << endl;



    // Declare a pointer to a pointer to a pointer
    // int *** ptr_to_ptr_to_ptr = &ptr_to_ptr;

    // // Address outputs
    // cout << "Address of n: " << &n << endl;
    // cout << "Address stored in ptr: " << ptr << endl;
    // cout << "Address of ptr: " << &ptr << endl;
    // cout << "Address stored in ptr_to_ptr: " << ptr_to_ptr << endl;
    // cout << "Address of ptr_to_ptr: " << &ptr_to_ptr << endl;
    // cout << "Address stored in ptr_to_ptr_to_ptr: " << ptr_to_ptr_to_ptr << endl;
    // cout << "Address of ptr_to_ptr_to_ptr: " << &ptr_to_ptr_to_ptr << endl;
    
    return 0;
}