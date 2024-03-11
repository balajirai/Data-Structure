// searching the target element in a 2d array (matrix)
// linear traversal
// complexity :  O(m*n)

// i/col_number  -> current row index
// i%col_number  -> current column index

// M -> row number (here)
// N -> column number (here)
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
    int matSearch(vector<vector<int>> &mat, int M, int N, int X){
        int total = (M * N); // elements
        for (int i = 0; i < total; i++){
            if (mat[i / N][i % N] == X)
                return 1;
        }
        return 0;
    }
};

int main(){
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

/*

testcase :

2 3 
7 6 3
6 6 1
1

*/