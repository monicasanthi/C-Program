#include <iostream>
using namespace std;
template <typename T>
class Stack {
private:
    T* arr;
    int top;
    int capacity;

public:
    Stack(int capacity) {
        this->capacity = capacity;
        arr = new T[capacity];
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }
    // Check if stack is empty
    bool isEmpty() {
        return top == -1;
    }
    // Check if stack is full
    bool isFull() {
        return top == capacity - 1;
    }
    // Push an element onto the stack
    void push(T element) {
        if (isFull()) {
            cout << "Stack is full. Cannot push " << element << endl;
            return;
        }
        arr[++top] = element;
    }
    // Pop an element from the stack
    T pop() {
        if (isEmpty()) {
            cout << "Stack is empty. Cannot pop." << endl;
            return T(); // Return default value of type T
        }
        return arr[top--];
    }
    // Get the top element of the stack
    T peek() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
            return T(); // Return default value of type T
        }
        return arr[top];
    }
    // Display the stack
    void display() {
        cout << "Stack: ";
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    // Create a stack of integers
    Stack<int> intStack(5);
    intStack.push(1);
    intStack.push(2);
    intStack.push(3);
    intStack.display(); // Output: Stack: 1 2 3
    cout << "Popped: " << intStack.pop() << endl; // Output: Popped: 3
    intStack.display(); // Output: Stack: 1 2
    // Create a stack of strings
    Stack<string> stringStack(5);
    stringStack.push("Hello");
    stringStack.push("World");
    stringStack.display(); // Output: Stack: Hello World
    cout << "Popped: " << stringStack.pop() << endl; // Output: Popped: World
    stringStack.display(); // Output: Stack: Hello

    return 0;
}