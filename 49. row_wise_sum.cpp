#include<iostream>
using namespace std;

void rowSum(int arr[][3], int size)
{
    int sum;
    for(int i=0; i<size; i++)
    {
        sum = 0;
        for(int j=0; j<size; j++)
        {
            sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
    }
}

int main()
{
    int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int size = 3;

    rowSum(arr,size);


    return 0;
}