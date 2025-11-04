#include <iostream>
#include <string>
#include <algorithm>    
using namespace std;

/*
Syntax of find() function in C++ STL:

size_t find(const std::string& str, size_t pos = 0) const;
size_t find(const char* s, size_t pos = 0) const;
size_t find(const char* s, size_t pos, size_t n) const;
size_t find(char c, size_t pos = 0) const;

Example Usage:
string str = "hello world";

if (str.find("world") != string::npos)
    cout << "'world' found" << endl;
else
    cout << "'world' not found" << endl;
    

*/


int main(){

    string str = "hello world";
    size_t pos = str.find("world");

    if (pos != string::npos)
        cout << "'world' found at index: " << pos << endl;
    else
        cout << "'world' not found" << endl;


    // string s = "banana";
    // size_t pos1 = s.find('a');       // 1
    // size_t pos2 = s.find('a', 2);    // start from index 2

    // cout << pos1 << endl; // 1
    // cout << pos2 << endl; // 3
    
    return 0;
}