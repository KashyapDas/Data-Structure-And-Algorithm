#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int garbageCollector(vector<string> &garbage, vector<int> &travel)
{
    int totalTime = -1;
    int travelTime = 0, pickTime = 0;
    int g = 0, m = 0, p = 0;

    for (unsigned int ch = 0; ch < garbage.size(); ch++)
    {
        string single = garbage[ch];
        for (auto i : single)
        {
            if (i == 'G')
            {
                pickTime++;
                g = ch;
            }
            if (i == 'M')
            {
                pickTime++;
                m = ch;
            }
            if (i == 'P')
            {
                pickTime++;
                p = ch;
            }
        }
    }
    for (int i = 0; i < g; i++)
    {
        travelTime += travel[i];
    }
    for (int i = 0; i < p; i++)
    {
        travelTime += travel[i];
    }
    for (int i = 0; i < m; i++)
    {
        travelTime += travel[i];
    }
    totalTime = travelTime + pickTime;
    return totalTime;
}

int main()
{
    vector<string> garbage = {"MMM","PGM","GP"};
    vector<int> travel = {3,10};

    int result = garbageCollector(garbage, travel);
    if(result != -1)
    {
        cout<<"Minimum amonut of time needed to pick up all the garbage is : "<<result<<endl;
    }
    else{
        cout<<"Something went wrong..."<<endl;
    }

    return 0;
}