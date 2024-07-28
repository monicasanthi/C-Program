#include <iostream>
using namespace std;
int add(int a, int b) {
    return a + b;
}
int main() {
    int (*ptr)(int, int);
    ptr = &add;
    int result = ptr(5, 3);
    cout << "Result: " << result << endl;
    return 0;
}