#include<iostream>
using namespace std;

bool checkPrime(int num)
{
    if(num==0 || num==1) return false;
    for(int i=2; i<num; i++)
    {
        if(num%i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int num;
    cout<<"Check a number is prime or not : ";
    cin>>num;


    bool no = checkPrime(num);
    if(no)
    {
        cout<<num<<" is a prime no "<<endl;
    }
    else{
        cout<<num<<" is not a prime number "<<endl;
    }
    
    return 0;
}