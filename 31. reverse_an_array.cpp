// #include<iostream>
// using namespace std;

// void PrintArray(int arr[1], int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;
// }

// void reverseArray(int arr[1], int n)
// {
//     int i=0; 
//     int j=n-1;

//     while(i<=j)
//     {
//         swap(arr[i],arr[j]);
//         i++;
//         j--;
//     }

//     PrintArray(arr,n);
// }

// int main()
// {
//     int arr[1] = {1};
//     int n = sizeof(arr)/sizeof(int);

//     reverseArray(arr,n);
// }



#include<iostream>
using namespace std;

void print(int arr[6], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverseArray(int arr[6], int n)
{
    int start = 0;
    int end = n-1;
    while(start<end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    print(arr,n);
}

int main()
{
    int arr[6] = {10,20,30,40,50,60};
    int size = sizeof(arr)/sizeof(int);

    reverseArray(arr,size);

    return 0;
}