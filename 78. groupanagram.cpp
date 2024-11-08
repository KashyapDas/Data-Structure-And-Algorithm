#include<iostream>
#include<vector>
#include<string.h>
#include<map>
#include<algorithm>
using namespace std;

vector<vector<string>>groupAnagram(vector<string>strs)
{
    // creating a map data structure
    map<string, vector<string> >mp;

    // store the value to the corresponding key in the map
    for(auto str : strs)
    {
        string s = str;
        sort(s.begin(),s.end());
        // create the map key and then store the vector element as the value of the key 
        mp[s].push_back(str);
    }

    // creating the vector to store the group anagram
    vector<vector<string> >ans;
    // iterate the map data structure for the value store in the correspond key in the map
    for(auto ch = mp.begin(); ch!=mp.end(); ch++)
    {
        ans.push_back(ch->second);
    }
    // return the ans to the main fnc()
    return ans;
}

std::array<int,256> hashingApproach(string s)
{
    std::array<int,256> hashing = {0};

    for(unsigned int i=0; i<s.size(); i++)
    {
        hashing[s[i]]++;
    }
    return hashing;
}

vector<vector<string>> groupAnagram2(vector<string>strs)
{
    map<std::array<int, 256>, vector<string> >mp;

    for(auto str : strs)
    {
        // insert the hash value as a key in the map stl 
        // and insert the correspond elem as the value of the key in the map
        mp[hashingApproach(str)].push_back(str);
    }
    vector<vector<string>>ans;
    for(auto ch=mp.begin(); ch!=mp.end(); ch++)
    {
        ans.push_back(ch->second);
    }
    return ans;
}

int main()
{
    vector<string>strs = {"eat","tea","tan","ate","nat","bat"};

    vector<vector<string>> result = groupAnagram(strs); // sort() stl with map approach

    vector<vector<string>> answer = groupAnagram2(strs); // hashing with map stl

    // printing the result of the question
    for(unsigned int i=0; i<answer.size(); i++)
    {
        for(unsigned int j=0; j<answer[i].size(); j++)
        {
            cout<<"["<<answer[i][j]<<"], ";
        }
        cout<<endl;
    }
    
    // Note -> Hashing technique is better than the sort() stl method as it handle our in less Time Complexity. Hence, in this scnerio the good practise is used the hashing technique 

    return 0;
}