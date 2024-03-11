// comparing two sets
// but how ?

// step 1 :  first sort the set then compare with other sets (set sort itself in increasing order by default)
// step 2 :  Go to first element of set and compare it will first element of another set and then sort accordingly
// step 3 :  If first elements of both sets are same then go to second element and repeat the process
// step 4 :  If both elements are same then both sets are same/equal

#include <iostream>
#include <set>
using namespace std;
int main(){
    set<int>s1,s2,s3,s4;
    s1 = {2,4,0};    // this will be sorted as s1 = {0,2,4}
    s2 = {2,3,1};    // this will be sorted as s2 = {1,2,3}

    // after sorting the own sets comparison between two set is done

    // checking s1 and s2
    if(s1<s2)       // all elements are greater
        cout<<"s2 is a greater set than s1"<<endl;

    s3 = {2,1,4};      // this will be sorted as s3 = {1,2,4}

    // checking s2 and s3
    if(s2<s3)       // third element is greater
        cout<<"s3 is a greater set than s2"<<endl;

    s4 = {2,1,3};   // this will be sorted as s4 = {1,2,3}

    // checking s2 and s3
    if(s2==s2)       // all elements are equal
        cout<<"s4 is an equal set to s2"<<endl;


return 0;
}