#include<iostream>
using namespace std;

bool linearSearch(int arr[][3], int size, int key)
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(arr[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
    int size = 3;
    int key;
    cout<<"Enter the value you want to find : "<<" ";
    cin>>key;

    bool result = linearSearch(arr,size,key);
    if(result)
    {
        cout<<key<<" is found ! "<<endl;
    }
    else{
        cout<<key<<" is not found ! "<<endl;
    }


}