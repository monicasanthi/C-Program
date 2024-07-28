#include <iostream>
using namespace std;
void sortAscending(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(arr + i) > *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}
void printArray(int* arr, int size) {
    cout << "The Ascending order is given below:" << endl;
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << endl;
    }
}
int main() {
    int* arr = nullptr;
    int size = 0;
    cout << "Enter infinite numbers and (-1 to stop reading)" << endl;
    int num;
    while (true) {
        cin >> num;
        if (num == -1) break;
        arr = (int*)realloc(arr, (size + 1) * sizeof(int));
        *(arr + size) = num;
        size++;
    }
    sortAscending(arr, size);
    printArray(arr, size);
    delete[] arr;
    return 0;
}