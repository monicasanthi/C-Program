#include <iostream>
#include <string>
using namespace std;

class Customer {
protected:
    string name;
    int accountNumber;
    string accountType;
public:
    Customer(string n, int an, string at) {
        name = n;
        accountNumber = an;
        accountType = at;
    }
    void displayCustomerDetails() {
        cout << "Customer Name : " << name << endl;
        cout << "Account Number  : " << accountNumber << endl;
        cout << "Account Type    : " << accountType << endl;
    }
};

class Account {
protected:
    double balance;
public:
    Account(double bal = 0) {
        balance = bal;
    }
    void deposit(double amount) {
        balance += amount;
    }
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
    void displayBalance() {
        cout << "Balance :  " << balance << endl;
    }
    double getAccountBalance() {
        return balance;
    }
};

class BankAccount : public Customer, public Account {
public:
    BankAccount(string n, int an, string at, double bal = 0) : Customer(n, an, at), Account(bal) {}
    void displayFullDetails() {
        displayCustomerDetails();
        displayBalance();
    }
};

int main() {
    char choice;
    cout << "Enter S for saving customer and C for current a/c customer : ";
    cin >> choice;
    string name, accountType;
    int accountNumber;
    cout << "Enter Customer Name : ";
    cin >> name;
    cout << "Enter Account Number  : ";
    cin >> accountNumber;
    cout << "Enter Account Type    : ";
    cin >> accountType;
    BankAccount account(name, accountNumber, accountType, 30);

    int option;
    do {
        cout << "Choose Your Choice" << endl;
        cout << "1) Deposit" << endl;
        cout << "2) Withdraw" << endl;
        cout << "3) Display Balance" << endl;
        cout << "4) Display with full Details" << endl;
        cout << "5) Exit" << endl;
        cout << "Enter Your choice: ";
        cin >> option;
        switch (option) {
            case 1: {
                double amount;
                cout << "Enter amount to Deposit : ";
                cin >> amount;
                account.deposit(amount);
                break;
            }
            case 2: {
                double amount;
                cout << "Balance :- " << account.getAccountBalance() << endl;
                cout << "Enter amount to be withdraw : ";
                cin >> amount;
                account.withdraw(amount);
                cout << "Balance Amount After Withdraw: " << account.getAccountBalance() << endl;
                break;
            }
            case 3: {
                account.displayBalance();
                break;
            }
            case 4: {
                account.displayFullDetails();
                break;
            }
            case 5: {
                cout << "Thank You for Banking with us.." << endl;
                break;
            }
            default: {
                cout << "Invalid choice. Please choose a valid option." << endl;
            }
        }
    } while (option != 5);

    return 0;
}