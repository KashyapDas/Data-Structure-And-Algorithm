#include<iostream>
using namespace std;

int linearRecursion(int arr[], int key, int size, int index)
{
    if(index == size) return -1;
    if(key == arr[index]) return index;
    linearRecursion(arr,key,size,index+1);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int key = 10;
    int index = 0;

    int ans = linearRecursion(arr,key,size,index);
    if(ans == -1)
    {
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"Element found at index : "<<ans<<endl;
    }

    return 0;
}