// 2 Sum
// finding the indices of two elements whose sum is equal to the target

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(int arr[], int n, int target){
    unordered_map<int,int>visited;          // storing value and index of the visited elements

    for(int i=0; i<n; i++){
        int a = arr[i];
        int b = target - arr[i];
            
        if(visited.find(b) != visited.end()){
            return {i,visited[b]};
        }
        visited[a] = i;             // storing the value-index pair in map
    }
    return {};
}

int main(){
    int n,target;
    cin>>n>>target;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    vector<int> p = twoSum(arr, n, target);
    for(int x : p){
        cout<<x<<" ";
    }
    cout<<endl;

return 0;
}