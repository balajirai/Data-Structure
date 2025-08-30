#include <iostream>
#include <memory>
using namespace std;

// =========================================IMPORTANT=========================================
// unique_ptr enforces unique ownership of the resource it manages.
// This means that there can only be one unique_ptr pointing to a given resource at any time.
// Attempting to copy a unique_ptr will result in a compilation error.
// ===========================================================================================


int main(){

    // Also a valid way to create unique pointer
    // unique_ptr<int> unPtr(new int(10));
    
    // Create a unique pointer using make_unique (preferred way)
    unique_ptr<int>unPtr1 = make_unique<int>(25);

    // cout << "Type of unPtr1: " << typeid(unPtr1).name() << endl;

    cout << "Value pointed by unPtr1: " << *unPtr1 << endl;
    cout << "Address held by unPtr1: " << unPtr1.get() << endl;

    // This will work in MSVC (Visual Studio, Windows)
    // cout << "Address held by unPtr1: " << unPtr1 << endl;


    // We cannot copy unique_ptr, as it enforces unique ownership
    // unique_ptr<int> unPtr2 = unPtr1; // Error: use of deleted function


    // Transfer ownership from unPtr1 to unPtr2 using std::move
    unique_ptr<int> unPtr2 = move(unPtr1);  // unPtr1 is now nullptr

    if(unPtr1 == nullptr){
        cout << "\nunPtr1 is now nullptr after move.\n" << endl;
    }

    cout << "Value pointed by unPtr2: " << *unPtr2 << endl;
    cout << "Address held by unPtr2: " << unPtr2.get() << endl;

    // auto a = 0x14fa50cd370;
    // cout << typeid(a).name() << endl;

    return 0;
}