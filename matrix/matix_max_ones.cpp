// Max one's in an row of sorted matrix

#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    int rowWithMax1s(vector<vector<int>> arr, int n, int m){
        // using the top right corner to bottom left corner approach
        int j = m - 1;
        int r = -1;
        for (int i = 0; i < n; i++){
            while (j >= 0 and arr[i][j] == 1){
                j--;
                r = i;
            }
        }
        return r;
    }
};


int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n, vector<int>(m));
    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    Solution ob;
    auto ans = ob.rowWithMax1s(arr, n, m);
    cout << ans << "\n";

    return 0;
}