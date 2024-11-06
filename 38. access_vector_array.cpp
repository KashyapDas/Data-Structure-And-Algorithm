#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v)
{
    for(unsigned int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n,2);
    print(v);

    return 0;
}