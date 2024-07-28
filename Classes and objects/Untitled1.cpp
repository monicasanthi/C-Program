#include <iostream>
using namespace std;
class AverageCalculator {
private:
    int num1, num2, num3;
    double average;
public:
    void readNumbers() {
        cout << "Enter three integers: ";
        cin >> num1 >> num2 >> num3;
    }
    void calculateAverage() {
        average = (num1 + num2 + num3) / 3.0;
    }
    void displayAverage() {
        cout << "The average of the three numbers is: " << average << endl;
    }
};
int main() {
    AverageCalculator calculator;
    calculator.readNumbers();
    calculator.calculateAverage();
    calculator.displayAverage();
    return 0;
}

//2
#include <iostream>
using namespace std;
void checkPrime(int num) {
    if (num <= 1) {
        cout << num << " is not a prime number." << endl;
        return;
    }
    int i;
    for (i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            cout << num << " is not a prime number." << endl;
            return;
        }
    }
    cout << num << " is a prime number." << endl;
}
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    checkPrime(num);
    return 0;
}

//3
#include <iostream>
using namespace std;
class SecondLargest {
private:
    int arr[100], size;
public:
    void inputArray() {
        cout << "Enter the size of the array: ";
        cin >> size;
        cout << "Enter the elements of the array: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }
    }
    void findSecondLargest() {
        int max = arr[0];
        int secondMax = arr[0];
        for (int i = 1; i < size; i++) {
            if (arr[i] > max) {
                secondMax = max;
                max = arr[i];
            } else if (arr[i] > secondMax && arr[i]!= max) {
                secondMax = arr[i];
            }
        }
        cout << "The second largest element is: " << secondMax << endl;
    }
};
int main() {
    SecondLargest sl;
    sl.inputArray();
    sl.findSecondLargest();
    return 0;
}

//4
#include <iostream>
using namespace std;
class GreaterNumber {
private:
    int num1, num2;
public:
    void inputNumbers() {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
    }
    void findGreaterNumber() {
        int greater = (num1 > num2)? num1 : num2;
        cout << "The greater number is: " << greater << endl;
    }
};
int main() {
    GreaterNumber gn;
    gn.inputNumbers();
    gn.findGreaterNumber();
    return 0;
}

//5
#include <iostream>
using namespace std;
class GCD {
private:
    int num1;
    int num2;
    int gcd;
public:
    void inputNumbers() {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
    }
    void computeGCD() {
        int temp1 = num1;
        int temp2 = num2;
        do {
            int remainder = temp1 % temp2;
            temp1 = temp2;
            temp2 = remainder;
        } while (temp2!= 0);
        gcd = temp1;
    }
    void displayGCD() {
        cout << "The greatest common divisor of " << num1 << " and " << num2 << " is: " << gcd << endl;
    }
};
int main() {
    GCD gcd;
    gcd.inputNumbers();
    gcd.computeGCD();
    gcd.displayGCD();
    return 0;
}

//6
#include <iostream>
#include <vector>
using namespace std;
class Matrix {
private:
    int rows, cols;
    vector<vector<int>> data;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        data.resize(rows, vector<int>(cols));
    }

    void insert(int r, int c, int value) {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            data[r][c] = value;
        } else {
            cout << "Invalid row or column index" << endl;
        }
    }

    int retrieve(int r, int c) {
        if (r >= 0 && r < rows && c >= 0 && c < cols) {
            return data[r][c];
        } else {
            cout << "Invalid row or column index" << endl;
            return -1;
        }
    }

    void display() {
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                cout << data[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Matrix m(3, 3);

    m.insert(0, 0, 1);
    m.insert(0, 1, 2);
    m.insert(0, 2, 3);
    m.insert(1, 0, 4);
    m.insert(1, 1, 5);
    m.insert(1, 2, 6);
    m.insert(2, 0, 7);
    m.insert(2, 1, 8);
    m.insert(2, 2, 9);

    cout << "Matrix: " << endl;
    m.display();

    cout << "Element at row 1, col 1: " << m.retrieve(1, 1) << endl;

    return 0;
}

//7
#include <iostream>
using namespace std;
class Complex {
private:
    double real;
    double imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    Complex operator+(const Complex& c) {
        return Complex(real + c.real, imag + c.imag);
    }
    void display() {
        cout << real << " + " << imag << "i" << endl;
    }
};
int main() {
    Complex c1(3, 4); // 3 + 4i
    Complex c2(2, 5); // 2 + 5i

    cout << "Complex number 1: ";
    c1.display();

    cout << "Complex number 2: ";
    c2.display();

    Complex c3 = c1 + c2; // Add two complex numbers using the + operator

    cout << "Sum: ";
    c3.display();
    return 0;
}

//8
#include <iostream>
using namespace std;
class Base1 {
protected:
    int a;
public:
    void setA(int x) {
        a = x;
    }
    void displayA() {
        cout << "Value of a: " << a << endl;
    }
};

class Base2 {
protected:
    int b;
public:
    void setB(int x) {
        b = x;
    }
    void displayB() {
        cout << "Value of b: " << b << endl;
    }
};

class Base3 {
protected:
    int c;
public:
    void setC(int x) {
        c = x;
    }
    void displayC() {
        cout << "Value of c: " << c << endl;
    }
};
class Derived : public Base1, public Base2, public Base3 {
public:
    void displayAll() {
        displayA();
        displayB();
        displayC();
    }
};
int main() {
    Derived obj;
    obj.setA(100);
    obj.setB(200);
    obj.setC(300);
    obj.displayAll();
    return 0;
}