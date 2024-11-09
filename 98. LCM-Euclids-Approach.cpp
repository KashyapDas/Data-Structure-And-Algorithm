#include<iostream>
using namespace std;

int findHCF(int a, int b)
{
    if(a==0) return b;
    if(b==0) return a;
    while(a>0 && b>0)
    {
        if(a>b) a=a-b;
        else b=b-a;
    }
    return a = 0 ? b : a;
}

int findLCM(int a, int b)
{
    int hcf = findHCF(a,b);
    int lcm = (a*b)/hcf;
    return lcm;
}

int main()
{
    int a = 72;
    int b = 24;

    int lcm = findLCM(a,b);
    cout<<"The lcm is : "<<lcm<<endl;


    return 0;
}