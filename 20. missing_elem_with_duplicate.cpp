#include<iostream>
using namespace std;

int findMissing(int arr[5], int n) // Negative marking approach - T.C => 0(n)
{
    for(int i=0; i<n; i++)
    {
        int index = abs(arr[i]);
        if(arr[index-1] > 0)
        {
            arr[index-1] *= -1;
        }
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i] > 0)
        {
            return (i+1);
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {1,3,5,3,4};
    int n = sizeof(arr)/sizeof(int);

    int final = findMissing(arr,n);
    if(final != -1)
    {
        cout<<"The missing number is -> "<<final<<endl;
    }
    else{
        cout<<"There is no missing number..."<<endl;
    }

    return 0;
}