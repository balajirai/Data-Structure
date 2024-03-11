#include <bits/stdc++.h>
using namespace std;

// all possible combination of outcomes when n coines are flipped
void generateSequences(int length, string sofar = ""){
    if (length == 0) {
        cout << sofar << endl;
    } 
    else {
        generateSequences(length - 1, sofar + " H");
        generateSequences(length - 1, sofar + " T");
    }
}

int main(){
    int coins;
    cout<<"Enter the number of coins : ";
    cin>>coins;

    if(coins < 0){
        cout<< "Enter a valid positive number."<<endl;
        return 0;
    }
    if(coins > 10){
        cout<< "Sample Space would be too big."<<endl;
        return 0;
    }

    generateSequences(coins);
    return 0;
}