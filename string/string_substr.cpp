// string substr (size_t pos, size_t len) const;

// CPP program to illustrate substr()
#include <string.h>
#include <iostream>
using namespace std;

int main(){
	// Take any string
	string s1 = "balajirai";

	// Copy two characters of s1 (starting
	// from position 3)
	string r = s1.substr(6, 3);

	// prints the result
	cout << "String is: " << r;

	return 0;
}
