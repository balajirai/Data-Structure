// finding the first occurance of string in another given string

#include <bits/stdc++.h>
using namespace std;

int strStr(string haystack, string needle) {

        // in string find function return index of the the occurance but in vector it return iterator
        auto itr = haystack.find(needle);
        if( itr != string::npos){           // string::npos  means end of the string
            return itr;
        }
        else return -1;
    }

int main(){
    string s1,s2;
    cout<<"Enter the string : ";
    cin>>s1;
    cout<<"Enter the word to be found : ";
    cin>>s2;

    cout<<"Position is : "<<strStr(s1,s2)<<endl;
    
return 0;
}