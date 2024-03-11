// Basic sorting algorithm to sort the given array
// Time Complexity is O(n^2)

#include <iostream>
using namespace std;
int main(){
    int n = 6;
    int arr[n] = {2,3,1,5,4,4};

    for (int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++){
            if(arr[i]>arr[j])
                swap(arr[i], arr[j]);
        } 
    }
    
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    

return 0;
}