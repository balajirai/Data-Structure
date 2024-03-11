// Selection sort  O(N^2) iterative
// Use case : In ith round, the ith largest element reached its correct(right) position
#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr){ 
    int n = arr.size();  
    for(int i=0; i<n-1; i++){
        int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex]) minIndex = j;
        }
        swap(arr[minIndex], arr[i]);
    }
}

int main(){
    vector<int>arr = {98,77,56,7,8,93,44,32,2,345,6,17,65,4,3};
    selectionSort(arr);
    cout<<"Sorted array is : ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
return 0;
}