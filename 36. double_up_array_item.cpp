// #include<iostream>
// using namespace std;

// int main()
// {
//     int arr[5] = {2,10,15,72,84};
//     int size = sizeof(arr)/sizeof(int);

//     for(int i=0; i<size; i++)
//     {
//         arr[i] = arr[i] *2;
//     }
//     for(int i=0; i<size; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     cout<<endl;


//     return 0;
// }

#include<iostream>
using namespace std;

void print(int arr[4], int n)
{
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void doubleElem(int arr[4], int n)
{
    for(int i=0; i<n; i++)
    {
        arr[i] = arr[i]*2;
    }
    print(arr,n);
}

int main()
{
    int n;
    cin>>n;
    int* arr = new int(n);

    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    doubleElem(arr,n);

    return 0;
}