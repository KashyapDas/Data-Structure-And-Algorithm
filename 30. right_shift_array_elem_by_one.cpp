#include<iostream>
using namespace std;

void PrintArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void rightShift(int arr[], int n)
{
    int store = arr[n-1];
    for(int i=(n-1); i>0; i--)
    {
        arr[i] = arr[i-1];
    }
    arr[0] = store;


    PrintArray(arr,n);
}

int main()
{
    int arr[6] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);

    rightShift(arr,n);



    return 0;
}