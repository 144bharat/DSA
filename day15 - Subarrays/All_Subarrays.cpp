#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> AllArrays(vector<int>& Prob)
{
    vector<vector<int>> Answer;
    for(int i=0;i<Prob.size();i++)
    {
        for(int j=i;j<Prob.size();j++)
        {
            vector<int> subarray;
            for(int k=i;k<=j;k++)
            {
                subarray.push_back(Prob[k]);
            }
            Answer.push_back(subarray);
        }
    }
    return Answer;
}

void printAllArrays(vector<vector<int>>& AllArrays)
{
    cout<<"Total Sub Arrays of Given Problem is : "<<AllArrays.size()<<endl;

    cout<<"Sub Arrays of Given Problem: "<<endl;
    
    for(int i=0;i<AllArrays.size();i++)
    {
        for(int j=0;j<AllArrays[i].size();j++)
        {
            cout<<AllArrays[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    vector<int> Prob = {1,2,3,4,5};
    vector<vector<int>> Solution;
    Solution = AllArrays(Prob);
    printAllArrays(Solution);
return 0;
}