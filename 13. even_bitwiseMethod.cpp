#include<iostream>
using namespace std;

bool bitwiseMethod(int no)
{
    if((no&1)==0)
    {
        return true;
    }
    else{
        return false;
    }
}

int main()
{
    int no;
    cin>>no;

    bool ans = bitwiseMethod(no);
    if(ans)
    {
        cout<<"Even Number"<<endl;
    }
    else{
        cout<<"Odd Number"<<endl;
    }

    return 0;
}