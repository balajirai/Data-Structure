#include <iostream>
using namespace std;

class Node{
    int data;
    Node* next;

    public:
        Node(int val){
            data = val;
            next = NULL;
        }

    // insert at head
    void InsertAtHead(Node* &head, int val){
        Node* n = new Node(val);        // allocating new node and assingning it the data value
        n->next = head;                 // assigning the address "pointed by" previous head pointer (actually the  address of original first element) to the next pointer of n (new element)
        head = n;                       // updating the head pointer
        cout<<"Inserted "<<val<<" at Head\n"<<endl;
    }

    // insert at end
    void InsertAtTail(Node* head, int val){
        Node* temp = new Node(val);     // creating the node and assigning the data
        temp->next = NULL;              // pointing next of the new node to NULL (new tail)
        Node* ptr = head;               // creating a local pointer to traverse the linked list 
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = temp;               // pointing  the previous node to the newly created node
        cout<<"\nInserted "<<val<<" at Tail\n"<<endl;
    }

    // insert after given node
    void InsertAtPos(Node* head, int val, int pos){
        if(head == NULL){
            head->data = val;
            head->next = NULL;
        }
        else{
            Node* temp = new Node (val);
            Node* ptr = head;
            int count = 1;           
            while(count < pos-1){
                ptr = ptr->next;
                count++;
            }
            temp->next = ptr->next;
            ptr->next = temp;

            cout<<"\nInserted "<<val<<" at position : "<<pos<<"\n"<<endl;
        }
    }

    // // display the linked list
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

    Node* head = new Node(5);           // created a head pointer of "object type" Node (class) which is pointing to a node storing 5 as data value and next pointer as NULL assign by construcor
    head->display(head);

    head->InsertAtHead(head, 7);
    head->InsertAtHead(head, 3);
    head->InsertAtHead(head, 1);
    head->InsertAtHead(head, 6);

    head->display(head);

    head->InsertAtTail(head, 34);
    head->display(head);

    head->InsertAtPos(head, 77, 4);
    head->display(head);
    
return 0;
}