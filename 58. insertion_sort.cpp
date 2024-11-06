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

void insertion_sort(vector<int>& v)
{
        int n = v.size()-1;

        for(int i=0; i<n; i++)
        {
            int key = v[i];
            int j=0;
            while(j>=0 && j<=i-1)
            {
                if(v[j] > v[key])
                {
                    swap(v[j],v[key]);
                }
                j++;
            }
        }
        print(v);
}

int main()
{
    vector<int>v = {5,4,3,2,1};


    insertion_sort(v);

    return 0;
}