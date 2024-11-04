#include<iostream>
using namespace std;

int findFactorial(int no)
{
    int ans = 1;
    for(int i=1; i<=no; i++)
    {
        ans = ans * i;
    }

    return ans;
}

int main()
{
    int factorial = 6;

    int ans = findFactorial(factorial);

    cout<<ans<<endl;

    return 0;
}