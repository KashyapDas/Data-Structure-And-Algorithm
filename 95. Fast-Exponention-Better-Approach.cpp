#include<iostream>
using namespace std;

int betterSoln(int a, int b)
{
    int ans = 1;
    while(b>0)
    {
        if(b & 1) // if the power is odd
        {
            ans = ans*a;
        }
        a= a*a;
        b = b>>1;
    }
    return ans;
}

int main()
{
    int a = 2;
    int b = 5;

    int ans = betterSoln(a,b);
    cout<<"The exponention is : "<<ans<<endl;


    return 0;
}