#include <iostream>
using namespace std;

int reverseNumber(int num)
{
    int reversedNum = 0;

    while (num != 0)
    {
        int remainder = num % 10;
        reversedNum = reversedNum * 10 + remainder;
        num /= 10;
    }

    return reversedNum;
}

int main()
{
    int X;

    cout << "enter num:";
    cin >> X;
    int reversed = reverseNumber(X);

    cout << "Reversed number:" << reversed;

    return 0;
}
