#include<iostream>
using namespace std;

int main()
{
    unsigned int i,j,count_no=1,temp=0,maxval=0,input_temp_i=0,input_temp_j=0;
    while(cin>>i>>j && i>0 && j>0)
    {
        input_temp_i = i;
        input_temp_j = j;
        if(i>j)
            swap(i,j);
        for(int k=i;k<=j;k++)
        {
            temp=k;
            while(temp!=1)
            {
                if(temp%2==0)
                {
                    temp=temp/2;

                }

                else
                {
                    temp=3*temp+1;

                }
                count_no+=1;

            }
            if(count_no>maxval)
            {
                maxval=count_no;
            }
            count_no=1;
            temp=0;
        }
        cout<<input_temp_i<<" "<<input_temp_j<<" "<<maxval<<endl;
        maxval=0;
    }
    return 0;
}
