#include <iostream>

struct Node {
    int data;
    Node* next;
    Node(int val) : data(val), next(nullptr) {}
};

class LinkedList {
public:
    Node* head;

    LinkedList() : head(nullptr) {}

    void append(int data) {
        Node* new_node = new Node(data);
        if (head == nullptr) {
            head = new_node;
            return;
        }
        Node* last_node = head;
        while (last_node->next != nullptr) {
            last_node = last_node->next;
        }
        last_node->next = new_node;
    }

    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " -> ";
            current = current->next;
        }
        std::cout << "nullptr" << std::endl;
    }
    
    void reverse() {
        Node* prev = nullptr;
        Node* current = head;
        Node* next_node = nullptr;
        while (current != nullptr) {
            next_node = current->next;
            current->next = prev;
            prev = current;
            current = next_node;
        }
        head = prev;
    }
};

int main() {
    LinkedList myList;
    myList.append(1);
    myList.append(2);
    myList.append(3);
    myList.append(4);

    std::cout << "Original linked list: ";
    myList.display();

    myList.reverse();

    std::cout << "Reversed linked list: ";
    myList.display();

    return 0;
}
