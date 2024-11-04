#include<iostream>
using namespace std;

int main()
{
    int no = 8734;

    while(no != 0)
    {
        cout<<(no%10)<<endl;
        no = no/10;
    }

    return 0;
}