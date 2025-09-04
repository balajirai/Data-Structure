#include <iostream>
using namespace std;

template <typename T>
void show(T x) {
    cout << "Generic version: " << x << endl;
}

// Specialization for string
template <>
void show<string>(string x) {
    cout << "Specialized for string: " << x << endl;
}

int main() {
    show(10);        // Generic version
    show(3.14);      // Generic version
    show(string("Hi")); // Specialized version
}