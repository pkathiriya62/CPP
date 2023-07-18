#include <iostream>
using namespace std;
class Test
{
    int testCode, noCandidate, centerReqd;
    char description[30];
    int calcent()
    {
        return (noCandidate / 100 + 1);
    }

public:
    void schedual()
    {
        cout << "Enter Test Code : ";
        cin >> testCode;
        cout << "Description : ";
        cin >> description;
        cout << "No. Of Candidate : ";
        cin >> noCandidate;
        centerReqd = calcent();
    }
    void disptest()
    {
        cout << "Test Code is : " << testCode << endl;
        cout << "Description : " << description << endl;
        cout << "All Candidate : " << noCandidate << endl;
        cout << "Center Required : " << centerReqd;
    }
};
int main()
{
    Test a;
    a.schedual();
    a.disptest();
}