// length of string 
// strlen()

#include <iostream>  
#include <cstring>  
using namespace std;  
int main()  
{  
    char ary[] = "\0";

    // return the size of the string (number of character present in that array)
    cout << "Length of String = " << strlen(ary)<<endl;

    // include null character at end
    cout<< "Length of char array = " <<sizeof(ary)/sizeof(ary[0]);
    return 0;  
}  