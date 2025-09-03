#include <iostream>
#include <string>

// Top-level namespace
namespace std_msgs {

    // Nested namespace
    namespace msg {

        // A simple class similar to ROS2's String message
        class String {
        public:
            // Member variable
            std::string data;

            // Default constructor
            String() : data("") {
                std::cout << "Default constructor called\n";
            }

            // Constructor with initial value
            String(const std::string& value) : data(value) {
                std::cout << "Constructor with value called\n";
            }
        };

    } // namespace msg

} // namespace std_msgs

int main() {

    // Using auto with default constructor
    auto msg1 = std_msgs::msg::String();
    msg1.data = "Hello ROS2";
    std::cout << "msg1.data = " << msg1.data << std::endl;

    // Using auto with constructor that takes a value
    auto msg2 = std_msgs::msg::String("Pre-filled message");
    std::cout << "msg2.data = " << msg2.data << std::endl;

    return 0;
}

/*

Note:

: data("")  -> This is called a member initializer list in C++.

equivalent to writing:

// Assign inside constructor body
String() {
    data = "";
}

Syntax:

ClassName() : member1(value1), member2(value2), ... {
    // constructor body
}


*/