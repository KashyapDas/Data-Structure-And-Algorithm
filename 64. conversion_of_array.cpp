#include<iostream>
#include<string.h>
using namespace std;

void conversionArray(char ch[])
{
    int index = 0;

    while(ch[index] != '\0')
    {
        if(ch[index] >= 'a' && ch[index] <= 'z')
        {
            ch[index] = ch[index] - 'a' + 'A';
        }
        index++;
    }

    cout<<ch<<endl;
}

int main()
{
    char ch[100];
    cin.getline(ch,100);



    conversionArray(ch);


    return 0;
}