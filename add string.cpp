#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void solve(string&num1, int p1, string&num2, int p2, int&carry, string&ans)
    {
        // base Case
        if(p1<0 && p2<0)
        {
            if(carry !=0)
            {
                ans.push_back(carry+'0');
            }
            return;
        }
        // Processing part
        int n1 = (p1>=0 ? num1[p1]-'0' : '0'-'0');
        int n2 = (p2>=0 ? num2[p2]-'0' : '0'-'0');
        int total = n1+n2+carry;
        int digit = total%10;
        carry = total/10;
        ans.push_back(digit+'0');

        // recursive call
        solve(num1, p1-1, num2, p2-1, carry, ans);
        
    }

    string addStrings(string num1, string num2) {
        string ans = "";
        int carry = 0;
        solve(num1, num1.size()-1, num2, num2.size()-1, carry, ans);
        reverse(ans.begin(),ans.end());
        return ans;
    }


    int main()
    {
        string num1 = "123";
        string num2 = "1211";

        string result = addStrings(num1, num2);
        cout<<"After adding the result will be : "<<result<<endl;


        return 0;
    }