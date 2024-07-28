#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Media {
public:
    string title;
    int id;
    Media(string t, int i) : title(t), id(i) {}
    virtual void display() = 0;
    virtual void issue() = 0;
    virtual void deposit() = 0;
};
class Book : public Media {
public:
    string author;
    Book(string t, int i, string a) : Media(t, i), author(a) {}
    void display() {
        cout << "Book: " << title << " by " << author << endl;
    }
    void issue() {
        cout << "Book " << title << " issued." << endl;
    }
    void deposit() {
        cout << "Book " << title << " deposited." << endl;
    }
};
class Tape : public Media {
public:
    int duration;
    Tape(string t, int i, int d) : Media(t, i), duration(d) {}
    void display() {
        cout << "Tape: " << title << " with duration " << duration << " minutes." << endl;
    }
    void issue() {
        cout << "Tape " << title << " issued." << endl;
    }
    void deposit() {
        cout << "Tape " << title << " deposited." << endl;
    }
};
class DigitalLibrary {
private:
    vector<Media*> items;
public:
    void addItem(Media* item) {
        items.push_back(item);
    }
    void displayItems() {
        for (Media* item : items) {
            item->display();
        }
    }
    void issueItem(int id) {
        for (Media* item : items) {
            if (item->id == id) {
                item->issue();
                return;
            }
        }
        cout << "Item not found." << endl;
    }
    void depositItem(int id) {
        for (Media* item : items) {
            if (item->id == id) {
                item->deposit();
                return;
            }
        }
        cout << "Item not found." << endl;
    }
};
int main() {
    DigitalLibrary library;
    Book book1("Harry Potter", 1, "J.K. Rowling");
    Book book2("To Kill a Mockingbird", 2, "Harper Lee");
    Tape tape1("The Beatles", 3, 60);
    Tape tape2("The Rolling Stones", 4, 90);
    library.addItem(&book1);
    library.addItem(&book2);
    library.addItem(&tape1);
    library.addItem(&tape2);
    library.displayItems();
    library.issueItem(1);
    library.depositItem(2);
    library.issueItem(3);
    library.depositItem(4);
    return 0;
}