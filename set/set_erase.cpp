// set erase function : O(log(n))

// (1)	void erase (iterator position);          // also erase(arr.begin()+index);  erase using index
// (2)	size_type erase (const value_type& val);
// (3)	void erase (iterator first, iterator last);

#include <bits/stdc++.h>
using namespace std;
int main(){
    set<int>s;
    int n;
    cout<<"Enter number : ";
    cin>>n;
    for(int i=1; i<=n; i++) s.insert(i);

    int x;
    cout<<"Enter number to erase : ";
    cin>>x;

    if(x > n){
        cout<<"Invalid Input"<<endl;
    }
    else{
        s.erase(x);
        cout<<"Updated Set : ";
        for (auto it = s.begin(); it != s.end(); ++it) cout << ' ' << *it;
    }
return 0;
}