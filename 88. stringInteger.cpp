#include<iostream>
#include<string.h>
#include <climits>
using namespace std;

bool isDigit(string str, int index)
{
    if((int)str[index] >= 49 && (int)str[index] <= 57)
    {
        return true;
    }
    return false;
}

int Conversion(string s)
{
    int num = 0, sign = 1;
    for(unsigned int i=0; i<s.size(); i++)
    {
        if((s[i] == '-' || s[i] == '+') && (num ==0))
        {
            sign = s[i] == '+' ? 1 : -1;
        }
        if( isDigit(s,i) )
        {
            if((num > INT_MAX/10) || (num == INT_MAX/10 && s[i] > '7') )
            {
                return sign == -1 ? INT_MIN : INT_MAX;
            }
            num = num * 10 + (s[i] - '0');
        }   
        if( ((int)s[i] >=65 && (int)s[i] <=90) || ((int)s[i] >=97 && (int)s[i]<=122)  )
        {
            break;
        }
    }
    return num*sign;
}

int main()
{
    string str = "  kashyap 199";
    int res = Conversion(str);
    cout<<res<<endl;

    return 0;
}