#include <iostream>
using namespace std;

class cafe
{

public:
    string name;
    double number;

    int info()
    {
        cout << "Enter Customer name :" << endl;
        cin >> name;
        cout << "Mobile Number :" << endl;
        cin >> number;
    }
};

int calc(int x)
{
    float discount;
    float sgst, cgst;
    float bill;

    discount = (x * 10) / 100;
    sgst = (x * 2.5) / 100;
    cgst = (x * 2.5) / 100;
    bill = x - discount + sgst + cgst;

    cout << "\t\t=======================================" << endl;

    cout << "\t\t=======================================" << endl;

    cout << "\t\t Total bill=" << x << endl;
    cout << "\t\t Discount=" << discount << endl;
    cout << "\t\t SGST=" << sgst << endl;
    cout << "\t\t CGST=" << cgst << endl;
    cout << "\t\t payable amount=" << bill << endl;
    cout << "\t\t=======================================" << endl;
    cout << "\t\t        Thank you visit again." << endl;
    cout << "\t\t=======================================" << endl;
}

int main()
{
    cafe b;
    int ch;
    int qty[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int n[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    int price;
    int amount;
    int total = 0;

    cout << "\t\t=======================================" << endl;
    cout << "\t\t\t   welcome to 3story." << endl;
    cout << "\t\t=======================================" << endl;
    cout << "\t\t1.cappacino...........................120 Rs" << endl;
    cout << "\t\t2.frappe..............................130 Rs" << endl;
    cout << "\t\t3.chocalate frappe....................130 Rs" << endl;
    cout << "\t\t4.hot chocalate.......................140 Rs" << endl;
    cout << "\t\t5.garlic rice.........................130 Rs" << endl;
    cout << "\t\t6.mocktail............................120 Rs" << endl;
    cout << "\t\t7.mint mohito.........................130 Rs" << endl;
    cout << "\t\t8.ice cream...........................130 Rs" << endl;
    cout << "\t\t9.coco................................150 Rs" << endl;
    cout << "\t\t10. choco thickshake..................110 Rs" << endl;
    cout << "\t\t=======================================" << endl;
    cout << "\t\t\tConfirm Order press 11" << endl;
    cout << "\t\t=======================================" << endl;
    b.info();
    do
    {

        cout << "Enter your order: " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter qty: " << endl;
            cin >> n[0];
            amount = 120 * n[0];
            total += amount;
            qty[0] += n[0];
            break;

        case 2:
            cout << "Enter qty: " << endl;
            cin >> n[1];
            amount = 130 * n[1];
            total += amount;
            qty[1] += n[1];
            break;

        case 3:
            cout << "Enter qty: " << endl;
            cin >> n[2];
            amount = 130 * n[2];
            total += amount;
            qty[2] += n[2];
            break;

        case 4:
            cout << "Enter qty: " << endl;
            cin >> n[3];
            amount = 140 * n[3];
            total += amount;
            qty[3] += n[3];
            break;

        case 5:
            cout << "Enter qty: " << endl;
            cin >> n[4];
            amount = 130 * n[4];
            total += amount;
            qty[4] += n[4];
            break;

        case 6:
            cout << "Enter qty: " << endl;
            cin >> n[5];
            amount = 120 * n[5];
            total += amount;
            qty[5] += n[5];
            break;

        case 7:
            cout << "Enter qty: " << endl;
            cin >> n[6];
            amount = 130 * n[6];
            total += amount;
            qty[6] += n[6];
            break;

        case 8:
            cout << "Enter qty: " << endl;
            cin >> n[7];
            amount = 130 * n[7];
            total += amount;
            qty[7] += n[7];
            break;

        case 9:
            cout << "Enter qty: " << endl;
            cin >> n[8];
            amount = 150 * n[8];
            total += amount;
            qty[8] += n[8];
            break;

        case 10:
            cout << "Enter qty: " << endl;
            cin >> n[9];
            amount = 110 * n[9];
            total += amount;
            qty[9] += n[9];
            break;

        case 11:
            cout << "bill plz." << endl;

            break;

        default:
            cout << "Wrong choice" << endl;
            break;
        }

    } while (ch != 11);

    cout << "\t\t=======================================" << endl;
    cout << "\t\t<<<<<<<<<welcome to 3story.>>>>>>>>>" << endl;
    cout << "\t\t=======================================" << endl;
    cout << "\t\tItem......"
         << "\t"
         << "Qty"
         << "\t"
         << "Price"
         << "\t"
         << "total" << endl;
    if (qty[0] != 0)
        cout << "\t\t1.cappacino"
             << "\t" << qty[0] << "\t"
             << "120"
             << "\t" << 120 * qty[0] << endl;
    if (qty[1] != 0)
        cout << "\t\t2.frappe"
             << "\t" << qty[1] << "\t"
             << "130"
             << "\t" << 130 * qty[1] << endl;
    if (qty[2] != 0)
        cout << "\t\t3.chocalate frappe"
             << "\t" << qty[2] << "\t"
             << "120"
             << "\t" << 120 * qty[2] << endl;
    if (qty[3] != 0)
        cout << "\t\t4.hot chocalate"
             << "\t" << qty[3] << "\t"
             << "140"
             << "\t" << 140 * qty[3] << endl;
    if (qty[4] != 0)
        cout << "\t\t5.garlic rice"
             << "\t" << qty[4] << "\t"
             << "130"
             << "\t" << 130 * qty[4] << endl;
    if (qty[5] != 0)
        cout << "\t\t6.mocktail"
             << "\t" << qty[5] << "\t"
             << "120 "
             << "\t" << 120 * qty[5] << endl;
    if (qty[6] != 0)
        cout << "\t\t7.mint mohito"
             << "\t" << qty[6] << "\t"
             << "130"
             << "\t" << 130 * qty[6] << endl;
    if (qty[7] != 0)
        cout << "\t\t8.ice cream"
             << "\t" << qty[7] << "\t"
             << "130"
             << "\t" << 130 * qty[7] << endl;
    if (qty[8] != 0)
        cout << "\t\t9.coco"
             << "\t" << qty[8] << "\t"
             << "150"
             << "\t" << 150 * qty[8] << endl;
    if (qty[9] != 0)
        cout << "\t\t10.choco thickshake"
             << "\t" << qty[9] << "\t"
             << "110"
             << "\t" << 110 * qty[9] << endl;

    calc(total);
}
