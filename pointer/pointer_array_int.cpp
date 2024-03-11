#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[10] = {2,5,6};

    cout<<"Address of first element (arr)    : "<< arr <<endl;
    cout<<"Address of first element (&arr)   : "<< &arr <<endl;
    cout<<"Address of first element (&arr[0]): "<< &arr[0] <<endl;

    // arr[i] = *(arr + i)
    cout<<"\nFirst Element of array   (arr[0]) : "<< arr[0] <<endl;
    cout<<"First Element of array   (*arr)   : "<< *arr <<endl;

    // arr[i] = *(arr + i)
    cout<<"\nSecond Element of array  (arr[1]) : "<< arr[1] <<endl;
    cout<<"Second Element of array (*(arr+1)): "<< *(arr + 1) <<endl;

    // i[arr] = *(i + arr)
    cout<<"\nThird Element of array   (2[arr]) : "<< 2[arr] <<endl;
    cout<<"Third Element of array  (*(2+arr)): "<< *(2 + arr) <<endl;

    // sizeof(arr) vs sizeof(*ptr) where ptr = &arr[0]
    int *ptr = &arr[0];
    cout<<"\nSize of the (arr) : "<< sizeof(arr) <<endl;
    cout<<"Size of the (*arr): "<< sizeof(*arr) <<endl;
    cout<<"Size of the (&arr): "<< sizeof(&arr) <<endl;
    cout<<"Size of the (ptr) : "<< sizeof(ptr) <<endl;
    cout<<"Size of the (*ptr): "<< sizeof(*ptr) <<endl;
    cout<<"Size of the (&ptr): "<< sizeof(&ptr) <<endl;

    return 0;
}