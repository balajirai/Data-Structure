#include <iostream>
#include <memory>
using namespace std;

class MyClass{
public:
    MyClass(){
        cout << "Constructor invoked!" << endl;
    }
    
    ~MyClass(){
        cout << "Destructor invoked!" << endl;
    }
};


int main(){

    {
        // To demonstrate automatic resource management with weak_ptr
        weak_ptr<MyClass> weakPtr;
        
        {
            shared_ptr<MyClass> sharedPtr = make_shared<MyClass>();
            weakPtr = sharedPtr; // weakPtr now observes the same object as sharedPtr
            cout << "Reference count of sharedPtr: " << sharedPtr.use_count() << endl;
            cout << "Reference count of weakPtr: " << weakPtr.use_count() << endl;
        } // sharedPtr goes out of scope here and the MyClass object is destroyed

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