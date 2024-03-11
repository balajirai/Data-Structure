// Refer to notes or link : https://youtu.be/nZe7P674xZo
// find sum of rectangle represented by (a,b) top left and (c,d) bottom right
// constraints : 
// 1 <= N <= 10^3
// 1 <= a[i][j] <= 10^3
// 1 <= Q <= 10^5
// 1 <= a,b,c,d <= N

#include <iostream>
using namespace std;

const int N = 1e3+10;
int arr[N][N];
int pf[N][N];

int main(){
    int n;
    cin>>n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin>>arr[i][j];
            pf[i][j] = arr[i][j] + pf[i-1][j] + pf[i][j-1] - pf[i-1][j-1];
        }
    }
    int q;
    cin>>q;
    while (q--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        cout<<pf[c][d] - pf[a-1][d] - pf[c][b-1] + pf[a-1][b-1]<<endl;
    }
    
return 0;
}

// Complexity : O(N^2)