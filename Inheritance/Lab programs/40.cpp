#include <iostream>
#include <cstring>

using namespace std;

// User-defined String class with overloaded > operator
class String {
public:
    String(const char* str) : str_(new char[strlen(str) + 1]) {
        strcpy(str_, str);
    }
    ~String() {
        delete[] str_;
    }
    bool operator>(const String& other) const {
        return strcmp(str_, other.str_) > 0;
    }
    friend ostream& operator<<(ostream& os, const String& str) {
        os << str.str_;
        return os;
    }
private:
    char* str_;
};

// User-defined Date class with overloaded > operator
class Date {
public:
    Date(int year, int month, int day) : year_(year), month_(month), day_(day) {}
    bool operator>(const Date& other) const {
        if (year_ > other.year_) return true;
        if (year_ == other.year_ && month_ > other.month_) return true;
        if (year_ == other.year_ && month_ == other.month_ && day_ > other.day_) return true;
        return false;
    }
    friend ostream& operator<<(ostream& os, const Date& date) {
        os << date.year_ << "-" << date.month_ << "-" << date.day_;
        return os;
    }
private:
    int year_;
    int month_;
    int day_;
};

// Function template to sort an array of any type
template <typename T>
void sortArray(T arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                T temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    // Sorting an array of int
    int intArr[] = {5, 2, 8, 3, 1, 6, 4};
    int intSize = sizeof(intArr) / sizeof(intArr[0]);
    sortArray(intArr, intSize);
    cout << "Sorted int array: ";
    for (int i = 0; i < intSize; i++) {
        cout << intArr[i] << " ";
    }
    cout << endl;

    // Sorting an array of float
    float floatArr[] = {3.5, 1.2, 4.8, 2.1, 5.6};
    int floatSize = sizeof(floatArr) / sizeof(floatArr[0]);
    sortArray(floatArr, floatSize);
    cout << "Sorted float array: ";
    for (int i = 0; i < floatSize; i++) {
        cout << floatArr[i] << " ";
    }
    cout << endl;

    // Sorting an array of char
    char charArr[] = {'e', 'a', 'c', 'b', 'd'};
    int charSize = sizeof(charArr) / sizeof(charArr[0]);
    sortArray(charArr, charSize);
    cout << "Sorted char array: ";
    for (int i = 0; i < charSize; i++) {
        cout << charArr[i] << " ";
    }
    cout << endl;

    // Sorting an array of String
    String stringArr[] = {String("hello"), String("world"), String("abc"), String("def")};
    int stringSize = sizeof(stringArr) / sizeof(stringArr[0]);
    sortArray(stringArr, stringSize);
    cout << "Sorted String array: ";
    for (int i = 0; i < stringSize; i++) {
        cout << stringArr[i] << " ";
    }
    cout << endl;

    // Sorting an array of Date
    Date dateArr[] = {Date(2022, 12, 25), Date(2021, 1, 1), Date(2020, 6, 15), Date(2023, 3, 20)};
    int dateSize = sizeof(dateArr) / sizeof(dateArr[0]);
    sortArray(dateArr, dateSize);
    cout << "Sorted Date array: ";
    for (int i = 0; i < dateSize; i++) {
        cout << dateArr[i] << " ";
    }
    cout << endl;

    return 0;
}