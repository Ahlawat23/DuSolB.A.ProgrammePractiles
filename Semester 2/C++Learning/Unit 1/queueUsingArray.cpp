#include <iostream> 
using namespace std;

class Queue{

    private:
    int front, rear, size;
    int* arr;

    public:
    Queue(int capacity) {
        size = capacity;
        arr = new int[size];
        front = rear = -1;
    }

    ~Queue() {
        delete[] arr;
    }

    bool isFull(){
       return rear == size - 1; 
    }

    bool isEmpty() {
        return front == -1 || front > rear;
    }

    void Enqueue(int value){
        if(isFull()){
            cout << "Queue is full!\n";
            return;
        }
        if (front == -1) front = 0;
        arr[++rear] = value;

    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty!\n";
            return;
        }
        front++;
    }


    
};