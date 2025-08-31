#include <iostream>
using namespace std;


// A namespace does not have a name called an anonymous namespace. 
// It ensures that the entities in the unnamed namespace are limited to that file.


// Anonymous namespace
namespace {
    int value = 10;
}

int main() {
    
    // Accessing anonymous namespace variable
    cout << value << endl;  

    return 0;
}