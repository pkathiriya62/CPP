#include <iostream>
using namespace std;
class restorant
{
public:
    int quty, mo;
    int pavbhaji, dhosa, manchuriyam;
    char name[30];
    int n;
    float cgst, igst;

    void show()
    {
        cout << "wel come to customer";
        cout << "tulsi";
    }
    void menu()
    {
        cout << "pavbhaji-----------------------90";
        cout << "dhosa---------------------------99";
        cout << "manchuriyam----------------------80";
    }
    void getdata()
    {
        cout << "enter the name:";
        cin >> name;

        cout << "enter the mo:";
        cin >> mo;

        cout << "enter the n:";
        cin >> n;
    }
    void item()
    {
        pavbhaji = 90;
        dhosa = 99;
        manchuriyam = 80;
    }
    void cal()
    {
        if (pavbhaji = 90)
        {
            cout << "pavbhaji" << pavbhaji * n;
        }
        else if (dhosa = 99)
        {
            cout << "dhosa" << dhosa * n;
        }
        else if (manchuriyam = 80)
        {
            cout << "manchuriyam" << manchuriyam * n;
        }
    }
    void cgst()
    {
        if (pavbhaji)
        {
            cout << "cgst" << cgst << pavbhaji / 2.5 * 100 << endl;
            cout << "igst" << igst << pavbhaji / 2.5 * 100 << endl;
            cout << "total" << pavbhaji + cgst + igst << endl;
        }
        else if (dhosa)
        {
            cout << "cgst" << cgst << dhosa / 2.5 * 100 << endl;
            cout << "igst" << igst << dhosa / 2.5 * 100 << endl;
            cout << "total" << dhosa + cgst + igst << endl;
        }
        else if (manchuriyam)
        {
            cout << "cgst" << cgst << manchuriyam / 2.5 * 100 << endl;
            cout << "igst" << igst << manchuriyam / 2.5 * 100 << endl;
            cout << "total" << manchuriyam + cgst + igst << endl;
        }
    }
};
int main()
{
    restorant r;
    r.show();
}