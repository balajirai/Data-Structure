#include <iostream>
#include <memory>
using namespace std;


// ===============================================================IMPORTANT===============================================================
// weak_ptr is a smart pointer that holds a non-owning ("weak") reference to an object that is managed by std::shared_ptr.
// It is used to break circular references that can occur with shared_ptr, preventing memory leaks.
// A weak_ptr does not contribute to the reference count of the shared_ptr, and thus does not affect the lifetime of the managed object.
// To access the object managed by a weak_ptr, you must convert it to a shared_ptr using the lock() method, 
// which will return a shared_ptr if the object is still alive, or nullptr if it has been destroyed.
// =======================================================================================================================================


int main(){
    
    {
        // To demonstrate automatic resource management with weak_ptr
        weak_ptr<int> weakPtr;
        {
            shared_ptr<int> sharedPtr = make_shared<int>(75);
            weakPtr = sharedPtr; // weakPtr now observes the same object as sharedPtr
            cout << "Value pointed by sharedPtr: " << *sharedPtr << endl;
            cout << "Address held by sharedPtr: " << sharedPtr.get() << endl;
            cout << "Reference count of sharedPtr: " << sharedPtr.use_count() << endl;
            cout << "Reference count of weakPtr: " << weakPtr.use_count() << endl;
        } // sharedPtr goes out of scope here and the int object is destroyed

        if (weakPtr.expired()) {
            cout << "The object observed by weakPtr has been destroyed." << endl;
        }
        else {
            cout << "The object observed by weakPtr is still alive." << endl;
        }
        cout << "Reference count of weakPtr after sharedPtr is out of scope: " << weakPtr.use_count() << endl;
    }
    
    return 0;
}