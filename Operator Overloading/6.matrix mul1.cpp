#include <iostream>
#include <vector>
#include <stdexcept>
class Matrix {
private:
    std::vector<std::vector<int>> mat;
    int rows, cols;

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        mat.resize(rows, std::vector<int>(cols, 0));
    }
    int& operator()(int r, int c) {
        if (r < 0 || r >= rows || c < 0 || c >= cols) {
            throw std::out_of_range("Index out of range");
        }
        return mat[r][c];
    }
    const int& operator()(int r, int c) const {
        if (r < 0 || r >= rows || c < 0 || c >= cols) {
            throw std::out_of_range("Index out of range");
        }
        return mat[r][c];
    }
    Matrix operator*(const Matrix& other) const {
        if (cols != other.rows) {
            throw std::invalid_argument("Matrices cannot be multiplied");
        }
        Matrix result(rows, other.cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < other.cols; ++j) {
                for (int k = 0; k < cols; ++k) {
                    result(i, j) += mat[i][k] * other(k, j);
                }
            }
        }
        return result;
    }
    void display() const {
        for (const auto& row : mat) {
            for (int val : row) {
                std::cout << val << " ";
            }
            std::cout << std::endl;
        }
    }
};
int main() {
    Matrix mat1(2, 3);
    Matrix mat2(3, 2);
    mat1(0, 0) = 1; mat1(0, 1) = 2; mat1(0, 2) = 3;
    mat1(1, 0) = 4; mat1(1, 1) = 5; mat1(1, 2) = 6;
    mat2(0, 0) = 7; mat2(0, 1) = 8;
    mat2(1, 0) = 9; mat2(1, 1) = 10;
    mat2(2, 0) = 11; mat2(2, 1) = 12;
    std::cout << "Matrix 1:" << std::endl;
    mat1.display();
    std::cout << "Matrix 2:" << std::endl;
    mat2.display();
    try {
        Matrix result = mat1 * mat2;
        std::cout << "Result of Matrix 1 * Matrix 2:" << std::endl;
        result.display();
    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}