#include <iostream>
using namespace std;

class report
{
private:
    int adno, i;
    char name[20];
    float mark[5], average, sum = 0;

    void GETAVG()
    {
        for (i = 0; i < 5; i++)
        {
            sum = sum + mark[i];
        }
        average = sum / 5;
    }

public:
    void READINFO()
    {
        cout << "enter the admission number : ";
        cin >> adno;
        cout << "Enter a name : ";
        cin >> name;
        cout << "Enter a mark for 5 subject ";
        ;
        for (i = 0; i < 5; i++)
        {
            cin >> mark[i];
        }
        cout << endl;
        GETAVG();
    }

    void DISPLAYINFO()
    {
        cout << "admission number : " << adno << endl;
        cout << "name : " << name << endl;
        for (i = 0; i < 5; i++)
        {
            cout << mark[i] << endl;
        }
        cout << "average : " << average << endl;
    }
};

int main()
{
    report r;
    r.READINFO();
    r.DISPLAYINFO();
}