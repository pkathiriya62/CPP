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
        cout << " Mobile Number :" << endl;
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

    cout << "<<<<<<<<<welcome to 3story.>>>>>>>>>" << endl;

    cout << " Discount=>  " << discount << endl;
    cout << " SGST=>" << sgst << endl;
    cout << " CGST=>" << cgst << endl;
    cout << " Net amount=>" << bill << endl;
}

int main()
{
    cafe b;
    int ch;
    int quantity;
    int price;
    int amount;
    int total = 0;

    b.info();

    do
    {

        cout << "<<<<<<<<<welcome to 3story.>>>>>>>>>" << endl;
        cout << "1.cappacino..........120 Rs                  6.mocktail............120 Rs " << endl;
        cout << "2.frappe...........130 Rs                  7.mint mohito......130 Rs " << endl;
        cout << "3.chocalate frappe.....130 Rs                  8.ice cream.........130 Rs " << endl;
        cout << "4.hot chocalate..............140 Rs                 9.coco..............150 Rs" << endl;
        cout << "5.garlic rice..............130 Rs                 10. choco thickshake.......110 Rs" << endl;
        cout << "11.bill plz                           " << endl;

        cout << "Enter your order: " << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "Enter quantity: " << endl;
            cin >> quantity;
            amount = 120 * quantity;
            total += amount;
            break;

        case 2:
            cout << "Enter quantity: " << endl;
            cin >> quantity;
            amount = total + 130 * quantity;
            total += amount;
            break;

        case 3:
            cout << "Enter quantity: " << endl;
            cin >> quantity;
            amount = total + 130 * quantity;
            total += amount;
            break;

        case 4:
            cout << "Enter quantity: " << endl;
            cin >> quantity;

            amount = total + 140 * quantity;
            total += amount;
            break;

        case 5:
            cout << "Enter quantity: " << endl;
            cin >> quantity;
            amount = total + 130 * quantity;
            total += amount;
            break;

        case 6:
            cout << "Enter quantity: " << endl;
            cin >> quantity;
            amount = total + 120 * quantity;
            total += amount;
            break;

        case 7:
            cout << "Enter quantity: " << endl;
            cin >> quantity;
            amount = total + 130 * quantity;
            total += amount;
            break;

        case 8:
            cout << "Enter quantity: " << endl;
            cin >> quantity;
            amount = total + 130 * quantity;
            total += amount;
            break;

        case 9:
            cout << "Enter quantity: " << endl;
            cin >> quantity;
            amount = total + 150 * quantity;
            total += amount;
            break;

        case 10:
            cout << "Enter quantity: " << endl;
            cin >> quantity;
            amount = total + 110 * quantity;
            total += amount;
            break;

        case 11:
            cout << "bill plz." << endl;

            break;

        default:
            cout << "Wrong choice" << endl;
            break;
        }

    } while (ch != 11);

    calc(total);
}
