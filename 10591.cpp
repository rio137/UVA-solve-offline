#include<iostream>
using namespace std;
int main()
{
    int test_case;
    unsigned int number,result=0,reminder=0,temp;
    cin>>test_case;
    for(int i=1;i<=test_case;i++)
    {
        cin>>number;
        temp=number;
        while(result!=1)
        {
            result = 0;
            while(number!=0)
        {
            reminder = number%10;
            number = number/10;
            result+=(reminder*reminder);
        }
            number=result;
            if(result==1 || result==7)
            {
                result = 1;
                break;
            }

            else if(result!=1 && result!=7 && result<=9)
            {
                result=0;break;
            }
        }
        if(result==1)
        {
            cout<<"Case #"<<i<<": "<<temp<<" is a Happy number."<<endl;
            number=0;result=0;reminder=0;temp=0;
        }

        else
        {
            cout<<"Case #"<<i<<": "<<temp<<" is an unHappy number."<<endl;
            number=0;result=0;reminder=0;temp=0;
        }

    }
    return 0;
}
