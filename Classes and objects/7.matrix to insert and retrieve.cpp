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