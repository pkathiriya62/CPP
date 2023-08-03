#include <iostream>

using namespace std;

class BankAccount
{
private:
    char accountHolder[50];
    int accountNumber;
    double balance;

public:
    BankAccount(const char *holder, int number, double initialBalance)
    {
        copyString(accountHolder, holder, sizeof(accountHolder));
        accountNumber = number;
        balance = initialBalance;
    }

    void deposit(double amount)
    {
        balance += amount;
        cout << "Deposited " << amount << " successfully. New balance: " << balance << endl;
    }

    void withdraw(double amount)
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Withdrawn " << amount << " successfully. New balance: " << balance << endl;
        }
        else
        {
            cout << "Insufficient balance." << endl;
        }
    }

    double getBalance() const
    {
        return balance;
    }

    int getAccountNumber() const
    {
        return accountNumber;
    }

    const char *getAccountHolder() const
    {
        return accountHolder;
    }

private:
    void copyString(char *dest, const char *src, size_t destSize)
    {
        size_t i = 0;
        while (i < destSize - 1 && src[i] != '\0')
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
};

int main()
{
    BankAccount myAccount("prince", 12345, 600000.0);

    cout << "Welcome, " << myAccount.getAccountHolder() << "!" << endl;
    cout << "Account Number: " << myAccount.getAccountNumber() << endl;
    cout << "Initial Balance: " << myAccount.getBalance() << endl;

    int choice;
    double amount;

    do
    {
        cout << "\nChoose an option:\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Balance Inquiry\n";
        cout << "4. Exit\n";

        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the deposit amount: ";
            cin >> amount;
            myAccount.deposit(amount);
            break;

        case 2:
            cout << "Enter the withdrawal amount: ";
            cin >> amount;
            myAccount.withdraw(amount);
            break;

        case 3:
            cout << "Current balance: " << myAccount.getBalance() << endl;
            break;

        case 4:
            cout << "Thank you for using the banking system. Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
        }

    } while (choice != 4);
}
