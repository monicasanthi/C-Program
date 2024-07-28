#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    int x[5];
    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++) {
        cin >> x[i];
    }

    int index;
    cout << "Enter an index to access the array: ";
    cin >> index;

    try {
        if (index < 0 || index >= 5) {
            throw out_of_range("The element is an array index out of boundary.");
        }
        cout << "The element at index " << index << " is " << x[index] << endl;
    } catch (const out_of_range& e) {
        cout << e.what() << endl;
    }

    return 0;
}