#include<iostream>
#include<vector>
using namespace std;

int vectorSum(vector<int>v)
{
    for(unsigned int i=1; i<v.size(); i++)
    {
        if( (v[i]-v[i-1]) != 1 )
        {
            return i;
        }
    }
    return 0;
}

int missing_number(vector<int>v)
{
    for(unsigned int i=0; i<v.size(); i++)
    {
        for(unsigned int j=i+1; j<v.size(); j++)
        {
            if(v[j]<v[i])
            {
                swap(v[i], v[j]);
            }
        }
    }

    int result = vectorSum(v);

    return result;
}

int main()
{
    vector<int>v = {9,6,4,2,3,5,7,0,1};


    int ans = missing_number(v);

    if(ans == 0)
    {
        cout<<"No missing element found"<<endl;
    }
    else{
        cout<<"Missing element found : "<<ans<<endl;
    }

    return 0;
}