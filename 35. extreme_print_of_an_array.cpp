// #include<iostream>
// using namespace std;

// void extremePrint(int arr[5], int n)
// {
//     int i = 0; 
//     int j = n-1;
    
//     while(i<j)
//     {
//         cout<<arr[i]<<" ";
//         cout<<arr[j]<<" ";
//         i++;
//         j--;
//     }
//     if(i==j)
//     {
//         cout<<arr[i]<<endl;
//     }
//     cout<<endl;
// }

// int main()
// {
//     int arr[5] = {10,2,5,30,6};
//     int n = sizeof(arr)/sizeof(int);

//     extremePrint(arr,n);

//     return 0;
// }


#include<iostream>
using namespace std;

void extremePrint(int arr[6], int n)
{
    int start = 0;
    int end = n-1;
    while(start<=end)
    {
        if(start==end)
        {
            cout<<arr[end]<<" ";
        }
        else{
            cout<<arr[start]<<" "<<arr[end]<<" ";
        }
        start++;
        end--;
    }
}

int main()
{
    int arr[6] = {10,20,30,40,50,60};
    int size = sizeof(arr)/sizeof(int);

    extremePrint(arr,size);


    return 0;
}