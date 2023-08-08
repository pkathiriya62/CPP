#include <iostream>
using namespace std;

class bill
{

public:
    string name;
    int number;

    int getinfo()
    {
        cout << "Enter Customer name :" << endl;
        cin >> name;
        cout << "Enter customer Mobile Number :" << endl;
        cin >> number;
    }
};

int calc(int x)
{
    float discount;
    float sgst, cgst;
    float netbill;

    discount = (x * 10) / 100;
    sgst = (x * 2.5) / 100;
    cgst = (x * 2.5) / 100;
    netbill = x - discount + sgst + cgst;

    cout << "<<<<<<<<<<pkathiriya62>>>>>>>>>>" << endl;
    cout << "    Fast Food & Cold drinks  " << endl;

    cout << " Discount......  " << discount << endl;
    cout << " SGST............" << sgst << endl;
    cout << " CGST............" << cgst << endl;
    cout << " Net amount......" << netbill << endl;
}

int main()
{
    bill b;
    int ch;
    int quantity;
    int price;
    int amount;
    int total = 0;

    b.getinfo();

    do
    {

        cout << "<<<<<<<<<<pkathiriya62>>>>>>>>>>" << endl;
        cout << "    Fast Food   & Cold drinks    " << endl;
        cout << "1.Pani puri..........20 Rs                  6.Ghughra............20 Rs " << endl;
        cout << "2.Vada pav...........30 Rs                  7.Fafdi Gathiya......30 Rs " << endl;
        cout << "3.Kachchi Dabeli.....30 Rs                  8.Chat papdi.........30 Rs " << endl;
        cout << "4.Khavsa..............40 Rs                 9.Momos..............50 Rs" << endl;
        cout << "5.Samosa..............30 Rs                 10.cold drinks.......10 Rs" << endl;
        cout << "11.Water plaese...                            " << endl;

        cout << "Enter your order " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter quantity " << endl;
            cin >> quantity;
            amount = 20 * quantity;
            total += amount;
            break;

        case 2:
            cout << "Enter quantity " << endl;
            cin >> quantity;
            amount = total + 30 * quantity;
            total += amount;
            break;

        case 3:
            cout << "Enter quantity " << endl;
            cin >> quantity;
            amount = total + 30 * quantity;
            total += amount;
            break;

        case 4:
            cout << "Enter quantity " << endl;
            cin >> quantity;

            amount = total + 40 * quantity;
            total += amount;
            break;

        case 5:
            cout << "Enter quantity " << endl;
            cin >> quantity;
            amount = total + 30 * quantity;
            total += amount;
            break;

        case 6:
            cout << "Enter quantity " << endl;
            cin >> quantity;
            amount = total + 20 * quantity;
            total += amount;
            break;

        case 7:
            cout << "Enter quantity " << endl;
            cin >> quantity;
            amount = total + 30 * quantity;
            total += amount;
            break;

        case 8:
            cout << "Enter quantity " << endl;
            cin >> quantity;
            amount = total + 30 * quantity;
            total += amount;
            break;

        case 9:
            cout << "Enter quantity " << endl;
            cin >> quantity;
            amount = total + 50 * quantity;
            total += amount;
            break;

        case 10:
            cout << "Enter quantity " << endl;
            cin >> quantity;
            amount = total + 10 * quantity;
            total += amount;
            break;

        case 11:
            cout << "Water Please..." << endl;

            break;

        default:
            cout << "Wrong choice" << endl;
            break;
        }

    } while (ch != 11);

    calc(total);
}
