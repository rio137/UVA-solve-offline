#include<bits/stdc++.h>
using namespace std;
int main()
{
    string expression;
     char decode[32];
     int len;
while(cin>>expression)
{

    for(int i=0;i<expression.length();i++)
    {
        if(int(expression[i])>=97 && int(expression[i])<=122)
        expression[i] = toupper(expression[i]);
      //  cout<<expression[i];
      if(int(expression[i])>=65 && int(expression[i])<=67)
      {
          decode[i]='2';
      }
      else if(int(expression[i])>=68 && int(expression[i])<=70)
      {
          decode[i]='3';
      }
      else if(int(expression[i])>=71 && int(expression[i])<=73)
      {
          decode[i]='4';
      }
      else if(int(expression[i])>=74 && int(expression[i])<=76)
      {
          decode[i]='5';
      }
      else if(int(expression[i])>=77 && int(expression[i])<=79)
      {
          decode[i]='6';
      }
      else if(int(expression[i])>=80 && int(expression[i])<=83)
      {
          decode[i]='7';
      }
      else if(int(expression[i])>=84 && int(expression[i])<=86)
      {
          decode[i]='8';
      }
      else if(int(expression[i])>=87 && int(expression[i])<=90)
      {
          decode[i]='9';
      }
      else
      {
          decode[i] = expression[i];
      }
    }
    len = expression.length();
    for(int i=0;i<len;i++)
    cout<<decode[i];
    cout<<endl;
    len = 0;
}
    return 0;
}
