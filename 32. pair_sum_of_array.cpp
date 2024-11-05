#include<iostream>
using namespace std;

void pairSum(int arr[5], int sum, int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if( (arr[i]+arr[j]) == sum )
            {
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            }
        }
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    int pair_sum = 5;

    pairSum(arr,pair_sum,size);


    return 0;
}