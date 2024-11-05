#include<iostream>
using namespace std;

void print(int arr[7], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void shiftArr(int arr[7], int n, int shift)
{
    int* temp = new int(shift);
    int count = n-1;

    for(int i=0; i<shift; i++)
    {
        temp[i] = arr[count];
        count--;
    }
    for(int i=(n-1); i>=shift; i--)
    {
        // temp[count] = arr[i];
        // count++;
        arr[i] = arr[i-shift];
    }
    for(int i=0; i<shift; i++)
    {
        arr[i] = temp[i];
    }
    print(arr,n);
}

int main()
{
    int arr[7] = {10,20,30,40,50,60,70};
    int size = sizeof(arr)/sizeof(int);
    int shift = 3;

    shiftArr(arr,size,shift);


    return 0;
}