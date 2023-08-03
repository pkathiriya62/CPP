#include <iostream>
using namespace std;

class Multiplier
{
protected:
    int num;

public:
    Multiplier(int n) : num(n) {}

    int multiply(int x)
    {
        return num * x;
    }
};

class TableDisplay : public Multiplier
{
protected:
    int limit;

public:
    TableDisplay(int n, int l) : Multiplier(n), limit(l) {}

    void displayTable()
    {
        cout << "Multiplication Table of " << num << " up to " << limit << ":\n";
        for (int i = 1; i <= limit; ++i)
        {
            cout << num << " x " << i << " = " << multiply(i) << endl;
        }
    }
};

int main()
{
    int number, limit;

    cout << "Enter the number for the multiplication table: ";
    cin >> number;

    cout << "Enter the limit for the table: ";
    cin >> limit;

    TableDisplay table(number, limit);
    table.displayTable();
}
