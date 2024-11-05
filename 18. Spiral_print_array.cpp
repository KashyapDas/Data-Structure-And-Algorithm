#include<iostream>
#include<vector>
using namespace std;

vector<int> spiralPrint(vector<vector<int>>nums, int n, int m)
{
    vector<int>ans;
    int total_elem = n*m;

    int startingRow = 0;
    int startingCol = 0;
    int endingRow = n-1;
    int endingCol = m-1;

    int count=0;

    while(count<total_elem)
    {
        // Print the starting row
        for(int i=startingCol; i<=endingCol && count<total_elem; i++)
        {
            ans.push_back(nums[startingRow][i]);
            count++;
        }
        startingRow++;

        // Print the ending col
        for(int i=startingRow; i<=endingRow && count<total_elem; i++)
        {
            ans.push_back(nums[i][endingCol]);
            count++;
        }
        endingCol--;

        // Print the ending row
        for(int i=endingCol; i>=startingCol && count<total_elem; i--)
        {
            ans.push_back(nums[endingRow][i]);
            count++;
        }
        endingRow--;

        // Print the starting col
        for(int i=endingRow; i>=startingRow && count<total_elem; i--)
        {
            ans.push_back(nums[i][startingCol]);
            count++;
        }
        startingCol++;
    }
    return ans;
}

int main()
{
    vector<vector<int>>v = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int row = v.size();
    int col = v[0].size();

    vector<int> result = spiralPrint(v,row,col);

    int size = result.size();

    for(int i=0; i<size; i++)
    {
        cout<<result[i]<<"  ";
    }
    cout<<endl;

    return 0;
}