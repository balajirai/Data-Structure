// reverse string word by word

#include <bits/stdc++.h>
using namespace std;

string reverseWord(string s){
    string res;
    int i=0;
    int n = s.size();
    while (i<n){
        while(i<n and s[i] == ' ') i++;
        if(i>=n) break;
        int j=i+1;
        while(j<n and s[j] != ' ') j++;
        string str = s.substr(i,j-i);
        if(res.size()==0) res = str;
        else res = str + " " + res;
        i = j+1;
    }
    return res;
}
int main(){
    string s;
    getline(cin,s);
    cout<<"Reverse string word by word is : "<<reverseWord(s)<<endl;
    
return 0;
}