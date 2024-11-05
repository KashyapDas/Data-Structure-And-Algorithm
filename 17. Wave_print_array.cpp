#include<iostream>
#include<vector>
using namespace std;

void wavePrint(vector<vector<int>>nums, int n, int m)
{
    for(auto j=0; j<m; j++)
    {
        if(j%2==0)
        {
            for(int i=0; i<n; i++)
            {
                cout<<nums[i][j]<<" ";
            }
        }
        else{
            for(int i=n-1; i>=0; i--)
            {
                cout<<nums[i][j]<<" ";
            }
        }
    }
}

int main()
{
    vector<vector<int>>v = {
        {1,2,3,4},
        {5,6,7,8,},
        {9,10,11,12},
    };

    int row = v.size();
    int col = v[0].size();

    wavePrint(v,row,col);


    return 0;
}