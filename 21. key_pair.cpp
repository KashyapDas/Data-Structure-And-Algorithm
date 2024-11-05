#include<iostream>
#include<algorithm>
using namespace std;

// bool bruteForce(int arr[6], int n, int X)
// {
//     sort(arr,arr+n);
//     for(int i=0; i<n; i++)
//     {
//         for(int j=i+1; j<n; j++)
//         {
//             if(arr[i]+arr[j] == X)
//             {
//                 return true;
//             }
//         }
//     }
//     return false;
// }

bool pairSum(int arr[6], int n, int X)
{
    sort(arr,arr+n);

    int st=0;
    int ed=n-1;
    while(st<ed)
    {
        if(arr[st]+arr[ed] == X)
        {
            return true;
        }
        else if(arr[st]+arr[ed] > 16)
        {
            ed--;
        }
        else{
            st++;
        }
    }
    return false;
}

int main()
{
    int arr[6] = {1,4,5,6,8,10};
    int size = sizeof(arr)/sizeof(int);
    int x = 16;

    // bool final = bruteForce(arr,size,x);

    bool final = pairSum(arr,size,x);
    if(final)
    {
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    return 0;
}