#include<iostream>
using namespace std;

int peakElem(int arr[], int n)
{
    int st = 0;
    int ed= n-1;

    while(st<ed)
    {
        int mid = st+(ed-st)/2;
        if(arr[mid] < arr[mid+1])
        {
            st = mid +1;
        }
        else{
            ed = mid;
        }
    }
    return ed;
}

int main()
{
    int arr[5] = {10,20,50,40,30};
    int size = sizeof(arr)/sizeof(int);

    int final = peakElem(arr,size);
    cout<<"The peak element of the solution is : "<<arr[final]<<endl;

    return 0;
}