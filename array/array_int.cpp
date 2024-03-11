// While passing an array of integer we have to pass the length of the array along with the array itself

#include <iostream>
using namespace std;

// int length(int arr[]){
//     int count=0;
//     for (int i = 0; i < count; i++)
//     {
//         /* code */
//     }
    
// }

int main(){
    // int arr[10] = {0};   // this will initialize all element of array with zero
    int arr[10];            // this will initialize all element of array with garbage values
    for (int i = 0; i < 5; i++){
        cin>>arr[i];
    }

    for (int i = 0; i < 10; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Length : "<<sizeof(arr)/sizeof(arr[0])<<endl;

    
return 0;
}