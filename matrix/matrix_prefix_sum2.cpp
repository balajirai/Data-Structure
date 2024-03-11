#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> calculatePrefixSum(vector<vector<int>>& grid) {
    for(int i = 0; i < grid.size(); ++i){
        for(int j = 0; j < grid[0].size(); ++j){
            if(i >= 1) grid[i][j] += grid[i-1][j];
            if(j >= 1) grid[i][j] += grid[i][j-1];
            if(i >=1 && j >=1) grid[i][j] -= grid[i-1][j-1];
        }
    }
    return grid;
}

int main() {
    // Example grid
    vector<vector<int>> grid = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    
    // Printing Given matrix
    cout << "Given Matrix:" << endl;
    for (const auto& row : grid) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    cout<<endl;

    // Calculate prefix sum matrix
    vector<vector<int>> prefixSum = calculatePrefixSum(grid);

    // Print prefix sum matrix
    cout << "Prefix Sum Matrix:" << endl;
    for (const auto& row : prefixSum) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}