#include<iostream>
using namespace std;

void linearRecursion(int arr[], int key, int size, int index)
{
    if(index == size)
    {
        cout<<"Not Found"<<endl;
        return;
    }
    if(key == arr[index])
    {
        cout<<"Element found at index : "<<index<<endl;
        return;
    }
    linearRecursion(arr,key,size,index+1);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int key = 140;
    int size = 10;
    int index = 0;

    linearRecursion(arr,key,size,index);

    return 0;
}