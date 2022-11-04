#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,members,members_age[20],result;
    cin>>test_case;
    for(int i=1;i<=test_case;i++)
    {
        cin>>members;
        for(int j=1;j<=members;j++)
        {
            cin>>members_age[j];
        }
        result = ceil(members/2.0);
        cout<<"Case "<<i<<": "<<members_age[result]<<endl;
        result=0;
    }
    return 0;
}
