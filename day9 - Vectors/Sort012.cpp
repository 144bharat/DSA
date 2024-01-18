#include<iostream>
#include<vector>
using namespace std;
void sortColors(vector<int> &nums)
{
    int count0 = 0,count1 = 0,count2 = 0;
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i] == 0)
        {
            count0++;
        }else if(nums[i] == 1)
        {
            count1++;
        }else{
            count2++;
        }
    } // so we counted Frequency of 0,1,2
    int i=0;
    while(count0>0)
    {
        nums[i]=0;
        count0--;
        i++;
    }
    while(count1>0)
    {
        nums[i]=1;
        count1--;
        i++;
    }
    while(count2>0)
    {
        nums[i]=2;
        count2--;
        i++;
    }
}
void printAnswer(vector<int> & printArr)
{
    cout<<"Hello Here is Your Sorted Vector : "<<endl;

    for(int i=0;i<printArr.size();i++)
    {
        cout<<printArr[i]<<" ";
    }
}
int main()
{
    vector<int> question = {2,0,2,1,1,0};
    sortColors(question);
    printAnswer(question);
return 0;
}