#include <iostream>
using namespace std;
int main() {
    char myArray[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char *ptr = myArray;
    cout << "Values of myArray: ";
    for (int i = 0; i < 6; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    cout << "Address of myArray: " << &myArray << endl;
    cout << "Elements of myArray using *ptr: ";
    for (int i = 0; i < 6; i++) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    return 0;
}