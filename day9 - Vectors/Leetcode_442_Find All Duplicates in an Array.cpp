#include<iostream>
#include<vector>
using namespace std;

vector<int> findDuplicates(vector<int>& nums) {
        // [2,5,2,1,1,4] --> 6 size
        // ith index  --> value -1 --> position ki value ko flip krdunga.
        // i=0; nums[0] -1 = 2-1 = 1th index pr value 5 jo hai usko flip krdo --> [2,-5,2,1,1,4]
        // i=1; nums[1] -1 = math.abs(-5) -1 = 4th index ki value 1 ko flip krdo --> [2,-5,2,1,-1,4]
        // i=2; nums[2] -1 = 2-1 = 1th index pr value hai usko flip krdo --> but already flipped hai (-5) so index 2 pr jo value hai 2 woh aduplicate hai push_back krdo answer mein.

    vector<int> v;
    
    for(int i=0;i<nums.size();i++)
    {
        int position = abs(nums[i]) - 1;
        if(nums[position] < 0)
        {
            v.push_back(abs(nums[i]));
        }else{
            nums[position] = -1*nums[position];
        }
    }
    
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    // nums array cleared and v vectors all element insert into the nums for O(1) - space complexity.
    nums.clear();
    nums.insert(nums.end(),v.begin(),v.end());
    
    return nums;
    
}

int main()
{
    vector<int> nums = {2,5,2,1,1,4};
    findDuplicates(nums);
    return 0;
}