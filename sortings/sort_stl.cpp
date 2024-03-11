// sorting an array using inbuilt sort function
// Time Complexity is O(n*logn)

#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int x, int y){
    return x>y;  // decreasing ordrer when x > y ( x as index i and y as index j and i>j)
}

void Print(int arr[],int n){
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n = 7;

    // index :   0 1 2 3 4 5  6
    int arr[] = {1,4,2,0,5,10,9};

    // By deafault incresing order
    sort(arr, arr+7);    // arr+(first index), arr+(last index+1)
    cout<<"Increasing order of array is       : ";
    Print(arr,n);

    // upto specific order
    sort(arr, arr+4);        // it will sort up to index 3 and then left other elements as it is
    cout<<"Incresing order of upto index 3 is : ";
    Print(arr,n);

    // Decreasing order
    sort(arr, arr+7, cmp);
    cout<<"Decreasing order of array is       : ";
    Print(arr,n);



return 0;
}