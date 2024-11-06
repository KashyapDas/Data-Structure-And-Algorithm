#include<iostream>
using namespace std;

int lastOccurance(int arr[], int size, int target)
{
    int start = 0, end = size-1;
    int ans = -1;

    while(start<=end)
    {
        int mid = start+(end-start)/2;

        if(arr[mid] == target)
        {
            ans = mid;
            start = mid +1;    
        }
        else if(arr[mid] < target)
        {
            start = mid+1;
        }
        else{
            end = mid -1;
        }
    }
    return ans;
}

int main()
{
    int arr[7] = {10,20,30,30,30,40,50};
    int size = sizeof(arr)/sizeof(int);
    int target = 30;
    int final = lastOccurance(arr,size,target);  
    if(final < 0)
    {
        cout<<"No occurance found..."<<endl;
    }
    else{
        cout<<"Occurance found at : "<<final<<endl;
    }

    return 0;
}