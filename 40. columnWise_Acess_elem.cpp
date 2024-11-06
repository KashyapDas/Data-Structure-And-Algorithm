#include<iostream>
using namespace std;


int main()
{
    int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int size = 3;

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            cout<<arr[j][i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}