#include<iostream>
using namespace std;

int binaryRecursion(int arr[],int key, int start, int end)
{
    if(start>end) return -1;
    int mid = start + (end-start)/2;
    if(key == arr[mid]) return mid;
    else if(key < arr[mid]) binaryRecursion(arr,key,start,mid-1);
    else binaryRecursion(arr,key,mid+1,end);
}


int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int key = 8;
    int start = 0;
    int end = (sizeof(arr)/sizeof(arr[0]))-1;

    int ans = binaryRecursion(arr,key,start,end);
    if(ans == -1) cout<<"Element not found..."<<endl;
    else cout<<"Element found at index : "<<ans<<endl;
    return 0;
}