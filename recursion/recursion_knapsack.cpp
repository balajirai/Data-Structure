#include <bits/stdc++.h>
using namespace std;

// knapsack (obtain max value with weight within capacity)
int solve(vector<int>&weight, vector<int>&value, int index, int capacity){
	// base case
	if(index==0){
		if(weight[index] <= capacity) return value[index];
		else return 0;
	}
	
	int include = 0;
	if(weight[index] <= capacity){
		include = solve(weight, value, index-1, capacity-weight[index]) + value[index];
	}
	int exclude = solve(weight, value, index-1, capacity);

	return max(include, exclude);
}

int main(){
    vector<int>weight ={1,2,4,5};
    vector<int>value = {5,4,8,6};
    int capacity, n = weight.size();
    cout<<"Enter bag capacity : ";
    cin>>capacity;

    cout<<"Maximum value can be : "<<solve(weight, value, n-1, capacity)<<endl;

    return 0;
}