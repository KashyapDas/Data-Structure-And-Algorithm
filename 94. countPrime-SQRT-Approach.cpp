#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int n)
{
    int squareRoot = sqrt(n);
    for(int i=2; i<=squareRoot; i++)
    {
        if(n%i == 0) return false;
    }
    return true;
}

int countPrime(int n)
{
    int count = 0;
    if(n==0 || n==1) return count;
    for(int i=2; i<n; i++)
    {
        if(isPrime(i))
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int n=12;

    int ans = countPrime(n);
    cout<<"The prime numbers are : "<<ans<<endl;

    return 0;
}