#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int test_case,number;
    long result,temp;
    cin>>test_case;
    for(int i=0;i<test_case;i++)
    {
        cin>>number;
        result = (((((number*567)/9)+7492)*235)/47)-498;
        for(int j=0;j<2;j++)
        {
            temp = result%10;
            result/=10;
        }
        if(temp<0)
        temp = abs(temp);
        cout<<temp<<endl;
    }
    return 0;
}
