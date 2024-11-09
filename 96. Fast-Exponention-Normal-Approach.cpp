#include<iostream>
using namespace std;

int normalSoln(int a, int b)
{
    int ans = 1;
    for(int i=0; i<b; i++) ans = ans * a;
    return ans;
}

int main()
{
    int a = 2;
    int b = 5;

    int ans = normalSoln(a,b);
    cout<<"The exponention of a is : "<<ans<<endl;

    return 0;
}