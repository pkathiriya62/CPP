#include <iostream>
using namespace std;
class batsman
{
    int bcode, inning, notout, runs, batavg;
    string bname;
    void calcavg()
    {
        batavg = runs / (inning - notout);
    }

public:
    void readdata()
    {
        cout << "Enter Batsman Code : ";
        cin >> bcode;

        cout << "Enter Batsman Name : ";
        cin >> bname;

        cout << "Enter Played Inning : ";
        cin >> inning;
        cout << "Enter Not-Out : ";
        cin >> notout;
        cout << "Enter Batsman Runs : ";
        cin >> runs;
        calcavg();
    }
    void displaydata()
    {
        cout << "Batsman Code : " << bcode << endl;
        cout << "Batsman Name : " << bname << endl;
        cout << "Played Inning : " << inning << endl;
        cout << "Not-Out Inning : " << notout << endl;
        cout << "Batsman Runs : " << runs << endl;
        cout << "Average : " << batavg << endl;
    }
};
int main()
{
    batsman b;
    b.readdata();
    b.displaydata();
}