// Reverse an array using recursion

#include <iostream>
using namespace std;

void reverse(int arr[], int left, int right) {
    // Base case: if left index is greater than or equal to right index
    if (left >= right) return;
    
    // Swap the elements at left and right indices
    swap(arr[left], arr[right]);
    
    // Recursive call with updated indices
    return reverse(arr, left + 1, right - 1);
    
}

int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Original array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
    
    // Call the reverse function
    reverse(arr, 0, n - 1);
    cout << "Reversed array: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;

    return 0;
}