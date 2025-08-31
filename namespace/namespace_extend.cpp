#include <iostream>
using namespace std;

namespace nmsp{
    void func(){
        cout << "You can extend me" << endl;
    }
}

// Extending the same namespace
namespace nmsp{
    void func2(){
        cout << "Adding new feature" << endl;
    }
}

int main() {
    
    nmsp::func();
    nmsp::func2();

    return 0;
}