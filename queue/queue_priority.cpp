#include <bits/stdc++.h>
using namespace std;

// display function
void display(priority_queue<int> pq){
    cout<<"[ ";
    while (!pq.empty()){
        int ele = pq.top();
        pq.pop();
        cout<<ele<<" ";
    }
    cout<<"]"<<endl;
}

int main(){
    priority_queue<int>pq;

    for(int i : {3,5,7,12,4,100,0,3,5,7,})
        pq.push(i);

    cout<<"Size : "<<pq.size()<<endl;
    cout<<"Top  : "<<pq.top()<<endl;

    // displaying priority queue
    display(pq);

    pq.pop();

    cout<<"\nSize : "<<pq.size()<<endl;
    cout<<"Top  : "<<pq.top()<<endl;
    display(pq);
return 0;
}