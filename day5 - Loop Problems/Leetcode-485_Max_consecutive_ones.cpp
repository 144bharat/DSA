#include <iostream>
#include <vector>
using namespace std;
int findMaxConsecutiveOnes(vector<int> &nums)
{
    int maxi = 0, currentmaxi = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 1)
        {
            currentmaxi++;
        }
        else
        {
            if (maxi < currentmaxi)
            {
                maxi = currentmaxi;
            }
            currentmaxi = 0;
        }

        if (i == nums.size() - 1 && maxi < currentmaxi)
        {
            maxi = currentmaxi;
        }
    }
    return maxi;
}
int main()
{
    vector<int> Prob = {0,1,1,0,0,1,1,1,1,0,0,1,1};
    int Answer;
    Answer = findMaxConsecutiveOnes(Prob);
return 0;
}