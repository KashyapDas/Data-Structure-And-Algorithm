#include<iostream>
#include<limits.h>
using namespace std;

int maximumElement(int arr[][3], int size)
{
    int minimum = INT_MIN;

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(arr[i][j] > minimum)
            {
                minimum = arr[i][j];
            }
        }
    }
    return minimum;
}

int main()
{
    int arr[3][3] = { {1,2,3,},{4,5,6},{7,8,9} };
    int size = 3;

    int element = maximumElement(arr,size);
    cout<<"The maximum element is : "<<element<<endl;

    return 0;
}