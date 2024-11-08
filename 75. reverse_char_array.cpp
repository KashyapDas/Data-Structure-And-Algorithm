#include<iostream>
#include<string.h>
using namespace std;


void reverse(char ch[], int n)
{
    int i=0, j=n-1;

    while(i<=j)
    {
        swap(ch[i],ch[j]);
        i++;
        j--;
    }
    cout<<ch<<endl;
}

int main()
{
    char ch[100];
    cin.getline(ch,100);

    int length = strlen(ch);

    reverse(ch,length); 


    return 0;
}