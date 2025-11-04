#include <iostream>
#include <string> // Need to include string for string type
using namespace std;

class BankAccount {
private:
    int accountNumber;
    string holderName;
    double balance;

public:
    // Constructor
    BankAccount(int accNo, string name, double bal) {
        accountNumber = accNo;
        holderName = name;
        balance = bal;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient Balance!" << endl;
        } else {
            balance -= amount; // Fixed typo: original had 'balance - amount;'
            cout << "Withdrawn: " << amount << endl;
        }
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Holder Name: " << holderName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc1(101, "John Doe", 5000);
    
    acc1.display();
    acc1.deposit(2000);
    acc1.withdraw(3000);
    acc1.display();
    
    return 0;
}
/*
Output:
Account Number: 101
Holder Name: John Doe
Balance: 5000
Deposited: 2000
Withdrawn: 3000
Account Number: 101
Holder Name: John Doe
Balance: 4000
*/
