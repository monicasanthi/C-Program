#include <iostream>
using namespace std;
class Stack {
private:
    int* elements;
    int top;
    int capacity;
public:
    Stack(int capacity) {
        this->capacity = capacity;
        this->top = -1;
        this->elements = new int[capacity];
    }
    ~Stack() {
        delete[] elements;
    }
    bool isEmpty() {
        return top == -1;
    }
    bool isFull() {
        return top == capacity - 1;
    }
    void push(int value) {
        if (isFull()) {
            cout << "Stack is full. Can't push " << value << endl;
            return;
        }
        elements[++top] = value;
    }
    int pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Can't pop." << endl;
            return -1;
        }
        return elements[top--];
    }
    void display() {
        for (int i = 0; i <= top; i++) {
            cout << elements[i] << " ";
        }
        cout << endl;
    }
};
int main() {
    Stack stack(5);
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    cout << "Stack: ";
    stack.display();
    int popped = stack.pop();
    cout << "Popped: " << popped << endl;
    cout << "Stack after pop: ";
    stack.display();
    stack.push(6);
    cout << "Stack after push: ";
    stack.display();
    return 0;
}