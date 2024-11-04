#include<iostream>
using namespace std;


int main()
{
    int N = 10;
    int ans = 0;

    for(int i=1; i<=N; i++)
    {
        if(i%2==0)
        {
            ans = ans +i;
        }
    }

    cout<<ans<<endl;


    return 0;
}