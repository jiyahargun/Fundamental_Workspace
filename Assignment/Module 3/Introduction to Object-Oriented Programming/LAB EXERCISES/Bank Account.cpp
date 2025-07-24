#include <iostream>
using namespace std;

class BankAccount 
{
private:
    double balance;

public:
    BankAccount(double initialBalance)
    {
        if (initialBalance >= 0)
            balance = initialBalance;
        else
            balance = 0;
    }

    void deposit(double amount) 
    {
        if (amount > 0)
            balance += amount;
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
            balance -= amount;
        else
            cout << "Insufficient balance or invalid amount." << endl;
    }

    double getBalance() 
    {
        return balance;
    }
};

int main() 
{
    BankAccount myAccount(1000);
    myAccount.deposit(500);
    myAccount.withdraw(200);
    cout << "Current Balance: " << myAccount.getBalance() << endl;
    return 0;
}
