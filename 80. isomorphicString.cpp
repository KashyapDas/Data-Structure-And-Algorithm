#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;

bool isIsomorphic(string s, string t, int n)
{
    char start = 'a';
    char first[300] = {0};
    for(auto ch : s)
    {
        if(first[ch] == 0)
        {
            first[ch] = start;
            start++;
        }
    }

    start = 'a';
    char second[300] = {0};
    
    for(auto ch : t)
    {
        if(second[ch] == 0)
        {
            second[ch] = start;
            start++;
        }
    }

    for(int i=0; i<n; i++)
    {
        if(first[i] != second[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "foo";
    string t = "bar";

    int n = sizeof(s)/sizeof(s[0]);
    
    bool ans = isIsomorphic(s,t,n);
    if(ans)
    {
        cout<<"True"<<endl;
    }
    else{
        cout<<"False"<<endl;
    }

    return 0;
}