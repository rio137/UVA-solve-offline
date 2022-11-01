#include <iostream>

using namespace std;
int main()
{
    long hashmot_soldier,enemy,difference;

    while (cin >> hashmot_soldier>>enemy)
{
    if(hashmot_soldier>enemy)
    {
        difference = hashmot_soldier - enemy;
    }
    else
        difference = enemy - hashmot_soldier;

   cout<<difference<<endl;
}
    return 0;
}

