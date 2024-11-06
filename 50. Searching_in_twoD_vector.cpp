#include<iostream>
#include<vector>
using namespace std;

bool linearSearch(vector<vector<int> >v, int key)
{
    for(unsigned int i=0; i<v.size(); i++)
    {
        for(unsigned j=0; j<v.size(); j++)
        {
            if(v[i][j] == key)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    int key = 13;
    int row,col;
    cout<<"Enter the row and column number : ";
    cin>>row>>col;
    vector<vector<int> >v(row,vector<int>(col));
    cout<<"Enter element in the vector : "<<" ";
    for(unsigned int i=0; i<v.size(); i++)
    {
        for(unsigned int j=0; j<v.size(); j++)
        {
            cin>>v[i][j];
        }
    }

    bool ans = linearSearch(v,key);
    if(ans)
    {
        cout<<"Element found in the vector"<<endl;
    }
    else{
        cout<<"Element not found in the vector"<<endl;
    }

    return 0;

}