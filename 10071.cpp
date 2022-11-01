#include<iostream>
using namespace std;
int main()
{
    int accelaration,velocity,displacement;
    while(cin>>accelaration>>velocity)
    {
        displacement = 2*accelaration*velocity;
        cout<<displacement<<endl;
    }

    return 0;
}
