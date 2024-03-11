#include <bits/stdc++.h>
using namespace std;
int main(){
    // Lambda functions are used to reduce the lines of codes

    // way 1 ( declaring and calling at same time)
    cout<<"Lambda function (declaring and calling at same time) : "<< [](int x){return x+2;}(5) <<endl;

    // way 2 (declare and use multiple times)
    auto sum = [](int x, int y){return x+y;};
    cout<<"Lambda function (declare and use multiple times) : "<<sum(5,5)<<endl;
return 0;
}