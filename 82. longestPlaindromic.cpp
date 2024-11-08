#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

string lengthCheck(vector<vector<string>> ans)
{
    unsigned int num = 0;
    string res;

    for (unsigned int i = 0; i < ans.size(); i++)
    {
        for (unsigned int j = 0; j < ans[i].size(); j++)
        {
            if (ans[i][j].length() > num)
            {
                res = ans[i][j];
                num = ans[i][j].length();
            }
        }
    }
    return res;
}

vector<string> isPlaindromic( int st,unsigned int ed, string str)
{
    vector<string> ans;

    while ((st >= 0) && (ed < str.size()))
    {
        if (str[st] == str[ed])
        {
            ans.push_back(str.substr(st, ed - st + 1));
            st--;
            ed++;
        }
        else{
            break;
        }
    }
    return ans;
}

string longestPalindromic(string str)
{
    vector<vector<string>> ans;
    int n = str.size();
    for (int i = 0; i < n; i++)
    {
        vector<string> odd = isPlaindromic(i, i, str);
        vector<string> even = isPlaindromic(i, i + 1, str);
        
        if (odd.size() > 0)
        {
            ans.push_back(odd);
        }
        if (even.size() > 0)
        {
            ans.push_back(even);
        }
    }

    string result = lengthCheck(ans);
    return result;
}

int main()
{
    string str = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabcaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";

    string result = longestPalindromic(str);
    cout <<"The longest palindromic substring is : "<< result << endl;

    return 0;
}