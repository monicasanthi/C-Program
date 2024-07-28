#include <iostream>
using namespace std;
class CircularQueue {
private:
    int front, rear, capacity;
    int* queue;
public:
    CircularQueue(int capacity) {
        this->capacity = capacity;
        this->front = this->rear = 0;
        this->queue = new int[this->capacity];
    }
    ~CircularQueue() {
        delete[] queue;
    }
    bool isEmpty() {
        return front == rear;
    }
    bool isFull() {
        return (rear + 1) % capacity == front;
    }
    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full. Can't enqueue " << value << endl;
            return;
        }
        queue[rear] = value;
        rear = (rear + 1) % capacity;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is empty. Can't dequeue." << endl;
            return -1;
        }
        int value = queue[front];
        front = (front + 1) % capacity;
        return value;
    }
    void display() {
        int i = front;
        while (i != rear) {
            cout << queue[i] << " ";
            i = (i + 1) % capacity;
        }
        cout << endl;
    }
};
int main() {
    CircularQueue q(5);

    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);
    q.display();
    q.dequeue();
    q.dequeue();
    q.display();
    q.enqueue(6);
    q.enqueue(7);
    q.display();
    return 0;
}