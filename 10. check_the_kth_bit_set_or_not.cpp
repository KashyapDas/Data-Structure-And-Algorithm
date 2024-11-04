#include<iostream>
using namespace std;

bool checkActiveBit(int no, int k)
{
    if( (no | (1<<k)) == no )
    {
        return true;
    }
    return false;
}

int main()
{
    int no;
    cin>>no;
    int k;
    cin>>k;
    
    bool ans = checkActiveBit(no,k);
    if(ans)
    {
        cout<<"The Kth bit is set"<<endl;
    }
    else{
        cout<<"The Kth bit is not set"<<endl;
    }

    return 0;
}