#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int> &nums, int target)
{
    vector<int> copy = nums;
    int i = 0, j = nums.size() - 1;
    sort(nums.begin(), nums.end());
    vector<int> ans;
    while (i < j)
    {
        if (nums[i] + nums[j] == target)
        {
            ans.push_back(nums[i]);
            ans.push_back(nums[j]);
            break;
        }
        else if (nums[i] + nums[j] > target)
        {
            j--;
        }
        else if (nums[i] + nums[j] < target)
        {
            i++;
        }
    }
    vector<int> final_ans;
    for (int k = 0; k < copy.size(); k++)
    {
        if (copy[k] == ans.front() || copy[k] == ans.back())
        {
            final_ans.push_back(k);
        }
    }
    return final_ans;
}
int main()
{
    vector<int> arr={1,2,3,2,1,5,4};
    int Target = 9;
    twoSum(arr,Target);
return 0;
}