#include<iostream>
#include<string.h>
using namespace std;

bool istrue(char ch)
{
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        return true;
    }
    return false;
}

string reverseVowel(string s)
{
    int i=0;
    int j = s.length()-1;

    while(i<=j)
    {
        if(istrue(s[i]) && istrue(s[j]))
        {
            swap(s[i],s[j]);
            i++, j--;
        }
        else if(!istrue(s[i]))
        {
            i++;
        }
        else{
            j--;
        }
    }
    return s;
}

int main()
{
    string s;
    getline(cin,s);

    string result = reverseVowel(s);
    cout<<result<<endl;


    return 0;
}