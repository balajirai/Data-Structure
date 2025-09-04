#include <iostream>
using namespace std;

template <typename T>
class Box {
    T value;
public:
    Box(T v) : value(v) {}
    T getValue() { return value; }
};

int main() {
    Box<int> intBox(10);
    Box<double> doubleBox(3.14);
    Box<string> strBox("Hello");

    cout << intBox.getValue() << endl;
    cout << doubleBox.getValue() << endl;
    cout << strBox.getValue() << endl;
}
