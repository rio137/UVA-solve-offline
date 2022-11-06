#include<iostream>
using namespace std;
int main()
{
    int cigarettes_have,cigarettes_required,butts,temp,temp2;
    while(cin>>cigarettes_have>>cigarettes_required)
    {
        butts = cigarettes_have;
        temp2 = cigarettes_have;
        if(cigarettes_have<cigarettes_required || cigarettes_have==0)
        {
            cout<<temp2<<endl;
        }
        else
        {
            while(butts>=cigarettes_required)
        {

            temp2+=butts/cigarettes_required;
            temp = butts%cigarettes_required;
            butts=temp+(butts/cigarettes_required);

        }
        cout<<temp2<<endl;
        }

    }
    return 0;
}
