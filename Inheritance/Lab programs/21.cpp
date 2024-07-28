#include <iostream>
#include <string>
#include <sstream>
using namespace std;
int main() {
    string str = "123";
    int num;
    num =stoi(str);
    cout << "String to int: " << str << " -> " << num << endl;
    istringstream iss(str);
    iss >> num;
    cout << "String to int: " << str << " -> " << num << endl;
    num = atoi(str.c_str());
   cout << "String to int: " << str << " -> " << num << endl;
    num = 456;
    string str2;
    str2 = to_string(num);
    cout << "Int to string: " << num << " -> " << str2 << endl;
    ostringstream oss;
    oss << num;
    str2 = oss.str();
    cout << "Int to string: " << num << " -> " << str2 << endl;
    char buffer[10];
    itoa(num, buffer, 10);
    str2 = buffer;
    cout << "Int to string: " << num << " -> " << str2 << endl;
    return 0;
}