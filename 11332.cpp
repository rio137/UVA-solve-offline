#include<iostream>
using namespace std;
int main()
{
    unsigned int number,result=0,reminder=0,temp;

    while(cin>>number)
    {
        if(number==0)
            break;
        else if(number>0 && number<10)
        {
            result = number;

        }

        temp=number;
        while(number>9)
        {
            result = 0;
            while(number!=0)
        {
            reminder = number%10;
            number = number/10;
            result+=reminder;
        }
            number=result;
            if(result<10)
                break;
        }

            cout<<result<<endl;
            number=0;result=0;reminder=0;temp=0;

    }
    return 0;
}
