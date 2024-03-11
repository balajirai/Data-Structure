#include <bits/stdc++.h>
using namespace std;

// all possible permutaion of the given string
void findPermutaion(string str, int index = 0){
    // base case
    if(index == str.size()){
        cout << str <<", ";
        return;
    }
    for(int i=index; i<str.size(); i++){
        swap(str[index], str[i]);
        findPermutaion(str, index+1);

        // backtrack
        swap(str[index], str[i]);
    }
}
int main(){
    string str;
    cout<<"Enter string : ";
    cin>>str;
    findPermutaion(str);
    return 0;
}