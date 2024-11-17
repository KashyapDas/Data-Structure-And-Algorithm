#include<iostream>
using namespace std;

int main()
{
    int a = 5;
    int* ptr = &a;
    cout<<sizeof(ptr)<<endl;

    char ch = 'k';
    char* cptr = &ch;
    cout<<sizeof(cptr)<<endl;

    long lati = 10;
    long* lptr = &lati;
    cout<<sizeof(lptr)<<endl;


    return 0;
}