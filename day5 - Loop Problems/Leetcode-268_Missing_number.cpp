#include <iostream>
#include <vector>
using namespace std;
int missingNumber(vector<int> &nums)
{
    // two loop then compare O(n)^2
    // storing number at the ith index and check if any block contain 0 and if contain then return index. O(N) ,  space complexity = O(N).
    int mysize = nums.size();
    vector<int> series(mysize + 1);
    for (int i = 0; i < nums.size(); i++)
    {
        series[nums[i]] += 1;
    }
    int ans = -1;
    for (int i = 0; i < series.size(); i++)
    {
        if (series[i] == 0)
        {
            ans = i;
        }
    }
    return ans;
}
int main()
{
    // T.C --> O(N), S.C --> O(N).
    vector<int> Prob = {0, 1, 2, 3, 4, 6, 7, 8, 9};
    int Solution;
    Solution = missingNumber(Prob);
return 0;
}