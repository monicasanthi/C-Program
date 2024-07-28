#include <iostream>
#include <string>
#include <vector>

using namespace std;

class ShoppingList {
private:
    struct Item {
        int code;
        string name;
        double price;
    };

    vector<Item> items;

public:
    void addItem(int code, string name, double price) {
        Item item = {code, name, price};
        items.push_back(item);
    }

    void deleteItem(int code) {
        for (auto it = items.begin(); it != items.end(); ++it) {
            if (it->code == code) {
                items.erase(it);
                cout << "Item deleted successfully!" << endl;
                return;
            }
        }
        cout << "Item not found!" << endl;
    }

    void printOrder() {
        double total = 0.0;
        cout << "Shopping List:" << endl;
        for (const auto& item : items) {
            cout << "Code: " << item.code << ", Name: " << item.name << ", Price: " << item.price << endl;
            total += item.price;
        }
        cout << "Total Value of Order: " << total << endl;
    }
};

int main() {
    ShoppingList list;

    list.addItem(101, "Shirt", 500.0);
    list.addItem(102, "Pants", 800.0);
    list.addItem(103, "Shoes", 1200.0);

    list.printOrder();

    list.deleteItem(102);

    list.printOrder();

    return 0;
}