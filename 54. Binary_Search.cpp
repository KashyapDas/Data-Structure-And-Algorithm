#include<iostream>
#include<vector>
using namespace std;

int binarySearch(vector<int>nums, int key)
{
    int size = nums.size();
    int start = 0;
    int end = size-1;

    while(start<=end)
    {
        int mid = start+(end-start)/2;
        if(nums[mid] == key)
        {
            return mid;
        }
        else if(nums[mid] < key)
        {
            start = mid +1;
        }
        else{
            end = mid -1;
        }
    }
    return -1;
}

int main()
{
    vector<int>nums = {10,20,30,40,50,60,70,80,90};
    int target;
    cin>>target;

    int final = binarySearch(nums,target);
    if(final < 0)
    {
        cout<<"Element not found..."<<endl;
    }
    else{
        cout<<"The element is present in the index no : "<<final<<endl;
    }
    return 0;
}