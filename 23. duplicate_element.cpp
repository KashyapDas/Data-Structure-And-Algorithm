#include<iostream>
#include<algorithm>
using namespace std;

int bruteForce(int arr[5], int n) // Time Complexity - O(nlogn) which is the t.c of sort 
{
    sort(arr,arr+1);
    for(int i=0; i<n-1; i++)
    {
        if(arr[i] == arr[i+1])
        {
            return arr[i];
        }
    }
    return -1;
}

int negativeMarking(int arr[5], int n)  // Time Complexity - O(n)
{
    int ans = -1;
    for(int i=0; i<n; i++)
    {
        int index = abs(arr[i]);
        if(arr[index] < 0)
        {
            return index;
        }
        else{
            arr[index] = arr[index]*ans;
        }
    }
    return ans;
}

int swapingMethod(int arr[5]) // Time Complexity - O(n)
{
    while(arr[0] != arr[arr[0]])
    {
        swap(arr[0], arr[arr[0]]);
    }
    return arr[0];
}

int main()
{
    int arr[5] = {1,3,4,2,2};
    int size = sizeof(arr)/sizeof(int);

    // int result = bruteForce(arr,size);

    // int result = negativeMarking(arr,size);

    int result = swapingMethod(arr);

    if(result != -1)
    {
        cout<<"The duplicate element is -> "<<result<<endl;
    }
    else{
        cout<<"No duplicate element found..."<<endl;
    }
    return 0;
}