#include <iostream>
using namespace std;
class DivisibleBy9 {
private:
    int count;
    int sum;
public:
    DivisibleBy9() {
        count = 0;
        sum = 0;
        for (int i = 100; i <= 200; i++) {
            if (i % 9 == 0) {
                count++;
                sum += i;
            }
        }
        cout << "Number of integers between 100 and 200 divisible by 9: " << count << endl;
        cout << "Sum of integers between 100 and 200 divisible by 9: " << sum << endl;
    }
    ~DivisibleBy9() {
        cout << "Destructor called" << endl;
    }
};
int main() {
    DivisibleBy9 obj;
    return 0;
}