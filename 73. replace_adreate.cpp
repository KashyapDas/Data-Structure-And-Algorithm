#include<iostream>
#include<string.h>
using namespace std;

void replace(char ch[])
{
    int index = 0;
    while(ch[index] != '\0')
    {
        if(ch[index] == '@')
        {
            ch[index] = ' ';
        }
        index++;
    }
    cout<<ch<<endl;
}

int main()
{
    char ch[100];
    cin.getline(ch,100);

    replace(ch);


    return 0;
}