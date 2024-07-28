#include <iostream>
using namespace std;
int main() {
    int authors[4];
    cout << "Enter the authors details: ";
    for (int i = 0; i < 4; ++i) {
        cin >> authors[i];
    }
    int notWorkedAuthor, newAuthor;
    cout << "Enter the author number who didn't work: ";
    cin >> notWorkedAuthor;

    cout << "Enter the new author number to add: ";
    cin >> newAuthor;
    for (int i = 0; i < 4; ++i) {
        if (authors[i] == notWorkedAuthor) {
            authors[i] = newAuthor;
            break;
        }
    }
    cout << "Updated authors list: ";
    for (int i = 0; i < 4; ++i) {
        cout << authors[i] << " ";
    }
    cout << endl;
    return 0;
}