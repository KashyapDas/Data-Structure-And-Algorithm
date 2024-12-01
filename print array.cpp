#include<iostream>
using namespace std;

void print(int arr[], int size, int index)
{   
    // base case
    if(index==size) return;
    // processing case
    cout<<arr[index]<<" ";
    print(arr,size,index+1);
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int index = 0;

    print(arr,size,index);

    return 0;
}