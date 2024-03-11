// vectors rference

#include <bits/stdc++.h>
using namespace std;

// passing vector by value
void vectval(vector<int>v1){
    v1.pop_back();
    v1.pop_back();
    v1.push_back(16);
    v1.push_back(18);
}

// passing vector by reference
void vectref(vector<int>&v2){
    v2.pop_back();
    v2.pop_back();
    v2.push_back(16);
    v2.push_back(18);
}

// printing vector (we are just printing the vector so passing by value or reference is same (not modifying the elements))
void vectprint(vector<int>v3){
    for (int i = 0; i < v3.size(); i++){
        cout<<v3[i]<<" ";
    }
    cout<<endl;
}


int main(){
    vector<int> v;
    v.push_back(8);
    v.push_back(9);

    // calling the vectval
    vectval(v);
    cout<<"Vector after call by value     : ";
    vectprint(v);

    //calling the vectref
    vectref(v);
    cout<<"Vector after call by reference : ";
    vectprint(v);

return 0;
}