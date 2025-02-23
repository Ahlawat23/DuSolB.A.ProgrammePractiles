#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void insertAtBeginning(int value, Node* head){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
}

void insertAtEnd(int value, Node* head){
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = NULL;

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* current = head;

    while (current->next != NULL)
    {
        current = current->next;
    }

    current->next = newNode;
    

}
void insertInMiddle(int value, int position, Node* head) {
    Node* newNode = new Node;
    newNode->data = value;
    Node* current = head;
    int currentPosition = 1;
    while (current != NULL && currentPosition < position) {
        current = current->next;
    currentPosition++;
    }
    if (current == NULL) {
    // Position exceeds the size of the list
    // Handle the error or insert at the end
    return;
    }
    newNode->next = current->next;
    current->next = newNode;
}

void deleteFromBeginning(Node* head) {
    if (head == NULL) {
    // Handle the error, list is empty
    return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
   }

void deleteFromEnd(Node* head){
    if(head == NULL){
        return;
    }
    if(head->next == NULL){
        delete head;
        head = NULL;
        return;
    }


    Node* current = head;

    while (current->next != NULL)
    {
        current = current->next;
    }

    delete current->next;
    current->next = NULL;
    
}

void deleteFromMiddle(int position, Node* head) {
    if (head == NULL) {
    // Handle the error, list is empty
    return;
    }
    if (position == 1) {
        deleteFromBeginning(head);
        return;
    }

    Node* current = head;
    int currentPosition = 1;
    while (current != NULL && currentPosition < position -1)
    {
        current = current->next;
        currentPosition++;
    }

    if (current == NULL || current->next == NULL) {
        // Position exceeds the size of the list
        // Handle the error or delete from the end
        return;
    }
    Node* temp = current->next;
    current->next = current->next->next;
    delete temp;
}

void displayList(Node* head){
    Node* current = head;
    while (current!=NULL)
    {
        cout << current->data << endl;
        current = current->next;
    }
    
}

// Pointer to the free pool (initially null)
Node* freeList = nullptr;

Node* getNode() {
    if (freeList == nullptr) {
        return new Node(); // Allocate memory if no free node is available
    } else {
        Node* node = freeList;
        freeList = freeList->next; // Remove node from the free list
        return node;
    }
}
       