#include<iostream>
using namespace std;

void printArray(int arr[][3], int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void transposeArray(int arr[][3], int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            // if(i!=j)
            // {
                swap(arr[i][j], arr[j][i]);
            // }
        }
    }
    printArray(arr,size);
}

int main()
{
    int arr[][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int size = 3;

    transposeArray(arr,size);


    return 0;
}