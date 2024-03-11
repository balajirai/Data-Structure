#include <bits/stdc++.h>
using namespace std;

// all possible permutation of the given word
void permute(string rest, string soFar = ""){
    if (rest == ""){
        cout << soFar << ", ";
    }
    else{
        for (int i = 0; i < rest.length(); i++){
            // remove character we are on from rest
            string remaining = rest.substr(0, i) + rest.substr(i + 1);
            permute(remaining, soFar + rest[i]);
        }
    }
}

int main(){
    string word;
    cout<<"Enter the word : ";
    cin>>word;

    // total n! permutations
    permute(word);

    return 0;
}