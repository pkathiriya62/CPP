#include <iostream>
using namespace std;
int main()
{
    int a, b;

    cout << "enter value of a:";
    cin >> a;
    cout << "enter value of b:";
    cin >> b;

    if (a < b)
    {
        cout << "a is smaller.";
    }
    else if (b < a)
    {
        cout << "b is smaller.";
    }
    else if (a = b)
    {
        cout << "a and b is same.";
    }
    else
    {
        cout << "enter num not char.";
    }
}