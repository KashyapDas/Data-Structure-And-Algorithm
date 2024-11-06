// #include<iostream>
// #include<vector>
// using namespace std;

// void print(vector<int>nums)
// {
//     for(unsigned int i=0; i<nums.size(); i++)
//     {
//         cout<<nums[i]<<" ";
//     }
//     cout<<endl;
// }

// void sortColor(vector<int>nums)
// {
//     for(unsigned int m=0; m<nums.size(); m++)
//         {
//             for(unsigned int n=m+1; n<nums.size(); n++)
//             {
//                 if(nums[n]<nums[m])
//                 {
//                     swap(nums[n],nums[m]);
//                 }
//             }
//         }
//     print(nums);
// }

// int main()
// {
//     vector<int>v = {2,1,0};

//     sortColor(v);


//     return 0;
// }





#include<iostream>
#include<vector>

using namespace std;

void print(vector<int>v)
{
    for(unsigned int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void sortColor(vector<int>v)
{
    int left =0;
    int right = v.size()-1;
    for(int i=0; i<=right; i++)
    {
        if(v[i]==0)
        {
            swap(v[i],v[left]);
            left++;
        }
        else if(v[i]==2)
        {
            swap(v[i],v[right]);
            right--;
        }
    }
    print(v);
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(unsigned int i=0; i<v.size(); i++)
    {
        cin>>v[i];
    }

    sortColor(v);

    return 0;
}




















