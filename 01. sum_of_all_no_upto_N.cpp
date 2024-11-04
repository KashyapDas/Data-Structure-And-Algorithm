#include<iostream>
using namespace std;
int main()
{
    int N = 3;
    int ans = 0;
    for(int i=1; i<=N; i++)
    {
        ans = ans + i;
    }
    cout<<ans<<endl;

    return 0;
}