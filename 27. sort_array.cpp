#include<iostream>
using namespace std;

void PrintArray(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void countApproach(int arr[], int n)
{
    int zeroCount = 0;
    int oneCount = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            zeroCount++;
        }
        else{
            oneCount++;
        }
    }

    int index = 0;
    while(zeroCount--)
    {
        arr[index] = 0;
        index++;
    }

    while (oneCount--)
    {
        arr[index] = 1;
        index++;
    }
    
    PrintArray(arr,n);
}

void twoptrApproach(int arr[], int n)
{
    int st = 0;
    int ed = n-1;

    while(st<ed)
    {
        if( (arr[st]!=arr[ed]) && (arr[st] == 1) )
        {
            swap(arr[st],arr[ed]);
        }
        st++;
        ed--;
    }

    PrintArray(arr,n);
}

int main()
{
    int arr[6] = {0,1,0,0,0,1};
    int n = sizeof(arr)/sizeof(int);

    // countApproach(arr,n); 

    twoptrApproach(arr,n);

    return 0;
}