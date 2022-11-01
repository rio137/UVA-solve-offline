#include<iostream>
using namespace std;
int main()
{
    int total_input;
    long long side1,side,side3;
    cin>>total_input;
    for(int i=1;i<=total_input;i++)
    {
        cin>>side1;
        cin>>side;
        cin>>side3;
        cout<<"Case "<<i<<": ";
        if((side1+side>side3) && (side+side3>side1) && (side1+side3>side) && side>0 && side1>0 && side3>0)
        {
            if(side1 == side && side == side3 && side1 == side3)
            {
                cout<<"Equilateral"<<endl;
            }
            else if(side1==side || side==side3 || side1 == side3)
            {
                cout<<"Isosceles"<<endl;
            }
            else
            {
                cout<<"Scalene"<<endl;
            }
        }
        else
        {
            cout<<"Invalid"<<endl;
        }
    }
    return 0;
}
