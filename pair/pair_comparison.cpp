// comparing two pairs
// but how ?

// step 1 :  Go to first element of pair and compare it will first element of another pair and then sort accordingly
// step 2 :  If first elements of both pairs are same then go to second element and repeat the process
// step 3 :  If both elements are same then both pairs are same/equal

#include <iostream>
#include <utility>      // header file for pair
using namespace std;
int main(){
    pair<int,int>p1,p2,p3,p4;
    p1 = {1,2};
    p2 = {2,3};

    // checking p1 and p2
    if(p1<p2)       // both elements are greater
        cout<<"p2 is a greater pair than p1"<<endl;

    p3 = {2,4};

    // checking p2 and p3
    if(p2<p3)       // second element is greater
        cout<<"p3 is a greater pair than p2"<<endl;

    p4 = {2,3};

    // checking p2 and p3
    if(p2==p4)       // both elements are equal
        cout<<"p4 is an equal pair to p2"<<endl;

return 0;
}