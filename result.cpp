#include <iostream>
using namespace std;

class marksheet
{
    int admno;
    int p, c, m, total;
    char sname[20];
    float pr;

public:
    marksheet()
    {
        cout << "enter the admno:" << endl;
        cin >> admno;
        cout << "enter the sname:" << endl;
        cin >> sname;
        cout << "Enter the physics marks:";
        cin >> p;
        cout << "Enter the maths marks:";
        cin >> m;
        cout << "Enter the chemistry marks:";
        cin >> c;
        total = p + c + m;
        pr = (total * 100) / 300;
    }
    void display()
    {
        cout << "admno:" << admno << endl;
        cout << "sname:" << sname << endl;
        cout << "physic:" << p << endl;
        cout << "chemistry:" << c << endl;
        cout << "maths:" << m << endl;
        cout << "Total:" << total << endl;
        cout << "percentage:" << pr << endl;
    }
};
int main()
{
    marksheet m;
    m.display();
}