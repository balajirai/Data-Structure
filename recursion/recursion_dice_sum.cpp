#include <bits/stdc++.h>
using namespace std;

// N-dices, having M faces from 1-M, target is X (all possible ways recursion)
long long solve(int dice, int faces, int target){
    // base cases
    if(target < 0) return 0;
    if(dice == 0 && target != 0) return 0;
    if(dice != 0 && target == 0) return 0;
    if(dice == 0 && target == 0) return 1;

    int ans = 0;
    for(int i=1; i<=faces; i++){
        ans = ans + solve(dice-1, faces, target-i);
    }

    return ans;
}
int main(){
    int dice, faces, target;
    cout<<"Number of dices and faces : ";
    cin>>dice>>faces;
    cout<<"Target sum is : ";
    cin>>target;

    cout<<"Possible ways are : "<<solve(dice, faces, target);
    
    return 0;
}