// Checking the parenthesis expression to be syntactically correct or not using inbuilt stack

#include <iostream>
#include <stack>
using namespace std;

char Opening(char c){
    if(c==')') return '(';
    else if(c=='}') return '{';
    else if(c==']') return '[';
    else return '\0';
}

int main(){
    stack<int>s;
    string p;
    bool flag = true;
    cout<<"Enter the parenthesis : ";
    cin>>p;
    for (int i = 0; i < p.length(); i++){
        if(p[i]=='(' or p[i]=='{' or p[i]=='['){
            s.push(p[i]);
        }
        else if(p[i]==')' or p[i]=='}' or p[i]==']'){
            if(s.top()==Opening(p[i])) s.pop();  // problem solved using Opening function
            else{
                flag = false;
                break;
            }
        }
    }
    if(s.empty() and flag == true) cout<<"Right Order"<<endl;
    else cout<<"Wrong Order"<<endl;

return 0;
}