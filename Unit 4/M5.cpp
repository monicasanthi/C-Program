#include <iostream>
using namespace std;
class Data {
    private:
        double *ptr;
        int size;
    public:
        Data(int n) {
            size = n;
            ptr = new double[size];
        }
        ~Data() {
            delete[] ptr;
        }
        void insertData() {
            cout << "Enter " << size << " numbers:" << endl;
            for (int i = 0; i < size; i++) {
                cin >> *(ptr + i);
            }
        }
        void displayData() {
            cout << "Entered data is: ";
            for (int i = 0; i < size; i++) {
                cout << *(ptr + i) << " ";
            }
            cout << endl;
        }
};
int main() {
    int n;
    cout << "Enter the number of data elements: ";
    cin >> n;
    Data data(n);
    data.insertData();
    data.displayData();
    return 0;
}