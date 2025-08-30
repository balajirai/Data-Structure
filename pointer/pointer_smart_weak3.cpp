#include <iostream>
#include <memory>
using namespace std;

int main() {
    // Create a shared_ptr outside the inner block so it's still alive later
    shared_ptr<int> sharedPtr = make_shared<int>(75);

    {
        // weakPtr now observes the same object as sharedPtr
        weak_ptr<int> weakPtr = sharedPtr;  

        cout << "Value pointed by sharedPtr: " << *sharedPtr << endl;
        cout << "Address held by sharedPtr: " << sharedPtr.get() << endl;
        cout << "Reference count of sharedPtr: " << sharedPtr.use_count() << endl;
        cout << "Reference count of weakPtr: " << weakPtr.use_count() << endl;

        // Check if weakPtr is still observing a valid object
        if (weakPtr.expired()) {
            cout << "\nThe object observed by weakPtr has been destroyed.\n" << endl;
        }
        else {
            cout << "\nThe object observed by weakPtr is still alive.\n" << endl;
            cout << "Create a shared_ptr from weakPtr using lock()\n" << endl;

            // Lock weakPtr to create a shared_ptr
            shared_ptr<int> sharedPtrFromWeak = weakPtr.lock(); 
            if (sharedPtrFromWeak) {
                cout << "Value pointed by sharedPtrFromWeak: " << *sharedPtrFromWeak << endl;
                cout << "Address held by sharedPtrFromWeak: " << sharedPtrFromWeak.get() << endl;
                cout << "Reference count of sharedPtrFromWeak: " << sharedPtrFromWeak.use_count() << endl;
            }
            else {
                cout << "Failed to lock weakPtr, the object has been destroyed." << endl;
            }
        }

        cout << "Reference count of weakPtr after lock: " << weakPtr.use_count() << endl;
    }

    return 0;
}
