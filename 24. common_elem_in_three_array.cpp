#include<iostream>
#include<vector>
#include<set>
using namespace std;

vector<int> commonElem(vector<int> A, vector<int> B, vector<int> C, int n1, int n2, int n3)
{
    vector<int> nums;
    set<int> st;
    int i=0, j=0, k=0;
    while(i < n1 && j < n2 && k < n3)
    {
        if( A[i] == B[j] && B[j] == C[k])
        {
            st.insert(A[i]);
            i++;
            j++;
            k++;
        }
        else if(A[i] < B[j])
        {
            i++;
        }
        else if(B[j] < C[k])
        {
            j++;
        }
        else{
            k++;
        }
    }
    for(auto it:st)
    {
        nums.push_back(it);
    }
    return nums;
}

int main()
{
    vector<int>A = {1,5,10,20,40,80};
    vector<int>B = {6,7,20,80,100};
    vector<int>C = {3,4,15,20,30,70,80,120};

    int n1 = A.size();
    int n2 = B.size();
    int n3 = C.size();

    vector<int>result = commonElem(A,B,C,n1,n2,n3);


    if (!result.empty()) {
        cout << "The common elements in the 3 arrays are: ";
        for (unsigned int i = 0; i < result.size(); i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    } else {
        cout << "No common elements found." << endl;
    }

    return 0;
}