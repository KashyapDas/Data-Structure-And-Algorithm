#include<iostream>
using namespace std;

bool binaryRecursion(int arr[],int key, int start, int end)
{
    if(start>end) return false;
    int mid = start + (end-start)/2;
    if(key == arr[mid]) return true;
    else if(key < arr[mid]) binaryRecursion(arr,key,start,mid-1);
    else binaryRecursion(arr,key,mid+1,end);
}


int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int key = 84;
    int start = 0;
    int end = (sizeof(arr)/sizeof(arr[0]))-1;

    bool ans = binaryRecursion(arr,key,start,end);
    if(ans) cout<<"Element found "<<endl; 
    else cout<<"Element not found..."<<endl;
    return 0;
}