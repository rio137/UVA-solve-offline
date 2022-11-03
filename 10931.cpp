#include<iostream>
using namespace std;
int main()
{
unsigned int n;
int a[200],i,counter=0;
while(cin>>n && n!=0)
{
    for(i=0; n>0; i++)
{
    a[i]=n%2;
    n= n/2;
}
cout<<"The parity of ";
for(i=i-1 ;i>=0 ;i--)
{
  if(a[i]==1)
        counter+=1;
    cout<<a[i];
}
cout<<" is "<<counter<<" (mod 2)."<<endl;
counter=0;
}

return 0;
}
