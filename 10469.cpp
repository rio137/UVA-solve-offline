#include<iostream>
using namespace std;
int main()
{
    unsigned int decimal_1,decimal_2,result;
    while(cin>>decimal_1>>decimal_2)
    {
        result = decimal_1 ^ decimal_2;
        cout<<result<<endl;
    }
    return 0;
}
