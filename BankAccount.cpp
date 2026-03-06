#include <iostream>
#include <string>
using namespace std;

// PART A: Class Design
class BankAccount {
private:
    int accountNumber;        // private data member
    string accountHolder;     // private data member
    double balance;           // private data member

public:
    // PART B: Constructor
    BankAccount(int accNum, string accHolder, double initialBalance) {
        accountNumber = accNum;
        accountHolder = accHolder;
        balance = initialBalance;
    }

    // PART C: Member Functions

    // 1. Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit: " << amount << endl;
            cout << "New Balance: " << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // 2. Withdraw money
    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds. Withdrawal denied." << endl;
        } else if (amount <= 0) {
            cout << "Invalid withdrawal amount." << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal: " << amount << endl;
            cout << "New Balance: " << balance << endl;
        }
    }

    // 3. Display account details
    void displayAccount() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

// PART D: Main Function
int main() {
    // Create 2 BankAccount objects
    BankAccount account1(101, "John", 5000);
    BankAccount account2(102, "Jane", 3000);

    // --- Account 1 ---
    account1.displayAccount();
    account1.deposit(1000);
    account1.withdraw(2000);

    cout << endl;

    // --- Account 2 ---
    account2.displayAccount();
    account2.deposit(500);
    account2.withdraw(5000); // This should trigger insufficient funds

    return 0;
}
