#include<iostream>
using namespace std;

int findHCF(int a, int b)
{
    if(a==0) return b;
    if(b==0) return a;
    while(a>0 && b>0)
    {
        if(a>b) a = a-b;
        else b = b-a;
    }
    return a = 0 ? b : a;
}

int main()
{
    int a = 24;
    int b = 72;

    int hcf = findHCF(a,b);
    cout<<"The HCF is : "<<hcf<<endl;

    return 0;
}