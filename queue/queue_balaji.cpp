#include <iostream>
#define N 5
using namespace std;

class Queue{
    int items[N], front, rear;
    public:
    Queue(){
        front = -1;
        rear = -1;
    }


    bool isEmpty(){
        if(front == -1)       // && rear == -1
            return true;
        else return false;
    }

    bool isFull(){
        if (front == 0 && rear == N-1)
            return true;
        else return false;
    }

    void enQueue(int element){
        if(isFull())
            cout<<"\nQueue is full"<<endl;
        else{
            if(front == -1){                    // when queue is empty just set the front pointer to 0 and then work with rear pointer
                front = 0;                      // && rear == -1
            }
            rear++;
            items[rear] = element;
            cout<<"\nInserted "<<element<<endl;
        }
    }

    void deQueue(){
        if(isEmpty())
            cout<<"\nQueue is empty"<<endl;
        else{
            int element = items[front];
            if(front >= rear){              // we reset the queue after deleting the last element
                front = -1;
                rear = -1;
            }
            else front ++;
            cout<<"\nDeleted "<<element<<endl;
        }
    }

    void dispalyQueue(){
        if(isEmpty())
            cout<<"\nQueue is Empty\n"<<endl;
        else{
            cout<<"\nFront index is : "<<front<<endl;
            cout<<"Rear index is  : "<<rear<<endl;
            cout<<"\nDisplaying Queue : ";
            for(int i = front; i <= rear; i++)
                cout<<items[i]<<"   ";
            cout<<"\n"<<endl;
        }
    }
};
int main(){

    Queue q;
    q.dispalyQueue();
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);
    q.enQueue(4);
    q.enQueue(5);
    q.enQueue(6);

    q.dispalyQueue();

    q.deQueue();
    q.deQueue();

    q.dispalyQueue();


    return 0;
}