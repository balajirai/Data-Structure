// vector of pairs

// vector<data_type> vector_name;    (vector of int/string/char..)
// vector<pair<int,int>> vp          (pair<int,int> is the data type for vector)

#include <bits/stdc++.h>
using namespace std;

void PrintVp(vector<pair<int, int>> vp1){
    if(vp1.size()==0){
        cout << "NO Pairs available" << endl;
        return;
    }

    cout << "Vector of pairs is : ";
    for (int i = 0; i < vp1.size(); i++){
        cout << vp1[i].first << ", " << vp1[i].second << endl;
    }
    cout << endl;
}

int main(){
    vector<pair<int,int>>v = {{1,2},{3,4}};
    PrintVp(v);         // print vector of pairs
    vector<pair<int, int>> vp;
    PrintVp(vp); // empty vector

    int n;
    cout << "Number of pairs : ";
    cin >> n;

    cout << "Enter the pairs : ";
    for (int i = 0; i < n; i++){
        // cin>>vp[i].first>>vp[i].second;    //this will be used when elements are already initaillized (either with zero or any other value)
        int x, y;
        cin >> x >> y;
        vp.push_back({x, y});
    }
    PrintVp(vp);
    return 0;
}