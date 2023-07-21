#include <iostream>
using namespace std;
class shape
{
public:
    void test(int a)
    {
        cout << "area of square is:" << a * a << endl;
    }
    void test(int x, int y)
    {
        cout << "area of rectangle is:" << x * y << endl;
    }
    void test(int s, int p, int k)
    {
        cout << "area of triangle is:" << s + p + k / 2 << endl;
    }
    void test(double r)
    {
        cout << "area of circle is:" << 3.14 * r * r << endl;
    }
};
int main()
{
    shape s;
    s.test(10);
    s.test(10, 20);
    s.test(20, 30, 40);
    s.test(2.5);
}