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
        // To demonstrate automatic resource management with unique_ptr
        // Constructor will create the object and Destructor will destroy it
        unique_ptr<MyClass> myClassPtr = make_unique<MyClass>();
    }
    
    
    return 0;
}