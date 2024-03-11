#include <iostream>
#include <stack>
using namespace std;
int main(){
    stack<int> stack;

    stack.push(21);
    stack.push(22);
    stack.push(24);
    stack.push(25);

    stack.pop();    //remove 25
    stack.pop();    //remove 24

    cout<<"size of stack : "<<stack.size()<<endl;

    while (!stack.empty()){
        cout << stack.top()<< ' ' ;
        stack.pop();
    }

    // stack<char>c;
    // c.push('n');
    // cout<<c.top()<<endl;
    // c.pop();
    // cout<<c.top()<<endl;  // what will happen when we try to access top of an empty stack
    
}
