#include<iostream>
using namespace std;

bool checkPrime(int no)
{
    if( (no%2 == 0) || (no%3==0) )
    {
        return false;
    }
    else{
        return true;
    }
}

int main()
{
    int no = 13;
    
    bool ans = checkPrime(no);
    if(ans)
    {
        cout<<"Prime Number"<<endl;
    }
    else{
        cout<<"Not Prime Number"<<endl;
    }

    return 0;
}