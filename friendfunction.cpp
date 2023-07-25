#include <iostream>
using namespace std;
class rect
{
    int l, b;
    friend rect add(rect, rect, rect);

public:
    void setdata(int x, int y)
    {
        l = x, b = y;
    }
    void getdata()
    {
        cout << "area is:" << l * b << endl;
    }
};
rect add(rect x, rect y, rect z)
{ // object as argument
    rect t;
    t.l = x.l + y.l + z.l;
    t.b = x.b + y.b + z.b;
    return t; // object as return
}
int main()
{
    rect a, b, c, d;
    a.setdata(2, 3);
    a.getdata();
    b.setdata(4, 5);
    b.getdata();
    d.setdata(3, 3);
    d.getdata();
    c = add(a, b, d);
    c.getdata();
}