#include <iostream>
using namespace std;
class number
{
    int real, img;

public:
    void setdata(int a, int b)
    {
        real = a, img = b;
    }
    void getdata()
    {
        cout << "number is:" << real << "+" << img << "i" << endl;
    }
    number operator++()
    {
        number t;
        t.real = ++real;
        t.img = ++img;
        return t;
    }
};

int main()
{
    number n, m;
    n.setdata(2, 5);
    n.getdata();
    ++n;
    m = n;
    m.getdata();
}