#include <iostream>
using namespace std;

class Number
{
protected:
    int num;

public:
    void getNumber()
    {
        cout << "Enter a number: ";
        cin >> num;
    }
};

class FactorialCalculator : public Number
{
public:
    int factorial(int n)
    {
        if (n == 0 || n == 1)
            return 1;
        else
            return n * factorial(n - 1);
    }

    void printFactorial()
    {
        cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    }
};

int main()
{
    FactorialCalculator f;
    f.getNumber();
    f.printFactorial();
}
