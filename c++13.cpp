#include <iostream>
using namespace std;
int main()
{
    int a, b;
    for (a = 1; a <= 5; a++)
    {
        for (b = 1; b <= a; a++)
        {
            cout << "*";
        }
        cout << "\n";
    }
}