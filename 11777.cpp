#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case,term1,term2,final_result,attendence,classtest[3],n;
    float total,avgclasstest;
    cin>>test_case;
    for(int i=1;i<=test_case;i++)
    {
        cin>>term1>>term2>>final_result>>attendence;
        for(int j=0;j<3;j++)
            cin>>classtest[j];
        n=sizeof(classtest)/sizeof(classtest[0]);
        sort(classtest,classtest+n);
        total=term1+term2+final_result+attendence+(classtest[2]+classtest[1])/2.0;
        cout<<"Case "<<i<<": ";
        if(total>=90)
            cout<<"A"<<endl;
        else if(total<90 && total>=80)
            cout<<"B"<<endl;
        else if(total<80 && total>=70)
            cout<<"C"<<endl;
        else if(total<70 && total>=60)
            cout<<"D"<<endl;
        else
        cout<<"F"<<endl;
    }
    return 0;
}
