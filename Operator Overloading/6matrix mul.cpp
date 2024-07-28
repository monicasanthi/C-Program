#include<iostream>
using namespace std;
class Matrix {
    private:
        int rows;
        int cols;
        int** data;
    public:
        Matrix(int r, int c) : rows(r), cols(c) {
            data = new int*[rows];
            for (int i = 0; i < rows; i++) {
                data[i] = new int[cols];
            }
        }
        ~Matrix() {
            for (int i = 0; i < rows; i++) {
                delete[] data[i];
            }
            delete[] data;
        }

        void setInput() {
            cout << "Enter elements of the matrix:" << endl;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    cin >> data[i][j];
                }
            }
        }

        void display() {
            cout << "Matrix:" << endl;
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < cols; j++) {
                    cout << data[i][j] << " ";
                }
                cout << endl;
            }
        }

        // Overload * operator
        Matrix operator*(const Matrix& m) const {
            if (cols!= m.rows) {
                throw invalid_argument("Matrix dimensions are incompatible for multiplication");
            }

            Matrix result(rows, m.cols);
            for (int i = 0; i < rows; i++) {
                for (int j = 0; j < m.cols; j++) {
                    for (int k = 0; k < cols; k++) {
                        result.data[i][j] += data[i][k] * m.data[k][j];
                    }
                }
            }
            return result;
        }
};

int main() {
    int rows1, cols1, rows2, cols2;

    cout << "Enter number of rows for matrix 1: ";
    cin >> rows1;
    cout << "Enter number of columns for matrix 1: ";
    cin >> cols1;

    Matrix m1(rows1, cols1);
    m1.setInput();
    cout << "Matrix 1:" << endl;
    m1.display();

    cout << "Enter number of rows for matrix 2: ";
    cin >> rows2;
    cout << "Enter number of columns for matrix 2: ";
    cin >> cols2;

    Matrix m2(rows2, cols2);
    m2.setInput();
    cout << "Matrix 2:" << endl;
    m2.display();

    try {
        Matrix result = m1 * m2;
        cout << "Result of matrix multiplication:" << endl;
        result.display();
    } catch (invalid_argument& e) {
        cout << "Error: " << e.what() << endl;
    }
    return 0;
}