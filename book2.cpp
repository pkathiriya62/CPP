#include <iostream>
using namespace std;

class book
{
    int n;
    int bookNo;
    int totalcost;
    char bookTitle[30];
    float price;

public:
    book()
    {
        cout << "enter book no : ";
        cin >> bookNo;
        cout << "enter book title : ";
        cin >> bookTitle;
        cout << "enter book price : ";
        cin >> price;
        cout << "Enter the number of copies to be purchased: ";
        cin >> n;

        totalcost = price * n;
        cout << "Total cost to be paid: " << totalcost << endl;
    }
};

int main()
{
    book b;
}