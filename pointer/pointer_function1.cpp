#include <iostream>
using namespace std;

int getNumber(){
    return 5;
}

int main(){

    // MSVC (Visual Studio, Windows), 
    // std::ostream does provide an overload for function pointers
    // This works in Visual Studio
    // cout << "Address of getNumber function: " << getNumber << endl;

    cout << "Address of getNumber function: " << (void*)getNumber << endl;
    cout << "Invoke the getNumber function: " << getNumber() << endl;


    int (*funcPtr)() = getNumber; // Declare a function pointer and assign it to getNumber


    cout << "\nAddress of getNumber function via funciton pointer: " << (void*)funcPtr << endl;
    cout << "Invoke the getNumber function via function pointer: " << funcPtr() << endl;

    
    return 0;
}