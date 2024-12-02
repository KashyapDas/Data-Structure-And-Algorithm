#include<iostream>
#include<string>
using namespace std;

void reverseString(string &str, int st, int ed)
{
    if(st>=ed) return;
    swap(str[st],str[ed]);
    reverseString(str,st+1,ed-1);
}

int main()
{
    string str = "girl";
    int st = 0;
    int ed = str.length()-1;
    cout<<"Before reversing the string will be : "<<str<<endl;
    reverseString(str,st,ed);
    cout<<"After reversing, the string will be : "<<str<<endl;

    return 0;
}