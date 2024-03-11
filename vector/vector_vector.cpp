// vector of vectors
// basically a 2d matrix with dynamic size of row and column

#include <bits/stdc++.h>
using namespace std;

void PrintVec(vector<int>tempv){
    for (int i = 0; i < tempv.size(); i++){
        cout<<tempv[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int N;
    cout<<"Number of vectors inside the vector v : ";
    cin>>N;
    vector<vector<int>>v;
    for (int i = 0; i < N; i++){
        int n;
        cout<<"Enter the size of "<<i+1<<" vector inside the orignal vector : ";
        cin>>n;
        vector<int>temp;            // temp vector to store the elements into the ith row (vector) of vector v
        cout<<"Enter the elements of "<<i+1<<" vector : ";
        for (int j = 0; j < n; j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
    
    // printing the vector of vectors
    for (int i = 0; i < v.size(); i++){
        PrintVec(v[i]);         // passing ith vector to print then passing i+1th and so on ....
    }

    // cout<<v[0][0]<<endl;       // this will print first element of first vector inside the vector v
    
    // we can also insert a empty vector as    v.push_back(vector<int> ())
    // and then elements in empty vector using loop as      v[i].push_back(element)
return 0;
}