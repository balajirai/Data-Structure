// iterators are basically pointers that points to the elements of stl container 
// we can dereference it to get the element of container
// iterators are continuous i.e if it points to first element then it++ will points to second element of container

// there is "difference" between it++ and it+1 (although it is same in vectors)

// iterators are used for those containers which does not allow indexing like maps sets etc...
// but we can also use this for all containers like array vectors etc...

// .begin()  :  points to first element of the container
// .end()    :  points to next to last element of the container (i.e it points to element after the last element which doesn't exist)

#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v = {1,2,3,4,5,6};

    // using indexing
    cout<<"Using indexing : ";
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // using iterator
    cout<<"Using iterator : ";
    vector<int> :: iterator it;    // declaring iterator
    for (it = v.begin(); it != v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    // vector of pairs and iterator
    vector<pair<int,int>>vp = {{1,2},{3,4},{5,6}};
    vector<pair<int,int>> :: iterator itr;     // declaring iterator

    // printing vector of pairs using iterator
    cout<<"\nVector of pairs are : "<<endl;
    for(itr = vp.begin(); itr != vp.end(); itr++){
        cout<<(*itr).first<<", "<<(*itr).second<<endl;
        // cout<<itr->first<<", "<<itr->second<<endl;
    }

    // (*itr).first  <=>   itr->first      dot operator vs  arrow operator

return 0;
}