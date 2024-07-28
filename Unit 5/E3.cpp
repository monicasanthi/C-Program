#include <iostream>
using namespace std;
class Number {
public:
    virtual void print(int M, int N, int K) {
        for (int i = M; i <= N; i++) {
            cout << i << " ";
        }
        cout << endl;
    }
};
class Skipper : public Number {
public:
    void print(int M, int N, int K) override {
        for (int i = M; i <= N; i += K + 1) {
            cout << i << " ";
        }
        cout << endl;
    }
};
int main() {
    int M = 50, N = 100, K = 7;
    Skipper skipper;
    skipper.print(M, N, K);
    return 0;
}