#include<iostream>
#include<string.h>
using namespace std;

bool isPossible(string str, int low, int high)
{
    int first = low;
    int last = high;

    while(first<last)
    {
        if(str[first] != str[last])
        {
            return false;
        }
        else{
            first++;
            last--;
        }
    } 
    return true;
}

bool validPalindrome(string& str)
{
    int i=0;
    int j = str.length()-1;

    while(i<=j)
    {
        if(str[i] != str[j])
        {
            bool result1 = isPossible(str,i,j-1);
            bool result2 = isPossible(str,i+1,j);
            if((result1 || result2) == false)
            {
                return false;
            }
            else{
                return true;
            }
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    string str;
    cout<<"Input the string : "<<endl;
    getline(cin,str);

    bool answer = validPalindrome(str);

    if(answer)
    {
        cout<<"Plaindrome..."<<endl;
    }
    else{
        cout<<"Not palindrome..."<<endl;
    }
    return 0;
}