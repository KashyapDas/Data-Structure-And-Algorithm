#include<iostream>
using namespace std;

void countNumber(int n)
{
    if(n==1)
    {
        cout<<1<<" ";
        return;
    }
    countNumber(n-1);
    cout<<n<<" ";
}

int main()
{
    int n = 10;

    countNumber(n);

    return 0;
}