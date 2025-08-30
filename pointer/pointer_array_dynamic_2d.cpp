#include <iostream>
using namespace std;

int main(){
    int rows, cols;
    cout << "rows, cols: ";
    cin >> rows >> cols;

    int ** arr = new int*[rows]; // array of int pointers

    for(int i = 0; i < rows; i++){
        arr[i] = new int[cols]; // each pointer points to an array of ints
    }

    // Input values into the 2D array
    // cout << "Enter integers elements: \n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << "arr [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Output the values
    cout << "\nThe 2D array is :\n";   
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }


    // Deallocate the memory
    for(int i = 0; i < rows; i++){
        delete[] arr[i]; // delete each sub-array
    }   
    delete[] arr; // delete the array of pointers
    arr = nullptr; // Avoid dangling pointer


    /*
    
    NOTE:
        1. Memory allocation for 2D arrays follow the step of first allocating an array of pointers,
           and then allocating an array for each pointer. Each row can be of different size if needed (jagged array).
        3. Memory deallocation should be done in the reverse order of allocation.
        4. Setting pointer to nullptr after deletion is a good practice to avoid dangling pointers.
    
    */

    
    return 0;
}