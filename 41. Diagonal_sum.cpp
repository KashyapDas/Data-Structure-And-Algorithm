#include<iostream>
using namespace std;
 
int diagonalSum(int arr[][3], int n)
{
    int count = n;
    int sum = 0;
    for(int i=0; i<n; i++)
    {
        count=count-1;
        for(int j=0; j<n; j++)
        {
            if(j==count)
            {
                sum = sum+arr[i][j];
            }
        }
    }
    return sum;
}

int main()
{
    int arr[3][3] = { {1,2,1},{4,1,6},{1,8,9} };
    int size = sizeof(arr)/sizeof(arr[0]);

    int result = diagonalSum(arr,size);
    cout<<"The sum of diagonal is -> "<<result<<endl;
    return 0;
}