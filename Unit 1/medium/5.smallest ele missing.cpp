#include <iostream>
using namespace std;
int findMissing(int arr[], int n) {
    int i = 0;
    while (i < n && arr[i] == i) {
        i++;
    }
    return i;
}
int main() {
    int arr[] = {0, 1, 2, 3, 4, 6, 7, 8};
    int n = sizeof(arr) / sizeof(arr[0]);
    int missing = findMissing(arr, n);
    cout << "The smallest missing element is " << missing << ".";
    return 0;
}