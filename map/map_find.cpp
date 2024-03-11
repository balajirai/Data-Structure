// find() function finds the position of the given element
// If the key is not present in the map container, it returns an iterator or a constant iterator which refers to map.end(). 
#include <bits/stdc++.h>
using namespace std;

int main(){
	// Initialize container
	map<int, int> mp;

	// Insert elements in random order
	mp.insert({ 2, 30 });
	mp.insert({ 1, 40 });
	mp.insert({ 3, 20 });
	mp.insert({ 4, 50 });

	cout << "KEY\tELEMENT\n";

	// find() function finds the "position"
	// at which 3 is present
	map<int,int>::iterator it;
    it = mp.find(3);			// if key is not found then .find will return .end() to the iterator
    cout<<(*it).first<<"\t"<<(*it).second<<endl;

	return 0;
}
