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

    cout << "............................" << endl;
    cout << "Total bill.................."
         << "\t" << x << endl;
    cout << "Discount..................."
         << "\t" << discount << endl;
    cout << "SGST......................."
         << "\t" << sgst << endl;
    cout << "CGST......................."
         << "\t" << cgst << endl;
    cout << "............................" << endl;
    cout << "Net amount................."
         << "\t" << netbill << endl;
}

int main()
{
    bill b;
    int ch;
    int quantity[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int price;
    int amount;
    int total = 0;

    b.getinfo();

    do
    {

        cout << "                                Hi-Fi            " << endl;
        cout << "                        Fast Food   & Cold drinks    " << endl;
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

            cin >> quantity[0];
            amount = 20 * quantity[0];
            total += amount;
            quantity[0] += quantity[0];
            break;

        case 2:
            cout << "Enter quantity " << endl;
            cin >> quantity[1];
            amount = total + 30 * quantity[1];
            total += amount;
            quantity[1] += quantity[1];

            break;

        case 3:
            cout << "Enter quantity " << endl;
            cin >> quantity[2];
            amount = total + 30 * quantity[2];
            total += amount;
            quantity[2] += quantity[2];
            break;

        case 4:
            cout << "Enter quantity " << endl;
            cin >> quantity[3];

            amount = total + 40 * quantity[3];
            total += amount;
            quantity[3] += quantity[3];
            break;

        case 5:
            cout << "Enter quantity " << endl;
            cin >> quantity[4];
            amount = total + 30 * quantity[4];
            total += amount;
            quantity[4] += quantity[4];

            break;

        case 6:
            cout << "Enter quantity " << endl;
            cin >> quantity[5];
            amount = total + 20 * quantity[5];
            total += amount;
            quantity[5] += quantity[5];
            break;

        case 7:
            cout << "Enter quantity " << endl;
            cin >> quantity[6];
            amount = total + 30 * quantity[6];
            total += amount;
            quantity[6] += quantity[6];
            break;

        case 8:
            cout << "Enter quantity " << endl;
            cin >> quantity[7];
            amount = total + 30 * quantity[7];
            total += amount;
            quantity[7] += quantity[7];
            break;

        case 9:
            cout << "Enter quantity " << endl;
            cin >> quantity[8];
            amount = total + 50 * quantity[8];
            total += amount;
            quantity[8] += quantity[8];
            break;

        case 10:
            cout << "Enter quantity " << endl;
            cin >> quantity[9];
            amount = total + 10 * quantity[9];
            total += amount;
            quantity[9] += quantity[9];
            break;

        case 11:
            cout << "Water Please..." << endl;

            break;

        default:
            cout << "Wrong choice" << endl;
            break;
        }

    } while (ch != 11);
    cout << "            Hi - FI               " << endl;
    cout << "      Fast Food & Cold drinks  " << endl;
    cout << "Item..........."
         << "\t"
         << "Qty"
         << "\t"
         << "Price"
         << "\t"
         << "total" << endl;
    if (quantity[0] != 0)
        cout << "1.panipuri....."
             << "\t" << quantity[0] << "\t"
             << "20"
             << "\t" << 20 * quantity[0] << endl;
    if (quantity[1] != 0)
        cout << "2.vadapav......"
             << "\t" << quantity[1] << "\t"
             << "30"
             << "\t" << 30 * quantity[1] << endl;
    if (quantity[2] != 0)
        cout << "3.Kachci dabeli"
             << "\t" << quantity[2] << "\t"
             << "20"
             << "\t" << 20 * quantity[2] << endl;
    if (quantity[3] != 0)
        cout << "4.Khavsa......."
             << "\t" << quantity[3] << "\t"
             << "40"
             << "\t" << 40 * quantity[3] << endl;
    if (quantity[4] != 0)
        cout << "5.Samosa......."
             << "\t" << quantity[4] << "\t"
             << "30"
             << "\t" << 30 * quantity[4] << endl;
    if (quantity[5] != 0)
        cout << "6.Ghughra......"
             << "\t" << quantity[5] << "\t"
             << "20 "
             << "\t" << 20 * quantity[5] << endl;
    if (quantity[6] != 0)
        cout << "7.Fafdi Gathiya"
             << "\t" << quantity[6] << "\t"
             << "30"
             << "\t" << 30 * quantity[6] << endl;
    if (quantity[7] != 0)
        cout << "8.Chat Papdi..."
             << "\t" << quantity[7] << "\t"
             << "30"
             << "\t" << 30 * quantity[7] << endl;
    if (quantity[8] != 0)
        cout << "9.Momos........"
             << "\t" << quantity[8] << "\t"
             << "50"
             << "\t" << 50 * quantity[8] << endl;
    if (quantity[9] != 0)
        cout << "10.Colddrinks.."
             << "\t" << quantity[9] << "\t"
             << "10"
             << "\t" << 10 * quantity[9] << endl;

    calc(total);
}