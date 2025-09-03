#include <iostream>
using namespace std;

// Difference between Namespace and Class
// A namespace is a declarative region that provides a scope to the identifiers (the names of types, functions, variables, etc) inside it.
// A class is a user-defined data type that serves as a blueprint for creating objects.


// creating a namespace
namespace MyNamespace{
    int var = 10;
    void display(){
        cout << "Inside MyNamespace" << endl;
    }
}

// creating a class
class MyClass{
    public:
        int var = 20;
        void display(){
            cout << "Inside MyClass" << endl;
        }
};

int main(){

    // Accessing namespace members
    // No need to create object
    cout << "var (from MyNamespace) : " << MyNamespace::var << endl;
    MyNamespace::display();

    cout << endl;
    
    // Accessing class members
    // Need to create object
    MyClass obj;
    cout << "var (from MyClass) : " << obj.var << endl;
    obj.display();
    
    
    return 0;
}