// taking user input into vector

#include <iostream>
#include <vector>
using namespace std;

void Printvec(vector<string>v){
    cout<<"Vector elements is/are : ";
    cout<<v[0];
    for (int i = 1; i < v.size(); i++){
        cout<<", "<<v[i];
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"Enter the number of strings : ";
    cin>>n;
    vector<string>v;
    cout<<"Enter the strings : ";
    for (int i = 0; i < n; i++){
        string s;
        cin>>s;
        v.push_back(s);
    }
    Printvec(v);
    
return 0;
}