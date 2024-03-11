// count() will return 1 if element found else it will return 0
// it is just to check if element is present or not

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

    if(mp.count(3)==1) cout<<"FOUND"<<endl;
    else cout<<"NOT FOUND"<<endl;


return 0;
}