#include <iostream>
using namespace std;

class Node{
  public:
    int data;
    Node* next;
        Node(int val){
            data = val;
            next = NULL;
        }

    // delete from beginning
    void DeleteHead(Node* &head){
        if(head == NULL)
            cout<<"List is Empty"<<endl;
        else{
            Node* temp = head;
            head = head->next;
            delete(temp);
            temp=NULL;
        }
    }

    // display the linked list
    void display(Node* n){
        cout<<"\n"<<endl;
        while (n!= NULL){
            cout<<n->data<<"->";
            n = n->next;
        }
        cout<<"NULL\n"<<endl;
        
    }
};

int main(){
    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(3);
    Node* fourth = new Node(4);

    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    head->display(head);

    head->DeleteHead(head);

    head->display(head);
return 0;
}