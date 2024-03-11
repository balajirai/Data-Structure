// array of string 
// it will not return/initialize with  garbage value

// In integer array we need to find the length of the array along with the array to a function
// But in string array we need to pass only the array and not its length and traverse the array until encounter "\0"

#include <iostream>
using namespace std;
#define N 10

int length(string arr[]){
    int count = 0;
    for (int i = 0; arr[i]!="\0"; i++){
        count++;
    }
    return count;
}

int main(){
    string arr[N];
    cout<<"Enter strings     : ";
    for (int i = 0; i < 5; i++){
        cin>>arr[i];
    }
    for (int i = 0; i < N; i++){    // it will not return garbage value
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    cout<<"Number of strings : "<<length(arr)<<endl;

return 0;
}