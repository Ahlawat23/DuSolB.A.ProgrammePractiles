#include <iostream>
using namespace std;

const int MAX_SIZE = 100; 

class Stack {

   private:

      int top; 
      int elements[MAX_SIZE]; 

   public:

      Stack() {
         top = -1; 
      }

      bool isEmpty() {
         return (top == -1);
      }

      bool isFull() {
         return (top == MAX_SIZE - 1);
      }

      void push(int value) {

         if (isFull()) {
            cout << "Stack overflow! Cannot push element" << value << endl;
            return;
         }
         elements[++top] = value;
         cout << "Element" << value << "pushed to the stack." <<endl;
      }

      void pop() {
         if (isEmpty()) {
            cout << "Stack underflow! Cannot pop element." <<endl;
            return;
         }
         int poppedElement = elements[top--];
         cout << "Popped element:" << poppedElement << endl;
      }

      int peek() {
         if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1; // Returning -1 as an error value
         } 
         return elements[top];
      }

      int size() {
         return (top + 1);
      }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    cout << "Stack size:" << stack.size() << endl;
    cout << "Top element:" << stack.peek() << endl;
    stack.pop();
    stack.pop();
    cout << "Stack size after popping:" << stack.size() << endl;
    cout << "Top element after popping" << stack.peek() << endl;
    return 0;
}
   