#include <iostream>
#include <vector>
using namespace std;
    void rotate(vector<int>& nums, int k) {
       int arr[nums.size()];
       for(int i=0;i<nums.size();i++)
       {
           int position=(i+k)%(nums.size());
           arr[position]=nums[i];
       }
       for(int i=0;i<nums.size();i++)
       {
           nums[i]=arr[i];
       }
    }
int main()
{
    // Input: nums = [1,2,3,4,5]
    // Output: true
    // Explanation: nums[i] value should be on arr[(i+k) % nums.size()]

    vector<int> arr = {1, 2, 3, 4, 5};
    int k=3;
    rotate(arr,k);
    return 0;
}