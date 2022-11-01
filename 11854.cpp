#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int inp1,inp2,inp3,result;
    while(cin>>inp1>>inp2>>inp3)
    {
        if(inp1==0 && inp2==0 && inp3==0)
        {
            break;
        }
        else
        {
            if(inp1>inp2 && inp1>inp3)
            {
                result = sqrt(inp2*inp2 + inp3*inp3);
                if(result == inp1)
                {
                    cout<<"right"<<endl;
                }
                else
                    cout<<"wrong"<<endl;
            }
            else if(inp2>inp3)
            {
                result = sqrt(inp1*inp1 + inp3*inp3);
                if(result == inp2)
                {
                    cout<<"right"<<endl;
                }
                else
                    cout<<"wrong"<<endl;

            }
            else
            {
                result = sqrt(inp2*inp2 + inp1*inp1);
                if(result == inp3)
                {
                    cout<<"right"<<endl;
                }
                else
                    cout<<"wrong"<<endl;
            }
        }
    }
    return 0;
}
