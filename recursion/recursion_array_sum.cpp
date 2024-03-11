// calculating array sum up to specific index using recursion

#include <iostream>
using namespace std;

int sum(int n, int arr[]){
    if(n<0) return 0;
    return sum(n-1, arr) + arr[n];
}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements : ";
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the index up to which sum to be calculated : ";
    cin>>x;
    cout<<"Sum of array up to index "<<x<<" is : "<<sum(x,arr)<<endl;
    
return 0;
}

// Complexity : Number of function calls * Complexity of each call = O(n*1) = O(n)   here