#include<iostream>
#include<vector>
using namespace std;

int missingElem(vector<int>nums)
{
    int n = nums.size();
    int st=0, ed=n-1;
    int ans = -1;

    while(st<=ed)
    {
        int mid = st+(ed-st)/2;
        if(mid+1 == nums[mid])
        {
            st = mid +1;
        }
        else{
            ans = mid;
            ed = mid-1;
        }
    }
    if((ans+1) == 0)
    {
        return n+1; 
    }
    return (ans+1);
}

int main()
{
    vector<int>v = {1,2,3,4,5,6,7,8};

    int final = missingElem(v);
    cout<<"The missing elem is : "<<final<<endl;

    return 0;
}