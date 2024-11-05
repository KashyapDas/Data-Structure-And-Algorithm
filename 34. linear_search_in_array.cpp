// #include<iostream>
// using namespace std;

// bool linearSearch(int arr[5], int key, int n)
// {
//     for(int i=0; i<n; i++)
//     {
//         if(arr[i]==key)
//         {
//             return true;
//         }
//     }
//     return false;
// }

// int main()
// {
//     int arr[5] = {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(int);
//     int key;
//     cout<<"Enter the key -> "<<endl;
//     cin>>key;
    
//     bool ans = linearSearch(arr,key,n);
//     if(ans)
//     {
//         cout<<"Key found"<<endl;
//     }
//     else{
//         cout<<"Key not Found"<<endl;
//     }


//     return 0;
// }


#include<iostream>
using namespace std;

bool linearSearch(int arr[7], int k, int size)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i]==k){
            return true;
        }
    }
    return false;
}

int main()
{
    int arr[7] = {1,2,3,4,5,6,7};
    int size = sizeof(arr)/sizeof(int);
    int key = 9;

    bool result = linearSearch(arr,key,size);

    if(result){
        cout<<"Key Found"<<endl;
    }
    else{
        cout<<"Key Not Found"<<endl;
    }
    return 0;
}