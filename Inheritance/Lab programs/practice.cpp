#include <iostream>
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void bubbleSort(int* arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (*(arr + j) > *(arr + j + 1)) {
                swap(arr + j, arr + j + 1);
            }
        }
    }
}
void printArray(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        std::cout << *(arr + i) << " ";
    }
    std::cout << std::endl;
}
int main() {
    int* arr = nullptr;
    int n = 0;
    int capacity = 1;

    std::cout << "Enter infinite numbers (enter -1 to stop reading):" << std::endl;

    arr = new int[capacity]; // initial allocation for 1 element

    int num;
    while (true) {
        std::cin >> num;
        if (num == -1) break;
        if (n == capacity) {
            capacity *= 2;
            int* newArr = new int[capacity];
            for (int i = 0; i < n; i++) {
                newArr[i] = arr[i];
            }
            delete[] arr;
            arr = newArr;
        }
        arr[n++] = num;
    }
    bubbleSort(arr, n);
    std::cout << "Sorted array in ascending order: ";
    printArray(arr, n);

    delete[] arr; 
    return 0;
}