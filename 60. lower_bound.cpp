#include<iostream>
#include<vector>
using namespace std;

int lowerBound(vector<int>arr, int key)
{
    int n = arr.size();
    int st =0;
    int ed = n-1;
    int ans = -1;
    while(st<=ed)
    {
        int mid = st+(ed-st)/2;
        if(arr[mid] >= key)
        {
            ans = mid;
            ed = mid-1;
        }
        else{
            st = mid +1;
        }
    }
    return ans;
}

int main()
{
    vector<int>nums = {3,5,8,15,19};
    int n = 21;

    int result = lowerBound(nums,n);

    if(result!= -1)
    {
        cout<<"The lower bound is : "<<nums[result]<<endl;
    }
    else{
        cout<<"No lower bound found..."<<endl;
    }
    return 0;
}