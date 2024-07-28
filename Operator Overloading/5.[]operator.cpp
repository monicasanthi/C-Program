#include <iostream>
using namespace std;
class Array {
private:
    int* data;
    int size;
public:
    Array(int s) : size(s) {
        data = new int[s];
    }
    ~Array() {
        delete[] data;
    }
    int operator[](int index) const {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of range");
        }
        return data[index];
    }
    int& operator[](int index) {
        if (index < 0 || index >= size) {
            throw out_of_range("Index out of range");
        }
        return data[index];
    }
};
int main() {
    Array arr(5);
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 2;
    }
    for (int i = 0; i < 5; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
    return 0;
}