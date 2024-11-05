#include<iostream>
using namespace std;

void printArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void kthShifting(int arr[], int n, int k)
{
    int store = k;
    int temp[k] = {0};

    // storing the value of array by the length of the k
    for(int i=0; i<k; i++)
    {
        temp[i] = arr[n-store];
        store--;
    }

    // Shifting process done here
    for(int i=(n-1); i>=0; i--)
    {
        arr[i] = arr[i-k];
    }

    // copy the temp value to the main array
    for(int i=0; i<k; i++)
    {
        arr[i] = temp[i];
    }

    // Print the array
    printArray(arr,n);
}

int main()
{
    int arr[6] = {10,20,30,40,50,60};
    int n = sizeof(arr)/sizeof(int);
    int k;
    cout<<"Enter the kth shifting value"<<endl;
    cin>>k;

    kthShifting(arr,n,k);



    return 0;
}