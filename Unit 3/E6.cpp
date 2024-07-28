#include <iostream>
using namespace std;
class Reverse {
public:
    Reverse(int n = 0) {
        num = n;
        reverseNum = calculateReverse();
        cout << "Reverse of " << n << " is: " << reverseNum << endl;
    }
private:
    int num, reverseNum;

    int calculateReverse() {
        int rev = 0;
        while (num != 0) {
            int digit = num % 10;
            rev = rev * 10 + digit;
            num /= 10;
        }
        return rev;
    }
};
int main() {
    Reverse r1;
    Reverse r2(123);
    return 0;
}