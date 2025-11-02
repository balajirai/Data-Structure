#include <iostream>
#include <vector>
using namespace std;

void printv(vector<int>v){
    // v.size()  ->  O(1)
    cout<<"Size of vector is : "<<v.size()<<endl;
    cout<<"Elements are : ";
    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    // initialize vector with size 10 and elements as 0
    vector<int>v(10);
    printv(v);

    // intialize vector with size 5 and elements as 14
    vector<int>vec(5,14);
    printv(vec);

    // push_back 
    v.push_back(7);    // O(1)
    v.push_back(34);   // O(1) -> amortized, may take O(n) when reallocation happens
    v.pop_back();      // O(1)
    printv(v);

return 0;
}