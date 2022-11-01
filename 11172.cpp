#include<iostream>
using namespace std;

int main()
{
    int input,first_number,second_number;
    cin>>input;
   for (int i = 0; i < input; i++) {

        cin>>first_number;
        cin>>second_number;
        if(first_number==second_number)
        {
            cout<<"="<<endl;
        }
        else if(first_number>second_number)
        {
            cout<<">"<<endl;
        }
        else if(first_number<second_number)
        {
            cout<<"<"<<endl;
        }

}
    return 0;
}
