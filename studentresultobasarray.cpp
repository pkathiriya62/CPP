#include <iostream>
using namespace std;

class result
{
    int p, c, m, percentage, total;

public:
    void setdata()
    {
        cout << "Enter physics:";
        cin >> p;
        cout << "Enter chemistry:";
        cin >> c;
        cout << "Enter maths:";
        cin >> m;
    }
    void getdata()
    {
        if (m < 35 || c < 35 || p < 35)
        {
            cout << "you are fail" << endl;
        }
        else
        {
            total = m + c + p;
            cout << "your total mark is:" << total << endl;
            percentage = (total * 100) / 300;
            cout << "total percentage is :" << percentage << endl;
            if (percentage >= 75)
            {
                cout << "you got A grade" << endl;
            }
            else if (percentage >= 60 && percentage < 75)
            {
                cout << "you got B grade" << endl;
            }
            else if (percentage >= 45 && percentage < 60)
            {
                cout << "you got C grade" << endl;
            }
            else if (percentage >= 35 && percentage < 45)
            {
                cout << "you got D grade" << endl;
            }
        }
    }
};
int main()
{

    result a[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter the marks of student" << i + 1 << endl;
        a[i].setdata();
    }

    for (int i = 0; i < 3; i++)
    {

        a[i].getdata();
    }
}