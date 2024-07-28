#include <iostream>
using namespace std;
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void printArray(double arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void printArray(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    int intArr[] = {1, 2, 3, 4, 5};
    double doubleArr[] = {1.1, 2.2, 3.3, 4.4, 5.5};
    char charArr[] = {'a', 'b', 'c', 'd', 'e'};
    cout << "Integer array: ";
    printArray(intArr, 5);
    cout << "Double array: ";
    printArray(doubleArr, 5);
    cout << "Character array: ";
    printArray(charArr, 5);
    return 0;
}