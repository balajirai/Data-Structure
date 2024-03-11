// multiset is (analogue to multimap) a data structure that can store duplicate keys in sorted ordered
// time complexity :  O(log(n))
// important : sorted order, duplicates available

#include <iostream>
#include <set>
using namespace std;

void PrintUs(multiset<string>&ms){     // passing the actual unordered set (not the copy) to the PrintUs function
    cout<<"Element of multiset is/are : ";
    for(auto &it:ms){                       // passing the actual unordered set elements (not the copy) to the range base loop
        cout<<it<<" ";
    }
    cout<<endl;
}

int main(){
    multiset<string>ms;
    ms.insert("abc");            // O(log(n))
    ms.insert("efg");
    ms.insert("hij");
    ms.insert("klm");           // inserting duplicate elements
    ms.insert("klm");
    ms.insert("klm");

    auto it = ms.find("klm");    // find function will return the iterator of "first occurance" of given element    // O(log(n))   
    if(it!=ms.end()){
        ms.erase(it);            // here erase function will erase the element present at iterator "it" which is returned by find fuction
    }                            // therefore only one out of multiple duplicate key will be erased/deleted (one "klm" will be deleted and two "klm" will still be there)
    
    PrintUs(ms);                 // printing the multiset 

    // one twist is there :   
    // if we use .erase("key")   i.e if we pass the element to be erased to the erase function then all key will be erased
    ms.erase("klm");             // this will erase/delete all "klm"
    PrintUs(ms);                 // printing the multiset 
    
return 0;
}