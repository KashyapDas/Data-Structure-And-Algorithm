#include<iostream>
#include<vector>
using namespace std;

int findElem(int arr[], int size, int x, int y)
{
    vector<int>temp;
    int count = 1;

    for(int i=0; i<size; i++)
    {
        int index = (x*count)-1;
        if(index!=i)
        {
            temp.push_back(arr[i]);
        }
        else if(index==i)
        {
            count++;
        }
    }
    return temp[y-1];

    // Time Complexity is : O(n)
    // Space Complexity is : O(n);
}

int main()
{
    int A[] = {1,2,3,4,5,6,7};
    int N = 7, X=3,Y=5;

    int ans = findElem(A,N,X,Y);

    cout<<"The output is : "<<ans<<endl;

    return 0;
}