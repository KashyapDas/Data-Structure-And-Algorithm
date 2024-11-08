#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

int indexOcc(string haystack, string needle)
{

    int num = haystack.find(needle);
    return num;
}

int main()
{
    string haystack = "codeleetobutleeto";
    string needle = "leeto";

    int ans = indexOcc(haystack, needle);
    cout<<"The size of haystack is : "<<ans<<endl;


    return 0;
}