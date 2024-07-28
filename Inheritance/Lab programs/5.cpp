#include<iostream>
using namespace std;
class class_2;
class class_1 {
    private:
        int data;
    public:
        class_1(int d): data(d) {}
        friend void swap(class_1&, class_2&);
        void display() {
            cout << "Data in class_1: " << data << endl;
        }
};
class class_2 {
    private:
        int data;
    public:
        class_2(int d): data(d) {}
        friend void swap(class_1&, class_2&);
        void display() {
            cout << "Data in class_2: " << data << endl;
        }
};
void swap(class_1 &c1, class_2 &c2) {
    int temp = c1.data;
    c1.data = c2.data;
    c2.data = temp;
}
int main() {
    class_1 c1(5);
    class_2 c2(10);
    c1.display();
    c2.display();
    swap(c1, c2);
    c1.display();
    c2.display();
    return 0;
}