#include<iostream>
using namespace std;

void binaryRecursion(int arr[], int key, int start, int end)
{
    if(start>end)
    {
        cout<<"Element not found..."<<endl;
        return;
    }
    int mid = start + (end-start)/2;
    if(arr[mid]==key)
    {
        cout<<"Element found at index : "<<mid<<endl;
        return;
    }
    else if(key < arr[mid]) binaryRecursion(arr,key,start,mid-1);
    else binaryRecursion(arr,key,mid+1,end);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int key = 81;
    int start = 0;
    int end = (sizeof(arr)/sizeof(arr[0]))-1;

    binaryRecursion(arr,key,start,end);

    return 0;
}