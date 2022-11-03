#include<iostream>
#include<cmath>
using namespace std;
int main()
{
   unsigned int a,b,result=0;
   int counter=0,rootresult=0,rootresult2=0;
    while(cin>>a>>b && a!=0 && b!=0)
    {

        counter = 0;
        rootresult=0;
        rootresult2=0;
            if(a>b)
            swap(a,b);
            rootresult = sqrt(b);
            rootresult2 = sqrt(a);
        for(int i=rootresult2;i<=rootresult;i++)
        {
            result = i*i;
            if(result>=a && result<=b)
                counter+=1;
            result=0;
        }
        cout<<counter<<endl;

    }
    return 0;
}
