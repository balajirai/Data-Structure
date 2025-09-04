#include <iostream>
using namespace std;

template <typename T1, typename T2>
T2 multiply(T1 a, T2 b) {
    return a * b;
}

int main() {
    cout << multiply(3, 4.5) << endl;   // T1 = int, T2 = double
}
