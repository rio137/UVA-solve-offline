#include<bits/stdc++.h>
using namespace std;
int main()
{
    string input,check1="hajj",check2="umrah";
    int count1 = 0;
    while(cin>>input)
    {
        count1+=1;
        if(input =="*")
            break;
        else
        {
            transform(input.begin(),input.end(),input.begin(),::tolower);
            cout<<"Case "<<count1<<": ";
          if(input == check1)
        {
            cout<<"Hajj-e-Akbar"<<endl;
        }
        else if(input==check2)
        {
            cout<<"Hajj-e-Asghar"<<endl;
        }
        }

    }
    return 0;
}
