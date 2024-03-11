#include <bits/stdc++.h>
using namespace std;

// Largest square formed in a matrix (gfg)
int solve(int i, int j, int &maxi, vector<vector<int>>&mat){
    // base case
    if(i >= mat.size() || j >= mat[0].size()) return 0;
    
    
    int right = solve(i, j+1, maxi, mat);
    int diag  = solve(i+1, j+1, maxi, mat);
    int down  = solve(i+1, j, maxi, mat);
    
    if(mat[i][j] ==1){
        int ans = 1 + min({right, diag, down});
        maxi = max(maxi, ans);
        return ans;
    }
    else return 0;
}
int main(){
    int n,m;
    cout<<"Enter Row and column  : ";
    cin>>n>>m;
    vector<vector<int>>matrix(n, vector<int>(m));
    cout<<"Enter matrix Elements : ";
    for(auto &row:matrix){
        for(int &ele:row){
            cin>>ele;
        }
    }
    int maxi = 0;
    solve(0,0,maxi, matrix);
    cout<<"Largest Square Matrix : "<<maxi<<endl;

    return 0;
}