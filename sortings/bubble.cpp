// bubble sort  O(N^2) iterative
// Use case : In ith round, the ith largest element reached its correct(right) position
#include <bits/stdc++.h>
using namespace std;

void bubbleSort(vector<int>&arr){   
    int n = arr.size();
    for(int i=1; i<n; i++){
        bool swapped = false;   // for optimization
        for(int j=0; j<n-i; j++){
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
            swapped = true;
        }
        //already sorted
        if(swapped == false) break;
    }
}

int main(){
    vector<int>arr = {98,77,56,7,8,93,44,32,2,345,6,17,65,4,3};
    bubbleSort(arr);
    cout<<"Sorted array is : ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}