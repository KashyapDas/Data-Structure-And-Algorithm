#include<iostream>
using namespace std;

// int pivotIndex(int arr[6], int n)
// {
//     int rsum=0;;
//     int lsum=0;

//     for(int i=0; i<n; i++)
//     {
//         rsum = 0;
//         for(int r=i+1; r<n; r++)
//         {
//             rsum = rsum + arr[r];
//         }
//         lsum = 0;
//         for(int l=i-1; l>=0; l--)
//         {
//             lsum = lsum + arr[l];
//         }
//         if(rsum == lsum)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

int prefixSum(int arr[6], int n)
{
    int* larr = new int[n]();
    int* rarr = new int[n]();

    for(int i=1; i<n; i++)
    {
        larr[i] = arr[i-1]+larr[i-1];
    }
    for(int j=n-2; j>=0; j--)
    {
        rarr[j] = arr[j+1] + rarr[j+1];
    }
    for(int i=0; i<n; i++)
    {
        if(larr[i] == rarr[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[6] = {1,7,3,6,5,6};
    int size = sizeof(arr)/sizeof(int);

    // int result = pivotIndex(arr,size);

    int result = prefixSum(arr,size);

    if(result != -1)
    {
        cout<<"The pivot index will be -> "<<result<<endl;
    }
    else{
         cout<<"Pivot Index not found"<<endl;
    }

    return 0;
}