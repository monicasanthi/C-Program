#include <iostream>
using namespace std;
template <typename T>
class LinkedList {
private:
    struct Node {
        T data;
        Node* next;
    };

    Node* head;

public:
    LinkedList() : head(nullptr) {}

    ~LinkedList() {
        Node* temp = head;
        while (temp != nullptr) {
            Node* next = temp->next;
            delete temp;
            temp = next;
        }
    }

    void insertAtBeginning(T data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(T data) {
        Node* newNode = new Node;
        newNode->data = data;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void deleteNode(T data) {
        if (head == nullptr) return;

        if (head->data == data) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            if (temp->next->data == data) {
                Node* nodeToDelete = temp->next;
                temp->next = temp->next->next;
                delete nodeToDelete;
                return;
            }
            temp = temp->next;
        }
    }

    void printList() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }

    bool searchNode(T data) {
        Node* temp = head;
        while (temp != nullptr) {
            if (temp->data == data) return true;
            temp = temp->next;
        }
        return false;
    }
};

int main() {
    LinkedList<int> intList;
    intList.insertAtBeginning(10);
    intList.insertAtEnd(20);
    intList.insertAtBeginning(5);
    intList.insertAtEnd(30);

    cout << "Linked List: ";
    intList.printList();

    intList.deleteNode(20);

    cout << "Linked List after deletion: ";
    intList.printList();

    if (intList.searchNode(30)) {
        cout << "Node 30 found in the list." << endl;
    } else {
        cout << "Node 30 not found in the list." << endl;
    }

    return 0;
}