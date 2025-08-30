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
        // To demonstrate automatic resource management with shared_ptr
        shared_ptr<MyClass> myClassPtr = make_shared<MyClass>();
        cout << "Reference count of myClassPtr: " << myClassPtr.use_count() << endl;

        {   // Create another shared pointer that shares ownership of the same resource
            shared_ptr<MyClass> myClassPtr2 = myClassPtr;  // Both myClassPtr and myClassPtr2 now own the same resource
            cout << "Reference count of myClassPtr after creating myClassPtr2: " << myClassPtr.use_count() << endl;
        }

        cout << "Reference count of myClassPtr after myClassPtr2 goes out of scope: " << myClassPtr.use_count() << endl;

    }
    
    
    return 0;
}