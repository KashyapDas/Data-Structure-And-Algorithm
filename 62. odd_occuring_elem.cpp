#include<iostream>
using namespace std;

int oddOccuring(int arr[], int n)
{
    int s=0, e=n-1, ans =-1;
    while(s<=e)
    {
        int mid = s+(e-s)/2;
        if(s==e)
        {
            return e;
        }
        if(mid & 1)
        {
            // odd wala case
            if(mid-1>=0 && arr[mid-1] == arr[mid])
            {
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        else{
            // even wala case
            if(mid+1 <n && arr[mid] == arr[mid+1])
            {
                s = mid+1;
            }
            else{
                ans = mid;
                e = mid-2;
            }
        }
    }
    return ans;
}

int main()
{
    int arr[] = {10,10,2,2,5,5,4,7,7,5,5,20,20,11,11,10,10};
    int size = sizeof(arr)/sizeof(int);

    int result = oddOccuring(arr,size);
    if(result != -1)
    {
        cout<<"The index of the element is : "<<arr[result]<<endl;
    }
    else{
        cout<<"Something went wrong..."<<endl;
    }
    return 0;
}