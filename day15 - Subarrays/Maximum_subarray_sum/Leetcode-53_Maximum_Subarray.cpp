#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int maxSubArray(vector<int>& Prob)
{
    int CurrentSum=0;
    int MaximumSum=INT_MIN;
    for(int i=0;i<Prob.size();i++)
    {
        if(CurrentSum<0)
        {
            CurrentSum=0;
        }
        CurrentSum += Prob[i];
        MaximumSum = max(MaximumSum,CurrentSum);
    }
    return MaximumSum;
}
int main()
{
    vector<int> Prob = {-1,4,-6,7,-4};
    int Solution=0;
    Solution = maxSubArray(Prob);
    cout<<"Maximum Sum using Kadane's Algorithm is: "<<Solution;
return 0;
}