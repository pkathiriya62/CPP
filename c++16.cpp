#include <iostream>
using namespace std;
int main()
{
    char i, j;
    for (i = 1; i <= 5; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << " " << (j + i) % 2;
        }
        cout << "\n";
    }
}