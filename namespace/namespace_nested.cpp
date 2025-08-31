#include <iostream>
using namespace std;

// Outer namespace
namespace outer {
    void fun(){
        cout << "In the outer namespace" << endl;
    }
    
    // Inner namespace
    namespace inner {
        void func() {
            cout << "In the inner namespace" << endl;
        }
    }
}

int main() {

    // Accessing member of outer namespace
    outer::fun();
    
    // Accessing member of inner namespace
    outer::inner::func();  

    return 0;
}