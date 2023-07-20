#include <iostream>
using namespace std;
class volume
{
public:
    volume(int r)
    {
        cout << "volume of sphere:" << (4 * 3.14 * r * r * r) / 3 << endl;
    }
    volume(double b, double h)
    {
        cout << "volume of pyramid:" << (4 * b * h) / 3 << endl;
    }
    volume(int r, int h)
    {
        cout << "volume of cylinder" << 3.14 * r * r * h << endl;
    }
    volume(double l)
    {
        cout << "volume of cube:" << l * l * l << endl;
    }
};
int main()
{
    volume v(5), r(2.0, 3.2), h(2, 5), k(5.0);
}