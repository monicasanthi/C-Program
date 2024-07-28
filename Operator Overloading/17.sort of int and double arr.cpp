#include <iostream>
#include <algorithm>
using namespace std;
class ArraySorter {
    public:
        void sortIntArray(int arr[], int size) {
            std::sort(arr, arr + size);
            cout << "Sorted integer array: ";
            for(int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
        void sortDoubleArray(double arr[], int size) {
            std::sort(arr, arr + size); 
            cout << "Sorted double array: ";
            for(int i = 0; i < size; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
};
int main() {
    ArraySorter sorter;
    int intArr[] = {5, 2, 8, 1, 9};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    sorter.sortIntArray(intArr, intSize); 
    double doubleArr[] = {3.5, 1.2, 4.8, 2.1, 5.6};
    int doubleSize = sizeof(doubleArr) / sizeof(doubleArr[0]);
    sorter.sortDoubleArray(doubleArr, doubleSize); 
    return 0;
}