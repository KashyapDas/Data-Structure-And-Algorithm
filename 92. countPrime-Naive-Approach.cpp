#include<iostream>
using namespace std;

bool isPrime(int n)
{
    for(int i=2; i<n; i++)
    {
        if(n%i == 0) return false;
    }
    return true;
}

int countPrime(int n)
{
    if(n==0 || n==1) return 0;
    int count = 0;

    for(int i=2; i<n; i++)
    {
        if(isPrime(i)) count ++;
    }
    return count;
}

int main()
{
    int num;
    cout<<"Select the range for finding the prime : ";
    cin>>num;

    int ans = countPrime(num);
    cout<<"The total prime number between are : "<<ans<<endl;

    return 0;
}