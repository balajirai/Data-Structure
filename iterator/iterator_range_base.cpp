// Using range base loop 

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v = {1,2,3,4,5,6};

    cout<<"Using iterator : ";
    vector<int> :: iterator it;    // declaring iterator
    for (it = v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    // Using range base loop

    // pass by value (it will copy the element so we can't modify them in actual container) ..............
    cout<<"Using range base loop : ";
    // here we are passing data type of the vector to the range base loop (here it is int )
    for(int val : v){           // pass by value (it will copy the element so we can't modify them in actual container)
        val++;
    }

    for(int val : v){           // pass by value (it will copy the element so we can't modify them in actual container)
        cout<<val<<" ";
    }
    cout<<endl;
    // pass by value ends here ...............


    // passing by reference (it will pass actual container elements)..............
    for(int &val : v){           // pass by refeerence (we can modify elements in actual container)
        val++;
    }

    cout<<"Updated vector is : ";
    for(int &val : v){           // pass by value (it will copy the element so we can't modify them in actual container)
        cout<<val<<" ";
    }
    cout<<endl;
    // pass by reference ends here ...................


    // vector of pairs
    cout<<"Vector of pairs : "<<endl;
    vector<pair<int,int>>vp = {{1,2},{3,4},{5,6}};
    for(pair<int,int> &value : vp){         // here we are passing data type of the vector to be passed (here it is pair<int,int> )
        cout<<value.first<<" "<<value.second<<endl;
    }


return 0;
}