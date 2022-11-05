#include<iostream>
using namespace std;

int main()
{
    int test_case,total_player,given_ball_player,total_pass,temp;
    cin>>test_case;
    for(int i=1;i<=test_case;i++)
    {
        cin>>total_player>>given_ball_player>>total_pass;
        temp=given_ball_player;
        for(int j=0;j<total_pass;j++)
        {
            if(temp==total_player)
            {
                temp=1;
            }
            else
            {
                temp+=1;
            }
        }
        cout<<"Case "<<i<<": "<<temp<<endl;
        temp=0;
    }
    return 0;
}
