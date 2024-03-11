#include <iostream>
#define N 5
using namespace std;

class Stack{
    int items[N], top;
    public:
    Stack(){
        top = -1;
        for (int i = 0; i < N; i++)
            items[i] = 0;
    }
    
    bool isEmpty(){
        if(top == -1)
            return true;
        else return false;
    }

    bool isFull(){
        if(top == N-1)
            return true;
        else return false;
    }

    void push(int element){
        if(isFull())
            cout<<"\nStack Overflow\n"<<endl;
        else{
            top++;
            items[top] = element;
            cout<<"Inserted "<<element<<endl;
        }
    }

    void pop(){
        if(isEmpty())
            cout<<"\nStack Underflow\n"<<endl;
        else{
            int element = items[top];
            top--;
            cout<<"\nRemoved "<<element<<endl;
        }
    }

    void display(){
        if(isEmpty())
            cout<<"\nStack Underflow\n"<<endl;
        else{
            cout<<"\nStack is : ";
            for(int i = 0; i <= top; i++)
                cout<<items[i]<<"   ";
            cout<<endl;
        }
            
    }

};
int main(){

    Stack s;

    s.display();

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);

    s.display();

    s.pop();

    s.display();

return 0;
}