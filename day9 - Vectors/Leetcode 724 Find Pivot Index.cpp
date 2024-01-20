#include<iostream>
#include<vector>
#include<numeric>
using namespace std;
int pivotIndex(vector<int> &nums)
{
    // [1,7,3,6,5,6]
    // total = 28
    // leftsum=0
    // rightsum = total-nums[i]-leftsum    r=28-1-0=27 l=1, r=28-7-1=20 l=8
    // leftsum=leftsum+nums[i]

    int leftsum = 0, rightsum;
    int total = accumulate(nums.begin(), nums.end(), 0);
    for (int i = 0; i < nums.size(); i++)
    {
        rightsum = total - nums[i] - leftsum;
        if (leftsum == rightsum)
        {
            return i;
        }
        leftsum += nums[i];
    }
    return -1;
}
int main()
{
    vector<int> v={1,7,3,6,5,6};
    pivotIndex(v);
return 0;
}