// On increasing a node value in a max heap , node may move up to maintain the max heap property.
// 1. Update node value
// 2. Percolate up till
// 2.a.  parent > curr node
// 2.b.  curr node becomes the root node

#include <iostream>
using namespace std;

void HEAP_INCREASE_KEY(int arr[], int i, int key){
    if(key<arr[i]) cout<<"Wrong Operation"<<endl;
    else{
        arr[i]=key;     // step 1
        while (i>0 and arr[i/2]<arr[i]){       // step 2
            swap(arr[i], arr[i/2]);
            i = i/2;
        }
        
    }
}

void PRINT_HEAP(int arr[], int n){
    cout<<"\n"<<endl;
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\n"<<endl;
}

int main(){
    int arr[] = {3,9,2,1,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
return 0;
}