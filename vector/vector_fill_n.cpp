#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> vect(8); 

	// fill_n(start, number of element, value)

	// fill_n to initialize first four values
    fill_n(vect.begin(), 4, 7);
 
    for (int i=0; i<vect.size(); i++)
        cout << ' ' << vect[i];
    cout << '\n';

    // fill_n to initialize 3 elements from "begin()+3" with value 4
	fill_n(vect.begin() + 3, 3, 4);

	for (int i=0; i<vect.size(); i++){
        cout << ' ' << vect[i];
    }
	cout <<endl;

	return 0;
}
