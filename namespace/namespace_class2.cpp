#include <iostream>
using namespace std;

// creating a namespace
namespace myspace{
    class MyClass{
        public:
            void display(){
                cout << "Inside MyClass of namespace myspace" << endl;
            }
    };
}

int main(){
    
    // creating an object in namespace myspace
    // Having data-type MyClass 
    myspace::MyClass obj;
    obj.display();
    
    return 0;
}