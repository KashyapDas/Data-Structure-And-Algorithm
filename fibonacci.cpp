#include<iostream>
using namespace std;

int print(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;

    int ans = print(n-1) + print(n-2);
    return ans;
}

int main()
{
    int fibonacci = 7;

    int ans = print(fibonacci);
    cout<<ans<<endl;
    return 0;
}