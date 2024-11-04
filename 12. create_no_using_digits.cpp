#include<iostream>
using namespace std;

int main()
{
    int no;
    int store = 0;
    cout<<"Enter how many number you want to print -> ";
    cin>>no;
    while(no--)
    {
        int number;
        cin>>number;
        store = (store * 10) + number;
    }
    cout<<store<<endl;

    return 0;
}