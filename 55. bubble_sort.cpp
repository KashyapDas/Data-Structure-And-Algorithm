#include<iostream>
#include<vector>
using namespace std;

void Print(vector<int>v)
{

    for(unsigned int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<"   ";
    }
    cout<<endl;
}

void bubbleSort(vector<int> &v)
{
    int n = v.size();

    for(int i=0; i<n-1; i++)
    {
        for(int j=0; j<n-i-1; j++)
        {
            if(v[j] > v[j+1])
            {
                swap(v[j], v[j+1]);
            }
        }
    }
    Print(v);
}

int main()
{
    vector<int>v = {5,4,3,2,1};
    

    bubbleSort(v);


    return 0;
}