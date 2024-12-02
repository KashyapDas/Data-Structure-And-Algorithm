// Find the last occurance of the string

#include<iostream>
#include<string>
using namespace std;

int lastOcc(string str, int size, char x, int st, int ed, int &ans)
{   
    if(st>ed) return ans;
    
    int mid = st+(ed-st)/2;
    if(str[mid] == x)
    {
        ans = mid;
        return lastOcc(str,size,x,mid+1,ed,ans);
    }
    else if(str[mid] < x)
    {
        return lastOcc(str,size,x,mid+1,ed,ans);
    }
    else{
        return lastOcc(str,size,x,st,mid-1,ans);
    }
}

int main()
{
    string str = "abcddefg";
    int size = str.length();
    char x = 'd';
    int ans = -1;
    int st= 0;
    int ed = size-1;

    int final = lastOcc(str,size,x,st,ed,ans);
    if(final<0) cout<<"No occurance found"<<endl;
    else cout<<"The occurance should be : "<<final<<endl;


    return 0;
}