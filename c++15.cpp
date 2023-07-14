#include <iostream>
using namespace std;
int main()
{
    int a, b;
    for (a = 1; a <= 5; a++)
    {
        for (b = 5; b >= a; b--)
        {
            cout << " ";
        }
        for (b = 1; b <= a; b++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
    for (a = 5; a >= 1; a--)
    {
        for (b = 5; b >= a; b--)
        {
            cout << " ";
        }
        for (b = 1; b <= a; b++)
        {
            cout << "* ";
        }
        cout << "\n";
    }
}