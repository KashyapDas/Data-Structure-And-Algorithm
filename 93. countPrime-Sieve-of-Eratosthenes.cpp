#include<iostream>
#include<vector>
using namespace std;

int countPrime(int n)
{
    if(n==0 || n==1) return 0;

    vector<bool>prime(n,true);
    prime[0] = prime[1] = false;

    int count = 0;

    for(int i=2; i<n; i++)
    {
        if(prime[i])
        {
            count++;
            int j = 2*i; // 2 X 2 = 4
            while(j<n)
            {
                prime[j] = false;
                j = j+i;
            }
        }
    }
    return count;
}

int main()
{
    int num = 21;

    int ans = countPrime(num);
    cout<<"The primes are : "<<ans<<endl;



    return 0;
}