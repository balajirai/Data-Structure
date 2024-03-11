#include <iostream>
using namespace std;

void LinearSearch(int a[], int n, int key){
    bool flag = false;
    for (int i = 0; i < n; i++){
        if(a[i] == key){
            flag = true;
            cout<<"\nFOUND ! "<<endl;
            cout<<"INDEX : "<<i<<"\n"<<endl;
        }
    }
    if(flag == false)
        cout<<"\nNOT FOUND ! "<<endl;
}

int main(){
    int arr[] = {2,4,5,6,7,82,68,23,98};
    int key, n = 9;

    cout<<"\nEnter the element to search : ";
    cin>>key;

    LinearSearch(arr, n, key);

return 0;
}