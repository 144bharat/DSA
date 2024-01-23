#include<iostream>
#include<vector>
using namespace std;
void moveZeroes(vector<int>& nums) {
        // 12 1 0 3 0
        vector<int> v;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                v.push_back(nums[i]);
            }
        }
        int diff=nums.size() - v.size();
        for(int i=0;i<diff;i++)
        {
            v.push_back(0);
        } 
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=v[i];
        }
}
int main()
{
    vector<int> arr={0,1,0,3,12};
    moveZeroes(arr);
return 0;
}