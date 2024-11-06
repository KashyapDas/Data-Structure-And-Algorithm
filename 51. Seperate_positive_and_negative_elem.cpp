// #include<iostream>
// #include<vector>
// using namespace std;

// void printVector(vector<int>v)
// {
//     for(unsigned int i=0; i<v.size(); i++)
//     {
//         cout<<v[i]<<" ";
//     }
//     cout<<endl;
// }

// void seperateElem(vector<int>v)
// {
//     int temp = 0;
//     for(unsigned int i=1; i<v.size(); i++)
//     {
//         if(v[i]<0)
//         {
//             swap(v[i],v[temp]);
//             i++;
//             temp++;
//         }
//     }
//     printVector(v);
// }

// int main()
// {
//     int row;
//     cin>>row;
//     vector<int>v(row);
//     for(unsigned int i=0; i<v.size(); i++)
//     {
//         cin>>v[i];
//     }


//     seperateElem(v);
//     return 0;
// }


#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>v)
{
    for(unsigned int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void seperate(vector<int>v)
{
    unsigned int size = v.size();
    int start =0;
    int end = size-1;
    while(start<=end)
    {
        if( (v[start]>=0) && (v[end]>=0) )
        {   
            end--;
        }
        else if( (v[start]<0) && (v[end]<0) )
        {
            start++;
        }
        else if( (v[start]>=0) && (v[end]<0) )
        {
            swap(v[start],v[end]);
            start++;
            end--;
        }
        else{
            start++;
            end--;
        }
        
    }
    print(v);
}

int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(unsigned int i=0; i<v.size(); i++)
    {
        cin>>v[i];    
    }
    seperate(v);
}