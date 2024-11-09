#include<iostream>
using namespace std;


int main()
{
    int a = 126;
    int m = 10;

    cout<<a%m<<endl;

    cout<<((a%m)%m)%m<<endl;

    return 0;
}