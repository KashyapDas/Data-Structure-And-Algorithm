#include<iostream>
#include<string.h>
using namespace std;

int isPossible(string str, int start, int end)
{
    int count = 0;
    int length = str.length()-1;
    while((start >= 0) && (end<=length))
    {
        if(str[start] != str[end])
        {
            break;
        }
        count++;
        start--;
        end++;
    }
    return count;
}

int palindromicSubstring(string str)
{
    int index = 0;
    int total = -1;
    int evenResult = 0, oddResult = 0;

    while(str[index] != '\0')
    {
        evenResult = evenResult +  isPossible(str,index, index+1);  
        oddResult = oddResult + isPossible(str,index,index);    
        index++;   
    }
    total = evenResult + oddResult;
    return total;
}

int main()
{
    string str;
    getline(cin,str);

    int result = palindromicSubstring(str);

    if(result != -1)
    {
        cout<<"The total palindromic substring is : "<<result<<endl;
    }   
    else{
        cout<<"There is no plaindromic substring present..."<<endl;
    }

    return 0;
}