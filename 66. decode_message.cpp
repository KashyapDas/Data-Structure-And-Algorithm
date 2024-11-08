#include<iostream>
#include<string.h>
using namespace std;

string decodeMessage(string key, string msg)
{
    char start = 'a';
    char mapping[300] = {0};

    // create mapping
    for(unsigned char ch: key)
    {
        if( (ch!=' ') && (mapping[ch]==0) )
        {
            mapping[ch] = start;
            start++;
        }
    }

    // use mapping
    string ans;
    for(unsigned char ch: msg)
    {
        if(ch==' ')
        {
            ans.push_back(' ');
        }
        else{
            char decoded = mapping[ch];
            ans.push_back(decoded);
        }
    } 
    return ans;   
}

int main()
{
    string key;
    getline(cin,key);

    string message;
    getline(cin, message);

    string result = decodeMessage(key,message);
    cout<<"After decrypting, the message will be : "<<result<<endl;

    return 0;
}