#include<iostream>
using namespace std;

int binaryDivison(int divisior, int dividend)
{
    int start =0;
    int end =dividend;
    int ans = -1;

    while(start<=end)
    {
        int mid = start+(end-start)/2;
        if(mid*divisior <= dividend)
        {
            ans = mid;
            start = mid +1;
        }
        else{
            end = mid -1;
        }
    }
    return ans;
}

int main()
{
    int dividend = 27;
    int divisior = -7;

    int final = binaryDivison(abs(divisior),abs(dividend));

    // now we decided which sign we attached to it

    if( (divisior >0 && dividend >0) || (divisior<0 && dividend<0) )
    {
        cout<<"The ans is : "<<final<<endl;
    }
    else{
        cout<<"The ans is : "<<(-1 * final)<<endl;
    }

    return 0;
}