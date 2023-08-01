#include <iostream>
using namespace std;

class Number
{
protected:
    int n;

public:
    void getNumber()
    {
        cout << "Enter the value of n: ";
        cin >> n;
    }
};

class SquaredNumbers : public Number
{
public:
    void printSquaredNumbers()
    {
        cout << "Squares of numbers from 1 to " << n << ":" << endl;
        for (int i = 1; i <= n; i++)
        {
            cout << i << "*" << i << "=" << i * i << endl;
        }
    }
};

int main()
{
    SquaredNumbers obj;
    obj.getNumber();
    obj.printSquaredNumbers();
}
