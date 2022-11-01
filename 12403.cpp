#include<iostream>
#include <string>
using namespace std;
int main()
{
    int input,total_amount=0,amount;
    string donate_report,donate="donate",report="report";
    cin>>input;
    for(int i=0;i<input;i++)
    {
        cin>>donate_report;
        if(donate_report == donate)
        {
            cin>>amount;
            total_amount+=amount;
        }
        else if(donate_report == report)
        {
            cout<<total_amount<<endl;
        }
    }
    return 0;
}
