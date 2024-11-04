#include<iostream>
using namespace std;

void reverseInteger(int no)
{
    while(no != 0)
    {
        cout<<(no%10);
        no = no/10;
    }
    cout<<endl;
}

int main()
{
    int no = 12345;

    reverseInteger(no);

    return 0;
}