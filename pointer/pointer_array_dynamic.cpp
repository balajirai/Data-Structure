#include <iostream>
using namespace std;

int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Variable Length Arrays (VLAs) are not part of the C++ standard.
    // The following line would cause a compilation error in standard C++.

    // int myArray[size];  // This is not allowed in standard C++


    // Dynamically allocate an array
    int* arr = new int[size];

    // Input values into the array
    cout << "Enter " << size << " integers: ";
    for(int i = 0; i < size; i++){
        cin >> arr[i];
    }

    // Output the values
    cout << "You entered: ";
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    // Deallocate the memory
    delete[] arr;
    arr = nullptr; // Avoid dangling pointer

    
    return 0;
}