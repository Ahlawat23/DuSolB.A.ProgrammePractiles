#include <iostream>
using namespace std;

class Node {

    public:

        int data;
        Node* next;

        Node(int value) {
            data = value;
            next = nullptr; 
    }
};

class Stack{

    private:
    Node* top = nullptr;

    public:
    
    void Push(int value){
        Node* newnode = new Node(value);
        newnode->next = top;
        top = newnode;
    }

    void Pop(){
        if(top == NULL){
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }

    bool isEmpty() {
        return (top == nullptr);
    }

    int peek() {
        if (isEmpty()) {
            return -1; 
        }
        return top->data;
    }

    int size() {
        int count = 0;
        Node* current = top;
        while (current != nullptr) {
            count++;
            current = current->next;
        }
        return count;
    }
       
       
};


int main() {
    Stack stack;
    stack.Push(10);
    stack.Push(20);
    stack.Push(30);
    cout << "Stack size:" << stack.size() << endl;
    cout << "Top element:" << stack.peek() << endl;
    stack.Pop();
    stack.Pop();
    cout << "Stack size after popping:" << stack.size() << endl;
    cout << "Top element after popping:" << stack.peek() << endl;
    return 0;

}
   