#include <iostream>
#include <vector>
using namespace std;
// # Intuition
// <!-- Describe your first thoughts on how to solve this problem. -->
//     1) first find the number from which the array should be rotated suppose x.
//     2) then create a array and try to make a sorted rotate array with the help of x.
//     3) and at last check if the new array is sorted or not.

bool isSorted(vector<int> &a)
{
    for (int i = 1; i < a.size(); i++)
    {
        if (a[i - 1] <= a[i])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
}
bool check(vector<int> &nums)
{
    int x = 0;
    for (int i = 1; i < nums.size(); i++)
    {
        if (nums[i - 1] <= nums[i])
        {
        }
        else
        {
            x = i;
        }
    }

    vector<int> v(nums.size());
    for (int i = 0; i < nums.size(); i++)
    {
        v[i] = nums[(i + x) % (nums.size())];
    }
    // cout<<x;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "-->" << endl;
    }
    bool solution;
    solution = isSorted(v);
    return solution;
}
int main()
{
    vector<int> Prob = {3, 4, 5, 1, 2};
    bool ans;
    ans = check(Prob);
    return 0;
}