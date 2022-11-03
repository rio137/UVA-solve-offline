#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,salary[3],n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        for(int j=0;j<3;j++)
            cin>>salary[j];
        n=sizeof(salary)/sizeof(salary[0]);
        sort(salary,salary+n);
        cout<<"Case "<<i<<": "<<salary[1]<<endl;
    }
    return 0;
}
