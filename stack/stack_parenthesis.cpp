// Checking the parenthesis expression to be syntactically correct or not

#include <bits/stdc++.h>
#define N 101
using namespace std;

class Stack{
    public: 
        char arr[N];
        int top;
    Stack(){
        char arr[N] = {'\0'};
        top = -1;
    }

    void push(char val){
        if(isFull()){
            cout<<"Stack Overflow"<<endl;
            return;
        }
        top++;
        arr[top] = val;
    }

    void pop(){
        if(isEmpty()){
            cout<<"Stack Underflow"<<endl;
            return;
        }
        arr[top] = '\0';
        top--;
    }

    char Top(){
        return arr[top];
    }

    bool isEmpty(){
        if(top == -1) return true;
        else return false;
    }

    bool isFull(){
        if(top==N) return true;
        else return false;
    }

};

char Opening(char c){
    if(c==')') return '(';
    else if(c=='}') return '{';
    else if(c==']') return '[';
    else return '\0';
    
}

int main(){
    Stack s;
    string p;
    bool flag = true;
    cout<<"Enter the parenthesis : ";
    cin>>p;
    for (int i = 0; i < p.length(); i++){
        if(p[i]=='(' or p[i]=='{' or p[i]=='['){
            s.push(p[i]);
        }
        else if(p[i]==')' or p[i]=='}' or p[i]==']'){
            if(s.Top()==Opening(p[i])) s.pop();  // problem solved using Opening function
            else{
                flag = false;
                break;
            }
        }
    }
    if(s.isEmpty() and flag == true) cout<<"Right Order"<<endl;
    else cout<<"Wrong Order"<<endl;
    
return 0;
}