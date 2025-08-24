#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};


void count_node(Node* head){
    if(head == NULL)            // checking if the list is empty or not
        cout<<"Linked list is empty"<<endl;
    int count = 0;
    Node* ptr = head;
    while (ptr != NULL){
        count++;
        ptr = ptr->next;
    }
    cout<<"Number of nodes are : "<<count<<endl;
}


void printList(Node *n){
    while (n != NULL){
        cout << n->data << " -> ";
        n = n->next;
    }
    cout<<"NULL"<<endl;
}

int main(){

    Node *head = new Node;
    Node *second = new Node;
    Node *third = new Node;
    Node *fourth = new Node;

    head->data = 1;
    second->data = 2;
    third->data = 3;
    fourth->data = 4;

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    count_node(head);
    printList(head);

return 0;
}