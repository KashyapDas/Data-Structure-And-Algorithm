#include<iostream>
using namespace std;

int sumOfPrimeNo(int no)
{
    int ans = 5;
    for(int i=4; i<=no; i++)
    {
        if(i%2 == 0 || i%3 == 0)
        {
            continue; 
        }
        else{
            ans = ans + i;
        }
    }

    return ans;

}

int main()
{
    int no = 19;

    int ans = sumOfPrimeNo(no);

    cout<<ans<<endl;


    return 0;
}