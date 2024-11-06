#include<iostream>
#include<vector>
using namespace std;

void print(vector<vector<int> >nums)
{
    for(unsigned int i=0; i<nums.size(); i++)
    {
        for(unsigned int j=0; j<nums.size(); j++)
        {
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }
}

void reverseVector(vector<vector<int> >nums)
{
    for(unsigned int i=0; i<nums.size(); i++)
    {
        int left = 0;
        int right = nums.size()-1;
        while(left<right)
        {
            swap(nums[i][left], nums[i][right]);
            left++;
            right--;
        }
    }

    print(nums);
}

void ninty_rotate(vector<vector<int> >nums)
{
    for(unsigned int i=0; i<nums.size(); i++)
    {
        for(unsigned int j=i+1; j<nums.size(); j++)
        {
            if(i!=j)
            {
                swap(nums[i][j], nums[j][i]);
            }
        }
    }

    reverseVector(nums);
}

int main()
{
    vector<vector<int> >v = { {1,2,3},{4,5,6},{7,8,9} };

    ninty_rotate(v);


    return 0;
}