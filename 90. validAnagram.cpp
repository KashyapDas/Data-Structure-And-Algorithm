#include <iostream>
using namespace std;

bool validAnagram(string s, string t)
{
    char map1[300] = {0};
    char map2[300] = {0};

    for (unsigned char ch : s)
    {
        int count = 0;
        if (map1[ch] == 0)
        {
            map1[ch] = map1[ch] + count + 1;
        }
    }
    for (unsigned char ch : t)
    {
        int count = 0;
        if (map2[ch] == 0)
        {
            map2[ch] = map2[ch] + count + 1;
        }
    }
    if (s.length() != t.length())
    {
        return false;
    }
    for (unsigned char ch : s)
    {
        if (map1[ch] != map2[ch])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s = "anagram";
    string t = "nagaram";

    bool ans = validAnagram(s, t);
    if (ans)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}