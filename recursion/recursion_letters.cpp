#include <bits/stdc++.h>
using namespace std;

// all possible sequence of n length from alphabets
void generateLetterSequencesNice(int length, string sofar = ""){
    if (length == 0){
        cout << sofar << ", ";
    } 
    else {
        for (char ch = 'A'; ch <= 'Z'; ch++) {
            generateLetterSequencesNice(length - 1, sofar + ch);
        }
    }
}

int main(){
    int letter;
    cout<<"Enter letter count (1-2) : ";
    cin>>letter;
    
    if(letter < 0){
        cout<< "Enter a valid positive number."<<endl;
        return 0;
    }
    if(letter > 2){
        cout<< "Sample Space would be too big."<<endl;
        return 0;
    }

    generateLetterSequencesNice(letter);
    return 0;
}