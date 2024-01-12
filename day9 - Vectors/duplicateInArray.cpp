#include<iostream>
#include<vector>
using namespace std;
int findDuplicate(vector<int> &arr) 
{
    // [4,2,1,3,1]
    // [4,2,1,3,1] ^ [1,2,3,4] = 1(ans);
    // ans = 0 , 4;
    // loop
    // if ans^arr[i] == 0
    // else ans = arr[i]

    int ans = 0;
    for(int i=0; i<arr.size(); i++)
    {
       ans = ans^arr[i];

    }
    for(int i=1;i<arr.size();i++)
    {
        ans = ans ^ i;
    }
    return ans;
	
}
int main()
{
    vector<int> v={4,2,1,3,1};
    int ans = findDuplicate(v);
    return 0;
}