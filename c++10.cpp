#include<iostream>
using namespace std;
int main()
{
    int b,r,t;
    float amount;
    cout<<"enter balance:";
    cin>>b;
    cout<<"enter rate:";
    cin>>r;
    cout<<"enter time:";
    cin>>t;
    amount=b*r*t/100;
    cout<<"your amount is:"<<amount;


}