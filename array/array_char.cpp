// finding the length of a array of character without using inbuilt functions

// In integer array we need to find the length of the array along with the array to a function
// But in character array we need to pass only the array and not its length and traverse the array until encounter '\0'

#include <iostream>
using namespace std;
#define N 100

int length(char arr[]){
    int count = 0;
    for (int i = 0; arr[i]!='\0'; i++){
        count++;
    }
    return count;
}

int main(){
    char arr[N];
    cout<<"Enter your name        : ";
    cin>>arr;

    cout<<"Length of your name is : "<<length(arr)<<endl;

    
return 0;
}