#include <iostream>
#include <memory>
using namespace std;


// ================================================IMPORTANT================================================
// shared_ptr allows multiple pointers to share ownership of the same resource.
// It maintains a reference count to keep track of how many shared_ptr instances point to the same resource.
// The resource is automatically deallocated when the last shared_ptr pointing to it is destroyed or reset.
// =========================================================================================================


int main(){
    
    // Create a shared pointer using make_shared (preferred way)
    shared_ptr<int> shPtr1 = make_shared<int>(50);

    cout << "Value pointed by shPtr1: " << *shPtr1 << endl;
    cout << "Address held by shPtr1: " << shPtr1.get() << endl;
    cout << "Reference count of shPtr1: " << shPtr1.use_count() << endl;


    // Create another shared pointer that shares ownership of the same resource
    shared_ptr<int> shPtr2 = shPtr1;  // Both shPtr1 and shPtr2 now own the same resource
    cout << "\n===========After assigning shPtr1 to shPtr2=========\n" << endl;
    cout << "Value pointed by shPtr2: " << *shPtr2 << endl;
    cout << "Address held by shPtr2: " << shPtr2.get() << endl;

    cout << "\nReference count of shPtr1: " << shPtr1.use_count() << endl;
    cout << "Reference count of shPtr2: " << shPtr2.use_count() << endl;
    
    return 0;
}