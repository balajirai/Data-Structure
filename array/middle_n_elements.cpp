// example if n=3, and the array is [0,1,5,7,7,8,10,14,20], the middle is [7,7,8]
// find the middle n elements of an array

#include <iostream>
using namespace std;
int main(){
    int myArray[] = {0, 1, 5, 7, 7, 8, 10, 14, 20};
    const int n = 3;

    // Get middle index
    int arrLength = sizeof(myArray) / sizeof(int);
    int middleIndex = (arrLength - 1) / 2;      // this could be just arrLength/2  still to confirm......

    // Get sides
    int side = (n - 1) / 2;

    int count = 0;

    int myNewArray[n];

    for (int i = middleIndex - side; i <= middleIndex + side; i++){
        myNewArray[count++] = myArray[i];
    }
    for (int i = 0; i < n; i++){
        cout<<myNewArray[i]<<" ";
    }
    

    return 0;
}