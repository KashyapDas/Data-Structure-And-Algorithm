#include<iostream>
#include<vector>
using namespace std;

int firstOccurance(vector<int>v, int target)
{
    int n = v.size();
    int st = 0;
    int ed = n-1;

    int ans = -1;
    while (st<=ed)
    {
        int mid = st+(ed-st)/2;

        if(v[mid] == target){
            ans = mid;
            ed = mid-1;
        }
        else if(v[mid] < target)
        {
            st = mid +1;
        }
        else{
            ed = mid-1;
        }
    }
    return ans;
    
}

int main()
{
    vector<int>v = {10,20,30,30,30,30,40,50};
    int target = 30;
    int final = firstOccurance(v,target);
    if(final < 0)
    {
        cout<<"No occurance found..."<<endl;
    }
    else{
        cout<<"Occurance found at : "<<final<<endl;
    }

    return 0;
}