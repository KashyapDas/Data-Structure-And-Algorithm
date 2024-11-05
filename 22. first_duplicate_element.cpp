#include<iostream>
#include<unordered_map>
using namespace std;

// int firstDuplicate(int arr[], int n)
// {
//     int temp[n] = {0};

//     for(int i=0; i<n; i++)
//     {
//         int index = arr[i];
//         temp[index] = temp[index] + 1;
//     }
//     for(int i=0; i<n; i++)
//     {
//         int index = arr[i];
//         if(temp[index] > 1)
//         {
//             return (i+1);
//         }
//     }
//     return -1;
// }

int hashingElem(int arr[], int n)
{
    unordered_map<int,int>hash;

    for(int i=0; i<n; i++)
    {
        hash[arr[i]]++;
    }
    for(int i=0; i<n; i++)
    {
        if(hash[arr[i]] > 1)
        {
            return (i+1);
        }
    }
    return -1;
}

int main()
{
    int arr[7] = {1,5,3,4,3,5,6};
    int size = sizeof(arr)/sizeof(int);

    // int result = firstDuplicate(arr,size);

    
    int result = hashingElem(arr,size);

    if(result == -1)
    {
        cout<<"No duplicate element is found in the array";
    }
    else{
        cout<<"Duplicate element occurance is -> "<<result<<endl;
    }

    return 0;
}