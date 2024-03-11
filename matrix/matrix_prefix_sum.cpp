#include<bits/stdc++.h>
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

// print matrix
void printMatrix(const vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    // Example matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Printing original matrix
    cout << "Original Matrix:" << endl;
    printMatrix(matrix);

    // Calculating and printing prefix sum matrix
    cout << "\nPrefix Sum Matrix:" << endl;
    vector<vector<int>> prefixSum = matrixPrefixSum(matrix);
    printMatrix(prefixSum);

    return 0;
}
