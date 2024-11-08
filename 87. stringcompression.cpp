#include <iostream>
#include <string>
#include <string.h>
#include <vector>
using namespace std;

int stringCompression(vector<char> &str)
{
    int count = 1;
    vector<char>s;

    for(unsigned int i=0; i<str.size(); i++)
    {
        if(str[i] == str[i+1])
        {
            count++;
        }
        else
        {
            s.push_back(str[i]);
            if((count>1) && (count<=9))
            {
                s.push_back(count+'0');
            }
            else if(count>=10)
            {
                string countString = to_string(count);
                for(unsigned int k=0; k<countString.size(); k++)
                {
                    s.push_back(countString[k]);
                }
            }
            count = 1;
        }
    }

    str.assign(s.begin(), s.end());

    for(unsigned int i=0; i<str.size(); i++)
    {
        cout<<s[i]<<"   ";
    }
    cout<<endl;


    return s.size();
}

int main()
{
    vector<char> str = {'a'};

    int answer = stringCompression(str);
    cout << answer << endl;

    return 0;
}