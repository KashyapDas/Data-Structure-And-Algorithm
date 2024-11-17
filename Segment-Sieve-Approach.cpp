#include<iostream>
#include<vector>
#include <math.h>
using namespace std;

vector<bool> Erathosthenes(int n)
{
    vector<bool>prime(n+1,true);

    prime[0] = prime[1] = false;
 
    for(int i=2; (i*i)<=n; i++)
    {
        if(prime[i])
        {
            int j = i*i;
            while(j<=n)
            {
                prime[j] = false;
                j = j+i;
            }
        }
    }

    return prime;
}

vector<bool> segmentSieve(int l, int h)
{
    vector<bool>sieve = Erathosthenes(sqrt(h));

    vector<int>basePrime;

    for(unsigned int i=0; i<sieve.size(); i++)
    {
        if(sieve[i])
        {
            basePrime.push_back(i);
        }
    }


    vector<bool>segSieve(h-l+1,true);


    if(l==0 || l==1)
    {
        segSieve[l] = false;
    }

    for(auto prime : basePrime)
    {
        int first_mul = (l/prime)*prime;
        if(first_mul < l)
        {
            first_mul = first_mul + prime;
        }

        int j = max(first_mul, prime*prime);
        while(j<=h)
        {
            segSieve[j-l] = false;
            j = j+prime;
        }
    }
    return segSieve;
}

int main()
{
    int l = 3;
    int h = 10;

    vector<bool>ans = segmentSieve(l,h);

    int count = 0;

    for(unsigned int i=0; i<ans.size(); i++)
    {
        if(ans[i] == true)
        {
            count++;
            cout<<"The prime numbers are : "<<i+l<<endl;
        }
    }

    cout<<"Total prime number are : "<<count<<endl;



    return 0;
}