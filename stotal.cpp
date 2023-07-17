#include <iostream>
using namespace std;
class student
{
private:
    int admno;
    char sname[20];
    float eng, maths, sci;
    float total;

public:
    float takedata()
    {
        cout << "enter the admno:" << endl;
        cin >> admno;
        cout << "enter the sname:" << endl;
        cin >> sname;
        cout << "enter marks of eng:" << endl;
        cin >> eng;
        cout << "enter marks of maths:" << endl;
        cin >> maths;
        cout << "enter marks of sci:" << endl;
        cin >> sci;
    }
    float showdata()
    {
        cout << "admno:" << admno << endl;
        cout << "sname:" << sname << endl;
        cout << "your total is:" << total;
    }
    float ctotal()
    {
        total = eng + maths + sci;
    }
};

int main()
{
    student a;
    a.takedata();
    float total = a.ctotal();
    a.showdata();
}