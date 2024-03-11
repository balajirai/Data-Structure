#include <iostream>
using namespace std;

int powerOfTwo(int exponent) {
    // Base case: when exponent is 0, 2^0 is 1
    if (exponent == 0) {
        return 1;
    } 
    else if (exponent % 2 == 0) {
        // If exponent is even, use the identity: a^(2n) = (a^n)^2
        int halfPower = powerOfTwo(exponent / 2);
        return halfPower * halfPower;
    } 
    else {
        // If exponent is odd, use the identity: a^(2n+1) = a * a^(2n)
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
