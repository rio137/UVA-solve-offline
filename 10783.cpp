#include<iostream>
#include<cmath>

using namespace std;
int main()
{
    int input,range1,range2,n,result;
    cin>>input;
    for(int i=1;i<=input;i++)
    {
        result=0;
        cin>>range1>>range2;
        if(range1%2==0)
            range1+=1;
        if(range2%2==0)
            range2-=1;
        if(range1>range2)
            swap(range1,range2);

        n=floor((range2-range1)/2)+1;
        result = (n*(range1+range2))/2;
        cout<<"Case "<<i<<":"<<" "<<result<<endl;

    }
    return 0;
}
