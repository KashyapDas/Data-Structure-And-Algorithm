#include<iostream>
using namespace std;

int powerN(int n)
{
    if(n==1)
    {
        return 2;
    }
    int ans = 2 * powerN(n-1);
    return ans;
}

int main()
{
    int n = 4;
    
    int ans = powerN(n);
    cout<<ans<<endl;
    return 0;
}