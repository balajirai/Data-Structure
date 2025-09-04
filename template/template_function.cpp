#include <iostream>
using namespace std;

template <typename T>   // 'T' is a placeholder for a type
T add(T a, T b) {
    return a + b;
}

int main() {
    cout << add(3, 4) << endl;        // T becomes int
    cout << add(3.5, 2.2) << endl;    // T becomes double
    cout << add(5.0f, 2.3f) << endl;  // T becomes float
}