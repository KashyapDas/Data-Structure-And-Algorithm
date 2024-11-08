#include<iostream>
#include<string.h>
using namespace std;

string removeSubstring(string& str, string part)
{
    while(str.find(part) != string::npos)
    {
        str.erase(str.find(part),part.length());
    }
    return str;
}

int main()
{
    string str;
    getline(cin,str);
    string part;
    getline(cin,part);

    string result = removeSubstring(str,part);
    cout<<result<<endl;

    return 0;
}