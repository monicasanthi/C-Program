#include <iostream>
#include <iomanip>
using namespace std;

class matrix {
    int maxrow, maxcol;
    int* ptr;
public:
    matrix(int r, int c) {
        maxrow = r;
        maxcol = c;
        ptr = new int[r * c];
    }
    void getmat() {
        int i, j, mat_off;
        cout << endl << "Enter elements of the matrix:" << endl;
        for (i = 0; i < maxrow; i++) {
            for (j = 0; j < maxcol; j++) {
                mat_off = i * maxcol + j;
                cin >> ptr[mat_off];
            }
        }
    }
    void printmat() {
        int i, j, mat_off;
        for (i = 0; i < maxrow; i++) {
            cout << endl;
            for (j = 0; j < maxcol; j++) {
                mat_off = i * maxcol + j;
                cout << setw(3) << ptr[mat_off];
            }
        }
    }
    int delmat() {
        if (maxrow != maxcol) {
            cout << "Matrix must be square to compute determinant." << endl;
            return 0;
        }
        if (maxrow == 1) {
            return ptr[0];
        }
        if (maxrow == 2) {
            return (ptr[0] * ptr[3] - ptr[1] * ptr[2]);
        }
        int det = 0;
        for (int k = 0; k < maxcol; k++) {
            matrix submatrix(maxrow - 1, maxcol - 1);
            for (int i = 1; i < maxrow; i++) {
                int subi = 0;
                for (int j = 0; j < maxcol; j++) {
                    if (j == k) continue;
                    submatrix.ptr[(i - 1) * (maxcol - 1) + subi] = ptr[i * maxcol + j];
                    subi++;
                }
            }
            det += (k % 2 == 0 ? 1 : -1) * ptr[k] * submatrix.delmat();
        }
        return det;
    }
    matrix operator+(matrix b) {
        matrix c(maxrow, maxcol);
        int i, j, mat_off;
        for (i = 0; i < maxrow; i++) {
            for (j = 0; j < maxcol; j++) {
                mat_off = i * maxcol + j;
                c.ptr[mat_off] = ptr[mat_off] + b.ptr[mat_off];
            }
        }
        return c;
    }
    matrix operator*(matrix b) {
        if (maxcol != b.maxrow) {
            cout << "Matrix multiplication not possible." << endl;
            return matrix(0, 0);
        }
        matrix c(maxrow, b.maxcol);
        int i, j, k, mat_off1, mat_off2, mat_off3;
        for (i = 0; i < c.maxrow; i++) {
            for (j = 0; j < c.maxcol; j++) {
                mat_off3 = i * c.maxcol + j;
                c.ptr[mat_off3] = 0;
                for (k = 0; k < maxcol; k++) {
                    mat_off1 = i * maxcol + k;
                    mat_off2 = k * b.maxcol + j;
                    c.ptr[mat_off3] += ptr[mat_off1] * b.ptr[mat_off2];
                }
            }
        }
        return c;
    }
    int operator==(matrix b) {
        if (maxrow != b.maxrow || maxcol != b.maxcol) return 0;
        int i, j, mat_off;
        for (i = 0; i < maxrow; i++) {
            for (j = 0; j < maxcol; j++) {
                mat_off = i * maxcol + j;
                if (ptr[mat_off] != b.ptr[mat_off]) return 0;
            }
        }
        return 1;
    }
};

int main() {
    int rowa, cola, rowb, colb;
    cout << "Enter dimensions of matrix A: ";
    cin >> rowa >> cola;
    matrix a(rowa, cola);
    a.getmat();
    cout << "Enter dimensions of matrix B: ";
    cin >> rowb >> colb;
    matrix b(rowb, colb);
    b.getmat();
    if (rowa == rowb && cola == colb) {
        matrix c(rowa, cola);
        c = a + b;
        cout << "The sum of two matrices = ";
        c.printmat();
    } else {
        cout << "Matrices A and B are not the same dimensions, cannot add." << endl;
    }
    if (cola == rowb) {
        matrix d(rowa, colb);
        d = a * b;
        cout << endl << "The product of two matrices = ";
        d.printmat();
    } else {
        cout << "Matrices A and B cannot be multiplied." << endl;
    }
    if (rowa == cola) {
        cout << endl << "Determinant of matrix A = " << a.delmat();
    } else {
        cout << endl << "Matrix A is not square, cannot compute determinant.";
    }
    if (a == b) {
        cout << endl << "A and B are equal";
    } else {
        cout << endl << "A and B are not equal";
    }
    return 0;
}