#include <iostream>
using namespace std;
class volume
{
public:
    void shape(int r)
    {
        cout << "volume of sphere:" << (4 * 3.14 * r * r * r) / 3 << endl;
    }
    void shape(double b, double h)
    {
        cout << "volume of pyramid:" << (4 * b * h) / 3 << endl;
    }
    void shape(int r, int h)
    {
        cout << "volume of cylinder" << 3.14 * r * r * h << endl;
    }
    void shape(double l)
    {
        cout << "volume of cube:" << l * l * l << endl;
    }
};
int main()
{
    volume v;
    v.shape(10);
    v.shape(2.3, 2.4);
    v.shape(40, 50);
    v.shape(4.5);
}