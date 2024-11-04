#include<iostream>
using namespace std;

int kthBit(int no, int k)
{
    int a=1;

    int secondary_result = a<<k;

    int result = (no | secondary_result);

    return result;
}

int main()
{
    int no;
    cout<<"Enter the number you want to set"<<" ";
    cin>>no;
    cout<<endl<<"Enter the index you want to set"<<" ";
    int k;
    cin>>k;
    int result = kthBit(no,k);

    cout<<endl<<"After setting the bit the result is ->"<<result<<endl;

    return 0;
}