#include <bits/stdc++.h>
using namespace std;

// Function to calculate prefix sum of matrix
vector<vector<int>> matrixPrefixSum(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    // Creating a prefix sum matrix
    vector<vector<int>> prefixSum(rows, vector<int>(cols, 0));

    // Copying the first row and first column
    prefixSum[0][0] = matrix[0][0];

    // prefix sum of 0th row
    for (int i = 1; i < cols; ++i){
        prefixSum[0][i] = prefixSum[0][i - 1] + matrix[0][i];
    }

    // prefix sum of 0th column
    for (int i = 1; i < rows; ++i){
        prefixSum[i][0] = prefixSum[i - 1][0] + matrix[i][0];
    }

    // Calculating the rest of the prefix sum matrix
    for (int i = 1; i < rows; ++i) {
        for (int j = 1; j < cols; ++j) {
            prefixSum[i][j] = matrix[i][j] + prefixSum[i - 1][j] + prefixSum[i][j - 1] - prefixSum[i - 1][j - 1];
        }
    }

    return prefixSum;
}

// Function to answer submatrix sum queries
int submatrixSumQuery(const vector<vector<int>>& prefixSum, int row1, int col1, int row2, int col2) {
    int sum = prefixSum[row2][col2];
    if (row1 > 0) sum -= prefixSum[row1 - 1][col2];
    if (col1 > 0) sum -= prefixSum[row2][col1 - 1];
    if (row1 > 0 && col1 > 0) sum += prefixSum[row1 - 1][col1 - 1];
    return sum;
}

int main() {
    // Example matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Calculate prefix sum matrix
    vector<vector<int>> prefixSum = matrixPrefixSum(matrix);

    // Example submatrix sum query
    int row1 = 0, col1 = 0, row2 = 1, col2 = 1;
    int sum = submatrixSumQuery(prefixSum, row1, col1, row2, col2);
    cout << "Sum of submatrix from (" << row1 << ", " << col1 << ") to (" << row2 << ", " << col2 << "): " << sum << endl;

    return 0;
}
