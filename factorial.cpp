#include<iostream>
using namespace std;

int findFactorial(int factorial)
{
    // base case
    if(factorial == 1) return 1;

    // processing case
    int ans = factorial * findFactorial(factorial-1);
    // return the answer
    return ans;
}

int main()
{
    int factorial;
    cout<<"Enter the number : ";
    cin>>factorial;

    int ans = findFactorial(factorial);
    cout<<"The factorial of "<<factorial<<" is "<<ans<<endl;

    return 0;
}