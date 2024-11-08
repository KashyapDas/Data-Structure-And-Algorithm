#include <iostream>
#include <string.h>
#include<vector>
using namespace std;

bool areSame(string &ans, char &ch, int k)
{
    int it = ans.size() - 1;
    for (int i = 0; i < k; i++)
    {
        if (ans[it] != ch)
        {
            return false;
        }
        it--;
    }
    return true;
}

string removeDuplicate(string &str, unsigned int k)
{
    string ans = "";

    for (unsigned int i = 0; i < str.size(); i++)
    {
        char ch = str[i];
        if (ans.size() < (k - 1))
        {
            ans.push_back(ch);
        }
        else
        {
            if (areSame(ans, ch, k - 1))
            {
                for (unsigned int i = 0; i < (k - 1); i++)
                {
                    ans.pop_back();
                }
            }
            else
            {
                ans.push_back(ch);
            }
        }
    }
    return ans;
}


string optimizeSol(string& str, unsigned int k)
{
    unsigned int i=0, j=0;
    vector<unsigned int>count(str.size());
    
    while( j<str.size() )
    {
        str[i] = str[j];
        count[i] = 1;
        if((i>0) && (str[i]==str[i-1]) )
        {
            count[i] = count[i]+count[i-1];
        }
        if(count[i]==k)
        {
            i = i-k;
        }
        i++;
        j++;
    }
    return str.assign(str.substr(0,i));
}



int main()
{
    string str = "eeebbcccbaa";
    int k = 3;

    // string ans = removeDuplicate(str, k);

    string ans = optimizeSol(str,k);
    cout << ans << endl;
    cout<<str<<endl;

    return 0;
}