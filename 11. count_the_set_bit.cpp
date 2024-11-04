#include<iostream>
using namespace std;

int countActiveBit(int no)
{
    int count = 0;
    int bit = 0;

    while(bit != 32)
    {
    if( (no | (1<<bit) ) == no )
    {
        count++;
    }
    bit++;
    }
    return count;
}

int main()
{
    int no;
    cin>>no;

    int ans =countActiveBit(no);
    cout<<ans<<endl;

    return 0;
}