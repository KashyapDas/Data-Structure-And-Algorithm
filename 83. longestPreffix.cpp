#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

string prefix(vector<string>& strs)
{
    string ans;
    unsigned int i=0;
    while(true)
    {
        char curr_ch = 0;
        for(auto str : strs)
        {
            if(i>str.size())
            {
                curr_ch = 0;
                break;
            }
            if(curr_ch == 0)
            {
                curr_ch = str[i];
            }
            else if(str[i] != curr_ch)
            {
                curr_ch = 0;
                break;
            }
        }
        if(curr_ch == 0)
        {
            break;
        }
        ans.push_back(curr_ch);
        i++;
    }
    return ans;
}

int main()
{
    vector<string> str = {"flowers","flow","flight"};

    string ans = prefix(str);
    cout<<"The longest prefix is : "<<ans<<endl;

    return 0;
}