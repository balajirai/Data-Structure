#include <iostream>
using namespace std;

// Recursive function to calculate power of 2
int powerOfTwo(int exponent) {
    if (exponent == 0) {
        return 1;
    } 
    else{
        // Recursive case: 2^n = 2 * 2^(n-1)
        return 2 * powerOfTwo(exponent - 1);
    }
}

int main() {
    int exponent;
    cout << "Enter the exponent: ";
    cin >> exponent;

    int result = powerOfTwo(exponent);
    cout << "2^" << exponent << " = " << result << endl;

    return 0;
}
