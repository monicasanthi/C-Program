#include <iostream>
using namespace std;
class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int value) {
        data = value;
        left = nullptr;
        right = nullptr;
    }
};
class BinarySearchTree {
private:
    Node* root;
    Node* insertNode(Node* node, int value) {
        if (node == nullptr) {
            node = new Node(value);
        } else if (value < node->data) {
            node->left = insertNode(node->left, value);
        } else if (value > node->data) {
            node->right = insertNode(node->right, value);
        }
        return node;
    }
    void inOrderTraversal(Node* node) {
        if (node != nullptr) {
            inOrderTraversal(node->left);
            cout << node->data << " ";
            inOrderTraversal(node->right);
        }
    }
    Node* copyTree(Node* node) {
        if (node == nullptr) {
            return nullptr;
        }
        Node* newNode = new Node(node->data);
        newNode->left = copyTree(node->left);
        newNode->right = copyTree(node->right);
        return newNode;
    }
    bool compareTrees(Node* node1, Node* node2) {
        if (node1 == nullptr && node2 == nullptr) {
            return true;
        }
        if (node1 == nullptr || node2 == nullptr) {
            return false;
        }
        if (node1->data != node2->data) {
            return false;
        }
        return compareTrees(node1->left, node2->left) && compareTrees(node1->right, node2->right);
    }

public:
    BinarySearchTree() {
        root = nullptr;
    }

    // Insert a node into the tree
    void insert(int value) {
        root = insertNode(root, value);
    }

    // Perform In-Order traversal
    void traverse() {
        inOrderTraversal(root);
        cout << endl;
    }

    // Copy the contents of one tree to another
    void copy(BinarySearchTree& other) {
        root = copyTree(other.root);
    }

    // Compare the contents of two trees
    bool isEqual(BinarySearchTree& other) {
        return compareTrees(root, other.root);
    }
};

int main() {
    BinarySearchTree tree1;
    tree1.insert(5);
    tree1.insert(3);
    tree1.insert(7);
    tree1.insert(2);
    tree1.insert(4);
    tree1.insert(6);
    tree1.insert(8);

    cout << "Tree 1: ";
    tree1.traverse();

    BinarySearchTree tree2;
    tree2.insert(5);
    tree2.insert(3);
    tree2.insert(7);
    tree2.insert(2);
    tree2.insert(4);
    tree2.insert(6);
    tree2.insert(8);

    cout << "Tree 2: ";
    tree2.traverse();

    BinarySearchTree tree3;
    tree3.copy(tree1);

    cout << "Tree 3 (copied from Tree 1): ";
    tree3.traverse();

    cout << "Are Tree 1 and Tree 2 equal? " << (tree1.isEqual(tree2) ? "Yes" : "No") << endl;
    cout << "Are Tree 1 and Tree 3 equal? " << (tree1.isEqual(tree3) ? "Yes" : "No") << endl;

    return 0;
}