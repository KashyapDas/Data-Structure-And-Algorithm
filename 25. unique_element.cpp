#include<iostream>
using namespace std;

int uniqueElement(int arr[], int n)
{
    int first = arr[0];
    for(int i=1; i<n; i++)
    {
        first = first ^ arr[i];
    }
    return first;
}

int main()
{
    int arr[5] = {5,12,2,5,12};
    int n = sizeof(arr)/sizeof(int);

    int ans = uniqueElement(arr,n);
    cout<<ans<<endl;

    return 0;
}