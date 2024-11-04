#include<iostream>
using namespace std;

int setTheBit(int no, int k)
{
    return (no | (1<<k)); 
}

int main()
{
    int no;
    cin>>no;
    int k = 2;

    int ans = setTheBit(no,k);
    cout<<ans<<endl;

    return 0;
}