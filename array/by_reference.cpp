// https://youtu.be/cMTFGOmYT9E  link to watch lecture on reference
// array always gets passed by referece unlike other data types/data structure

#include <iostream>
using namespace std;

// void update_s(string &s){
//     s = "Hello Balaji, I'm changing your string";
// }

void fun(int arr[]){  // always gets passed by reference
    arr[0] = 988;
}

int main(){
    // string s;
    // cout<<"Enter string   : ";
    // cin>>s;
    // update_s(s);
    // cout<<"Updated string : "<<s<<endl;

    int arr[10];
    arr[0] = 9;
    cout<<"a[0] initially : "<<arr[0]<<endl;
    fun(arr);
    cout<<"a[0] updated   : "<<arr[0]<<endl;

return 0;
}