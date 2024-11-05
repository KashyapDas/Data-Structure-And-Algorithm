// #include<iostream>
// using namespace std;

// int countElement(int arr[5], int n)
// {
//     int count = 0;
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]==1)
//         {
//             count++;
//         }
//     }
//     return count;
// }

// int main()
// {
//     int arr[5] = {0,1,1,0,1};
//     int n = sizeof(arr)/sizeof(int);

//     int ans = countElement(arr,n);
//     cout<<"Total 1's present is -> "<<ans<<endl;
//     cout<<"Total 0's present is -> "<<n-ans<<endl;

//     return 0;
// }




#include<iostream>
using namespace std;

int countElem(int arr[5], int n)
{
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0){
            count++;
        }
    }
    return count;
}

int main()
{
    int arr[5] = {0,1,1,0,0};
    int size = sizeof(arr)/sizeof(int);

    int final = countElem(arr,size);
    cout<<"Number of 0's -> "<<final<<endl;
    cout<<"Number of 1's -> "<<size-final<<endl;
    return 0;
}





















