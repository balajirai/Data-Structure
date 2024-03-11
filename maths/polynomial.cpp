#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Coefficients of the quadratic equation ax^2 + bx + c = 0
    double a, b, c;

    // user input
    cout << "Enter coefficient a : ";
    cin >> a;

    cout << "Enter coefficient b : ";
    cin >> b;

    cout << "Enter coefficient c : ";
    cin >> c;

    // Discriminant
    double discriminant = b*b - (4*a*c);
    
    // Two real and distinct roots
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2 * a);
        double root2 = (-b - sqrt(discriminant)) / (2 * a);

        cout << "Root 1: " << root1 << endl;
        cout << "Root 2: " << root2 << endl;
    } 

    // Two real root and equal roots
    else if (discriminant == 0) {
        double root = -b / (2 * a);
        cout << "Root 1: " << root << endl;
        cout << "Root 2: " << root << endl;
    } 
    
    // Complex roots
    else {
        double realPart = -b / (2 * a);
        double imaginaryPart = sqrt(-discriminant) / (2 * a);

        cout << "Root 1: " << realPart << " + " << imaginaryPart << "i" << endl;
        cout << "Root 2: " << realPart << " - " << imaginaryPart << "i" << endl;
    }

    return 0;
}
