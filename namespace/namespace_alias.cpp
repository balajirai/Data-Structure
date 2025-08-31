#include <iostream>
using namespace std;

// Original namespace
namespace namespace_name{
    void func() {
        cout << "This Namespace has its original name 'namespace_name' " << endl;
        cout << "But it is getting called by an 'alias' for this namespace which is 'ns' " << endl;
    }
}

// Creating an alias for a namespace
namespace ns = namespace_name;

int main(){
    
    // Using the alias to call the function
    ns::func();
    
    return 0;
}