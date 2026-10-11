#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
}; 

Node* deleteNode(Node* head, int position) {
    if (head == nullptr || position < 1) {
        return head;
    }
    if (position == 1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    
    Node* current = head;
    for (int i = 1; i < position - 1 && current != nullptr; i++) {
        current = current->next;
    }

    if (current == nullptr || current->next == nullptr) {
        return head;
    }

    Node* temp = current->next;
    current->next = current->next->next;
    delete temp;
    return head;
}

int main() {
    // Create and initialize linked list
    Node* head = new Node();
    head->data = 500;
    head->next = nullptr;

    // Example: Add more nodes for testing
    Node* second = new Node();
    second->data = 600;
    second->next = nullptr;
    head->next = second;

    //add more
    Node* third=new Node();
    third->data=700;
    third->next=nullptr;
    second->next=third;

    //add 4th data
    Node* foutrh=new Node();
    foutrh->data=800;
    foutrh->next=nullptr;
    third->next=foutrh;

    cout << "Before deletion:" << endl;
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Delete a node
    head = deleteNode(head, 5);

    cout << "After deletion:" << endl;
    temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;

    // Clean up remaining nodes
    delete head;

    return 0;
}
