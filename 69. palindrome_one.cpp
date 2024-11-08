#include<iostream>
#include<string.h>
using namespace std;

bool palindrome(char ch[], int n)
{
    int i=0, j=n-1;

    while (i<j)
    {
        if(ch[i] != ch[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    char ch[100];

    cin.getline(ch,100);
    int n = strlen(ch);

    bool result = palindrome(ch,n);
    if(result)
    {
        cout<<"The string is palindrome"<<endl;
    }
    else{
        cout<<"The string is not plaindrome"<<endl;
    }

    return 0;
}