#include<iostream>
using namespace std;

int diagonalSum(int arr[][3], int size)
{
    int sum = 0;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(i==j)
            {
                sum = sum + arr[i][j]; 
            }
        }
    }
    return sum;
}

int main()
{
    int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int size = 3;

    int result = diagonalSum(arr,size);
    cout<<"The sum of the diagobnal is : "<<result<<endl;

    return 0;
}