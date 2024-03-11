// searching the target element in a 2d array (matrix)
// binary traversal
// complexity :  O(mlog(n))

// i/col_number  -> current row index
// i%col_number  -> current column index


// M -> row number (here)
// N -> column number (here)
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    bool matSearch(vector<vector<int>> &mat, int M, int N, int X){
        int total = (M * N); // elements
        int low = 0;
        int high = total-1;     // indices
        while (low<=high){
            int mid = (low+high)/2;
            if(mat[mid/N][mid%N] == X) return true;
            else if(mat[mid/N][mid%N] < X) low = mid+1;
            else high = mid-1;
        }
        return false;
    }
};

int main(){
    int t;
    cin >> t;
    while (t--){
        int m, n;
        cin >> m >> n;
        vector<vector<int>> arr(m, vector<int>(n));
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++)
                cin >> arr[i][j];
        int x;
        cin >> x;
        Solution ob;
        cout << ob.matSearch(arr, m, n, x) << endl;
    }
}