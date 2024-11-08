#include<iostream>
using namespace std;

void lengthArray(char ch[])
{
    int index = 0;
    while(ch[index] != '\0')
    {
        index++;
    }
    cout<<index;
}

int main()
{
    char ch[100];

    cin.getline(ch,100);

    lengthArray(ch);


    return 0;
}