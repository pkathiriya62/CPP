#include<iostream>
using namespace std;
int main()
{
    int maths,phy,eng,total,per;
    cout<<"enter marks of maths:";
    cin>>maths;
    cout<<"\nenter marks of phy:";
    cin>>phy;
    cout<<"\nenter marks of eng:";
    cin>>eng;
    total=maths+phy+eng;
    per=total*100/3;
    cout<<"your total mark is:"<<total;
    cout<<"your percentage is:"<<per;


}