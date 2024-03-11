// when array is not full

#include <iostream>
using namespace std;

int InsertAtHead(int arr[], int n, int data){
    for(int i=n-1; i>=0; i--){
        arr[i+1] = arr[i];
    }
    arr[0] = data;
    cout<<"\nElement "<<data<<" inserted at Head"<<endl;
    return n+1;
}

int main(){
    int n,data; 
    int arr[1];

    cout<<"\nEnter the size of array : ";
    cin>>n;

    cout<<"\nEnter elements : ";
    for(int i=0; i<n; i++)
        cin>>arr[i];
    
    cout<<"\nEnter the element to be inserted at head : ";
    cin>>data;

    n = InsertAtHead(arr, n, data);

    cout<<"\nUpdated array is : ";
    for(int i=0; i<n; i++)
        cout<<arr[i]<<" ";
    cout<<"\n"<<endl;

return 0;
}