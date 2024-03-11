#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    map<int, string> sample_map { { 1, "one"}, { 2, "two" } };

    // way 1
    cout <<"Way 1 to access map : "<<sample_map[1]<< endl;

    // way 2
    cout <<"Way 2 to access map : "<<sample_map.at(2)<< endl;
}