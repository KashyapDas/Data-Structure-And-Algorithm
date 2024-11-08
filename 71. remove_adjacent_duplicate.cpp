#include<iostream>
#include<string.h>
using namespace std;

void removeAdjacent(string& s)
{
    int index = 0;
    string temp;

    while(s[index] != '\0')
    {
        if(s[index] == temp.back())
        {
            temp.pop_back();
        }
        else{
            temp.push_back(s[index]);
        }
        index++;
    }
    cout<<temp<<endl;
}

int main()
{
    string s;

    cout<<"Enter the input : ";
    getline(cin,s);

    removeAdjacent(s);


    return 0;
}