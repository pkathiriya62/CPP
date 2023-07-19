#include <iostream>
using namespace std;

class flight
{
public:
    int flightNo;
    char Destination[30];
    float Distance, Fuel;

    flight()
    {
        cout << "enter flight no :";
        cin >> flightNo;
        cout << "enter destination : ";
        cin >> Destination;
        cout << "enter distance : ";
        cin >> Distance;

        if (Distance <= 1000)
        {
            Fuel = 500;
        }
        else if (Distance > 1000 && Distance <= 2000)
        {
            Fuel = 1100;
        }
        else
        {
            Fuel = 2200;
        }

        cout << "flight number :" << flightNo << endl;
        cout << "destinatio : " << Destination << endl;
        cout << "total distance : " << Distance << "km" << endl;
        cout << "fuel : " << Fuel << " litter" << endl;
    }
};

int main()
{
    flight f;
}