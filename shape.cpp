#include <iostream>
using namespace std;
class shape
{
public:
    shape(int a)
    {
        cout << "area of square is:" << a * a << endl;
    }
    shape(int x, int y)
    {
        cout << "area of rectangle is:" << x * y << endl;
    }
    shape(int s, int p, int k)
    {
        cout << "area of triangle is:" << s + p + k / 2 << endl;
    }
    shape(double r)
    {
        cout << "area of circle is:" << 3.14 * r * r << endl;
    }
};
int main()
{
    shape s(4), a(2, 2), b(2, 2, 2), c(2.5);
}