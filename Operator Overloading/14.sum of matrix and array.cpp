#include <iostream>
using namespace std;
void sum(int arr1[], int arr2[], int result[], int size) {
    for (int i = 0; i < size; i++) {
        result[i] = arr1[i] + arr2[i];
    }
}
void sum(int mat1[][3], int mat2[][3], int result[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}
int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int resultArr[5];

    sum(arr1, arr2, resultArr, 5);
    cout << "Sum of two arrays: ";
    for (int i = 0; i < 5; i++) {
        cout << resultArr[i] << " ";
    }
    cout << endl;

    int mat1[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[][3] = {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}};
    int resultMat[3][3];

    sum(mat1, mat2, resultMat, 3, 3);
    cout << "Sum of two matrices: " << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << resultMat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}