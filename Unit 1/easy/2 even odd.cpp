#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num % 2 == 0) {
        cout << num << " is even." << std::endl;
    } else {
        cout << num << " is odd." << std::endl;
    }

    return 0;
}