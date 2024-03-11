// pascal's triangle
//         1
//      1      1
//  1      2       1

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> generate(int numRows){
    vector<vector<int>> ans;
    for (int i = 0; i < numRows; i++){
        vector<int> row(i + 1, 1);
        for (int j = 1; j < i; j++){
            row[j] = ans[i - 1][j] + ans[i - 1][j - 1];
        }
        ans.push_back(row);
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    for(auto x : generate(n)){
        for(auto y : x){
            cout<<y<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    return 0;
}
