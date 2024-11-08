#include<iostream>
#include<string.h>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;

int convertToInt(string time)
{
    int hour = stoi(time.substr(0,2));
    int minutes = stoi(time.substr(3,2));
    return 60 * hour + minutes;
}

int timeDifference(vector<string>& timePoints)
{
    vector<int>minutes;

    // convert each time stamp into minutes using stoi() and then push them into the minutes vector 
    for(auto time : timePoints)
    {
        minutes.push_back(convertToInt(time));
    }

    // sort the element of the minutes 
    sort(minutes.begin(), minutes.end());

    // find the minimum differnece 
    int diff = INT_MAX;

    for(unsigned int i=0; i<minutes.size()-1; i++)
    {
        diff = min(diff, minutes[i+1] - minutes[i] );
    }

    // These are the exception that we need to take care by our own else somewhere it will cause error
    int lastdiff = minutes[0] + 1440 - minutes[minutes.size()-1];

    // At last we should check which one is minimum : "lastdiff" or "diff"
    diff = min(lastdiff, diff);

    return diff;

}

int main()
{
    vector<string>timePoints = {"12:12","00:13"};
    // vector<string>timePoints = {"23:59","00:00"};

    int answer = timeDifference(timePoints);
    cout<<answer<<endl;

    return 0;
}