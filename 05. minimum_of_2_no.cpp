#include<iostream>
using namespace std;

int minimum(int a, int b)
{
    if(a>b)
    {
        return b;
    }
    else{
        return a;
    }
}

int main()
{
    int a = 10;
    int b = 20;

    int ans = minimum(a,b);
    cout<<ans<<endl;


    return 0;
}