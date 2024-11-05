// #include<iostream>
// #include<climits>
// using namespace std;

// int minArray(int arr[5], int n)
// {
//     int ans = INT_MAX;
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]<ans)
//         {
//             ans = arr[i];
//         }
//     }
//     return ans;
// }

// int main()
// {
//     int arr[5] = {20,5,60,6,1};
//     int n = sizeof(arr)/sizeof(n);

//     int ans = minArray(arr,n);
//     cout<<"Minimum Element is -> "<<ans<<endl;

//     return 0;
// }

#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int arr[5] = {99,12,109,143,21};
    int no = INT_MAX;
    int size = sizeof(arr)/sizeof(int);

    for(int i=0; i<size; i++)
    {
        if(arr[i]<no)
        {
            no = arr[i];
        }
    }
    cout<<"The maxium number is -> "<<no<<endl;


    return 0;
}