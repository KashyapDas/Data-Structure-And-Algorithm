#include<iostream>
#include<string.h>
using namespace std;

string reverseOnlyLetter(string s)
{
    int i = 0;
    int j = s.size()-1;

    while(i<=j)
    {
        int first = (int)s[i];
        int end = (int)s[j];

        if((first >= 65 && first<=90) || (first >=97 && first<=122))
        {
            if((end >= 65 && end<=90) || (end >=97 && end<=122))
            {
                swap(s[i],s[j]);
                i++, j--;
            }
            else{
                j--;
            }
        }
        else  if((end >= 65 && end<=90) || (end >=97 && end<=122))
        {
            i++;
        }
        else{
            i++;
            j--;
        }
    }
    return s;
}

int main()
{
    string s = "ab-cd";

    string result = reverseOnlyLetter(s);
    cout<<"After reversing the result is : "<<result<<endl;

    return 0;
}