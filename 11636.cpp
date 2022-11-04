#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int no_of_hello_world,total_hello=0,counter=0,cases=0;
    while(cin>>no_of_hello_world && no_of_hello_world>0)
    {
        cases+=1;
        for(int i=0;;i++)
        {
            total_hello=pow(2,i);
            if(total_hello>no_of_hello_world)
            {
                counter=counter+1;
                break;
            }
            else if(total_hello==1)
            {
                counter+=0;
                if(total_hello==no_of_hello_world)
                    break;
            }
            else
            {
               counter+=1;
               if(total_hello==no_of_hello_world)
                    break;
            }
            total_hello=0;
        }
        cout<<"Case "<<cases<<": "<<counter<<endl;
        counter=0;
    }
   return 0;
}
