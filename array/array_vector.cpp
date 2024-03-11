// array of vectors
// we can say that this is a 2d vector with fixed row(array) but dynamic column(vector)

// data_type arr[size];
// vector<int> arr[size];     (here data_type is vector<int> )

#include <bits/stdc++.h>
using namespace std;

// // printing array of vectors by taking array of vectors as input
// void printarrvec(vector<int>av[], int n){
//     for (int i = 0; i < n; i++){
//         for (int j = 0; j<av[i].size(); j++){
//             cout<<av[i][j]<<" ";
//         }
//         cout<<", ";
//     }
//     cout<<endl;
// }

// printing array of vector by taking vectors(elements) of that array
void printvec(vector<int>v){
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main(){
    int N;
    cin>>N;
    vector<int>v[N];

    // for N vectors input    ( as N elements(vectors) of array)
    for (int i = 0; i < N; i++){
        int n;
        cout<<"Enter the size of vector  "<<i+1<<" : ";
        cin>>n;
        cout<<"Enter elements of vectror "<<i+1<<" : ";
        // for each vector input
        for (int j = 0; j < n; j++){
            int x;
            cin>>x;
            // v[i] is the i th vector and we are filling n elements in it one by one (v[i] is a vector as an element of array)
            v[i].push_back(x);
        }
    }
    // printarrvec(v,N);

    for (int i = 0; i < N; i++){
        printvec(v[i]);
    }
    

return 0;
}