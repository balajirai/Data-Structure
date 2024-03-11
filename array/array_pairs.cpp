// array of pairs

// data_type var[size];   array of the data type (array of integers)
// pair<int,int> arr[N];  here data type is pair and size is N i.e N pairs

#include <bits/stdc++.h>
using namespace std;

void printAp(pair<int,int>p[],int n){
    cout<<"{"<<p[0].first<<","<<p[0].second<<"}";
    for (int i = 1; i < n; i++){
        cout<<", {"<<p[i].first<<","<<p[i].second<<"}";
    }
    cout<<endl;
}

int main(){
    // one way to initialize the array of pairs
    pair<int,int>arr[2] = {{1,2},{4,5}};

    // another way to initialize the array of pairs
    pair<int,int>p[3];
    p[0] = {1,2};
    p[1] = {2,4};
    p[2] = {3,6};

    // print array
    printAp(p,3);

    swap(p[0],p[2]);
    

return 0;
}