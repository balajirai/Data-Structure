// reverse a string using recursion
#include <bits/stdc++.h>
using namespace std;

void reverseString(int i, int j, string &s){
    cout<<"call received for "<<s<<endl;
    if(i>j) {
        cout<<"Time to get out of the function : i > j"<<endl;
        return;
    }
    swap(s[i],s[j]);
    i++;
    j--;
    reverseString(i,j,s);
}

int main(){
    string s = "balaji";
    reverseString(0,s.size()-1, s);
    cout<<s<<endl;
return 0;
}

// using single pointer

// void reverseStr(int i, string &s){
// 	int n = s.size();
//     if(i>n-i-1) {
//         return;
//     }
//     swap(s[i],s[n-i-1]);
//     i++;
//     reverseStr(i,s);
// }