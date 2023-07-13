#include<iostream>
using namespace std;
int main()
{
    int maths,physics,chemistry;
    float total,percentage;
    cout<<"enter marks of maths:";
    cin>>maths;
    cout<<"enter marks of physics:";
    cin>>physics;
    cout<<"enter marks of chemistry:";
    cin>>chemistry;

    if(maths<35::chemistry<35::physics<35)
    {
            cout<<"you are fail.";
    }
    else
    {
            total=maths+chemistry+physics;
            cout<<"your total mark is:\n"<<total;
            percentage=(total*100)/300;
            cout<<"total percentage is:\n"<<percentage;

            if(percentage>=75)
            {
                cout<<"\nyou got A grade.";
            }
            else if(percentage>=60&&percentage<75)
            {
                cout<<"\nyou got B grade.";
            }
            else if(percentage>=45&&percentage<60)
            {
                
            }
    }

}
