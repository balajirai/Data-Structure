#include <bits/stdc++.h>
using namespace std;

// Disjoint set union using Rank + Path Compression
// update parent of every node to its super parent + More Rank -> Father/Parent 

// FIND 
int find(int x, vector<int>& parent) {
    if (x == parent[x]) return x;
    return parent[x] = find(parent[x], parent);     // update parent of every node to its super parent
}

// UNION
void unionSet(int x, int z, vector<int>& parent, vector<int>&Rank) {
    int x_parent = find(x, parent);
    int z_parent = find(z, parent);

    if(x_parent == z_parent) return;
    else if (Rank[x_parent] > Rank[z_parent]) { // more rank -> Father
        parent[z_parent] = x_parent;
    }
    else if(Rank[x_parent] < Rank[z_parent]){
        parent[x_parent] = z_parent;
    }
    else{                                       // same rank -> anyone can be father, rank++;
        parent[x_parent] = z_parent;
        Rank[z_parent]++;
    }
}

int main() {
    const int N = 10;
    vector<int> parent(N), Rank(N);

    // Initialize each element with its index as the parent
    for (int i = 0; i < N; i++) {
        parent[i] = i;
    }

    // Perform union operations
    unionSet(0, 1, parent, Rank);
    unionSet(2, 3, parent, Rank);
    unionSet(4, 5, parent, Rank);
    unionSet(6, 7, parent, Rank);
    unionSet(8, 9, parent, Rank);
    unionSet(1, 3, parent, Rank); // Combine sets {0, 1, 2, 3}
    unionSet(5, 7, parent, Rank); // Combine sets {4, 5, 6, 7}

    // Print the parent of each element after union operations
    cout << "Element: ";
    for (int i = 0; i < N; i++) {
        cout << i << " ";
    }
    cout << endl;

    cout << "Parent:  ";
    for (int i = 0; i < N; i++) {
        cout << find(i, parent) << " ";
    }
    cout << endl;

    return 0;
}