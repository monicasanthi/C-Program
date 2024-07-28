#include <iostream>
#include <string>
using namespace std;
class BankAccount {
private:
    string accountHolderName;
    int accountNumber;
    double balance;

public:
    BankAccount(string name, int number, double initialBalance) {
        accountHolderName = name;
        accountNumber = number;
        balance = initialBalance;
        cout << "Account created for " << accountHolderName << " with account number " << accountNumber << " and initial balance " << balance << endl;
    }
    ~BankAccount() {
        cout << "Account for " << accountHolderName << " with account number " << accountNumber << " is being closed." << endl;
    }
    void deposit(double amount) {
        balance += amount;
        cout << "Deposited " << amount << " into account " << accountNumber << ". New balance is " << balance << endl;
    }
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            cout << "Withdrew " << amount << " from account " << accountNumber << ". New balance is " << balance << endl;
        } else {
            cout << "Insufficient balance in account " << accountNumber << endl;
        }
    }
    void displayAccountInfo() {
        cout << "Account Holder Name: " << accountHolderName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};
int main() {
    BankAccount account1("John Doe", 123456, 1000.0);
    account1.displayAccountInfo();
    account1.deposit(500.0);
    account1.withdraw(200.0);
    account1.displayAccountInfo();
    return 0;
}