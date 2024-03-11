// FIFO : first in first out 

#include <iostream>
#include <queue>
using namespace std;

void PrintQueue(queue<int>q){
    while (!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main(){
    queue<int>q;

    cout<<"Check empty : "<<q.empty()<<endl;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    PrintQueue(q);

    q.pop();
    q.pop();

    PrintQueue(q);

    cout<<"Size of queue : "<<q.size()<<endl;
    
    
return 0;
}