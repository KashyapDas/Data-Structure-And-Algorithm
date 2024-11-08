#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

string decodeMessage(string str, string pattern)
{
    char start = 'a';
    char mapping[300] = {0};

    for(unsigned char ch : str)
    {
        if(mapping[ch] == 0)
        {
            mapping[ch] = start;
            start++;
        }
    }

    string ans;
    for(unsigned char ch: str)
    {
        ans.push_back(mapping[ch]);
    }
    if(ans == pattern)
    {
        return str;
    }
    return "npos";
}

vector<string> replacePattern(vector<string>words, string pattern)
{
    vector<string>data;   
    for(string ch:words)
    {
        string result = decodeMessage(ch,pattern);
        data.push_back(result);
    }
    return data;
}

string mappingPattern(string pattern)
{
    char mapping[300] = {0};
    char start = 'a';
    for(unsigned char ch:pattern)
    {
        if(mapping[ch] == 0)
        {
            mapping[ch] = start;
            start++;
        }
    }
    string ans;
    for(unsigned char ch: pattern)
    {
        ans.push_back(mapping[ch]);
    }
    return ans;
}

int main()
{
    vector<string>words = {"abc","deq","mee","aqq","dkd","ccc"};
    string pattern = "ccc";

    string patternMap = mappingPattern(pattern);
    
    vector<string>final = replacePattern(words,patternMap);

    for(string ch: final)
    {
        if(ch != "npos")
        {
            cout<<ch<<" ";
        }
    }
    cout<<endl;

    return 0;
}