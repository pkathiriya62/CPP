#include <iostream>
using namespace std;

class NumberManipulator
{
protected:
    int number;

public:
    NumberManipulator(int num) : number(num) {}

    int manipulate()
    {
        return number;
    }
};

class NumberReverser : public NumberManipulator
{
public:
    NumberReverser(int num) : NumberManipulator(num) {}

    int manipulate()
    {
        int reversed = 0;
        int n = number;

        while (n != 0)
        {
            int digit = n % 10;
            reversed = reversed * 10 + digit;
            n /= 10;
        }

        return reversed;
    }
};

int main()
{
    int num;
    cout << "Enter a number to reverse: ";
    cin >> num;

    NumberReverser reverser(num);
    int reversedNum = reverser.manipulate();

    cout << "Reversed Number: " << reversedNum << endl;
}
