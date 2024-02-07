#include<iostream>
#include<vector>
#include<climits>
#include<math.h>
using namespace std;
int getMaximumSubarraySum(vector<int>& Prob)
{
    int solutionMax=INT_MIN;
    for(int i=0;i<Prob.size();i++)
    {
        int tempSum=0;
        for(int j=i;j<Prob.size();j++)
        {
            tempSum += Prob[j];
            solutionMax = max(solutionMax,tempSum);
        }
    }
    return solutionMax;
}
int main()
{
    vector<int> Prob = {-1,4,7,2};
    int maximum_Of_Subarray=0;
    maximum_Of_Subarray = getMaximumSubarraySum(Prob);
    cout<<"So, the Maximum Sum of a Sub Array is: "<<maximum_Of_Subarray;
return 0;
}