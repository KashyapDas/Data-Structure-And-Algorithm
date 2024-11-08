#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
string str;

bool compare(char char1, char char2)
{
    return str.find(char1) < str.find(char2);
}

string customSort(string order, string s)
{
    str = order;
    sort(s.begin(), s.end(),compare);
    return s;
}

int main()
{
    string order = "cba";
    string s = "abcd";

    string ans = customSort(order,s);
    cout<<"The answer of custom sort is : "<<ans<<endl;

    return 0;
}