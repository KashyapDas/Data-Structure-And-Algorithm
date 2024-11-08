#include<iostream>
#include<string.h>
#include<vector>
using namespace std;

int countDevice(string& row)
{
    int count = 0;
    for(auto ch : row)
    {
        count += ch - '0';
    }
    return count;
}

int laserBeam(vector<string>& bank)
{
    vector<int> devices;

    for(auto row : bank)
    {
        devices.push_back(countDevice(row));
    }
    int beams = 0;

    for(unsigned int i=0; i<devices.size(); i++)
    {
        unsigned int j = i+1;
        while(j<devices.size())
        {
            beams += devices[i] * devices[j];
            if(devices[j] == 0)
            {
                j++;
            }
            else{
                break;
            }
        }
    }
    return beams;
}

int main()
{
    vector<string>bank = {"011001","000000","010110","001000"};
    

    int ans = laserBeam(bank);
    cout<<ans<<endl;



    return 0;
}

