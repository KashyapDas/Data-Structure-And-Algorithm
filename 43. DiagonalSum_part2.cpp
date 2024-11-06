#include<iostream>
using namespace std;

int diagonalSum(int arr[][4], int size)
{
    int sum = 0;;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if((i+j) == (size-1))
            {
                sum = sum + arr[i][j];
            }
        }
    }
    return sum;
}

int main()
{
    int arr[4][4];
    int size = 4;
    cout<<"Enter the element in the array : "<<" ";
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<"Element added successfully"<<endl;

    int result = diagonalSum(arr,size);
    cout<<"The sum of the diagonal is : "<<result<<endl;

    return 0;
}