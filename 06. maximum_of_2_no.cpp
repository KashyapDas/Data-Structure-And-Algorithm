#include<iostream>
using namespace std;

int maximum( int a, int b )
{
    if(a>b)
    {
        return a;
    }
    else{
        return b;
    }
}

int main()
{
    int a = 10;
    int b = 20;

    int ans = maximum(a,b);
    cout<<ans<<endl;

    return 0;
}