// we compare each adjacent element and if not in order then then swap it 
// and ultimately largest element gets bubbled into right place that is end of the array 
// now ignore that bubbled element and follow the same algorithm for rest of the element

// for n elements there will be n-1 operations

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    // bubble sort
    for (int i = 0; i < n-1; i++){              // n-1 operation
        for (int j = 0; j < n-1-i; j++){        // after every ooperation elements gets bubble out so one less operations neede
            if(arr[j]>arr[j+1])
                swap(arr[j], arr[j+1]);
        }
        
    }

    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
return 0;
}