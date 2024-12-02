#include<iostream>
#include<vector>
#include<string>
using namespace std;

void subsequence(string str, vector<string>&ans, int index, string op)
{
    if(index >= str.length())
    {
        ans.push_back(op);
        return;
    }

    // exclude 
    subsequence(str,ans,index+1,op);

    // include
    op.push_back(str[index]);
    subsequence(str,ans,index+1,op);
}

int main()
{
    string str = "kashyap";
    string output = "";
    vector<string>ans;

    subsequence(str,ans,0,output);

    cout<<"The elements are : "<<endl;
    for(string ch : ans)
    {
        cout<<"-> "<<ch<<endl;
    }

    return 0;
}