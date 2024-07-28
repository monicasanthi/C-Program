#include <iostream>
#include <cstring>
using namespace std;
string concat(const string& str1, const string& str2) {
    return str1 + str2;
}
char* concat(const char* arr1, const char* arr2) {
    char* result = new char[strlen(arr1) + strlen(arr2) + 1];
    strcpy(result, arr1);
    strcat(result, arr2);
    return result;
}
int main() {
    string str1 = "Hello, ";
    string str2 = "World!";
    char arr1[] = "Good ";
    char arr2[] = "Morning";

    cout << "Concatenated string: " << concat(str1, str2) << endl;
    cout << "Concatenated character array: " << concat(arr1, arr2) << endl;
    return 0;
}