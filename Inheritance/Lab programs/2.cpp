#include <iostream>
#include <vector>
#include <string>
using namespace std;
class Item {
public:
    string code;
    double price;
    Item(string c, double p) : code(c), price(p) {}
};
class ShoppingList {
private:
    vector<Item> list;
public:
    void addItem(Item item) {
        list.push_back(item);
    }
    void deleteItem(string code) {
        for (int i = 0; i < list.size(); i++) {
            if (list[i].code == code) {
                list.erase(list.begin() + i);
                return;
            }
        }
    }
    double getTotalValue() {
        double total = 0;
        for (int i = 0; i < list.size(); i++) {
            total += list[i].price;
        }
        return total;
    }
    void printList() {
        for (int i = 0; i < list.size(); i++) {
            cout << "Code: " << list[i].code << ", Price: " << list[i].price << endl;
        }
    }
};
int main() {
    ShoppingList list;
    list.addItem(Item("A1", 10.0));
    list.addItem(Item("A2", 20.0));
    list.addItem(Item("A3", 30.0));
    list.printList();
    cout << "Total Value: " << list.getTotalValue() << endl;
    list.deleteItem("A2");
    list.printList();
    cout << "Total Value: " << list.getTotalValue() << endl;
    return 0;
}