#include <iostream>
#include <vector>

using namespace std;

class Matrix {
private:
    int rows;
    int cols;
    vector<vector<int>> data;

public:
    Matrix(int r, int c) {
        rows = r;
        cols = c;
        data.resize(rows, vector<int>(cols, 0));
    }

    void insertElement(int row, int col, int value) {
        if (row >= 0 && row < rows && col >= 0 && col < cols) {
            data[row][col] = value;
        } else {
            cout << "Invalid row or column index." << endl;
        }
    }

    int retrieveElement(int row, int col) {
        if (row >= 0 && row < rows && col >= 0 && col < cols) {
            return data[row][col];
        } else {
            cout << "Invalid row or column index." << endl;
            return -1; // return a default value
        }
    }

    void displayMatrix() {
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

    m.insertElement(0, 0, 1);
    m.insertElement(0, 1, 2);
    m.insertElement(0, 2, 3);
    m.insertElement(1, 0, 4);
    m.insertElement(1, 1, 5);
    m.insertElement(1, 2, 6);
    m.insertElement(2, 0, 7);
    m.insertElement(2, 1, 8);
    m.insertElement(2, 2, 9);

    cout << "Matrix:" << endl;
    m.displayMatrix();

    cout << "Element at (1, 1): " << m.retrieveElement(1, 1) << endl;

    return 0;
}