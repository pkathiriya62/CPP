#include <iostream>
using namespace std;
int main()
{
    float a, rupees;
    cout << "units:";
    cin >> a;
    if (a <= 200)
    {
        rupees = ((a * 60) / 100) + 50;
        cout << "charge:" << rupees;
    }
    else if (a <= 300)
    {
        rupees = ((a * 80) / 100) + 50;
        cout << "charge:" << rupees;
    }
    else if (a > 300)
    {
        rupees = ((a * 80) / 100) + 50;
        cout << "charge:" << rupees;
    }
    if (rupees > 300)
    {
        cout << "\ntotal amount:" << rupees + (rupees * 15 / 100);
    }
    else
    {
        cout << "\ntotal amount=" << rupees;
    }
}