#include <iostream>
#include <vector>
#include <map>
using namespace std;
vector<int> getFrequencies(vector<int> &v)
{
    // 01:15 - 01:57
    map<int, int> u_map;
    for (int i = 0; i < v.size(); i++)
    {
        u_map[v[i]]++;
    }
    int maxi = INT_MIN, maxi_pos = INT_MAX, mini = INT_MAX, mini_pos = INT_MAX;
    for (auto i : u_map)
    {
        if (maxi <= i.second)
        {
            maxi = (i.second);
        }

        if (mini >= i.second)
        {
            mini = i.second;
        }
        // cout<<i.first<<"-->"<<i.second<<endl;
    }
    for (auto i : u_map)
    {
        if (maxi == i.second)
        {
            if (maxi_pos > i.first)
            {
                maxi_pos = i.first;
            }
        }
        if (mini == i.second)
        {
            if (mini_pos > i.first)
            {
                mini_pos = i.first;
            }
        }
    }
    vector<int> arr;
    arr.push_back(maxi_pos);
    arr.push_back(mini_pos);
    return arr;
}
int main()
{
    // Input: ‘n' = 6, 'v' = [1, 2, 3, 1, 1, 4]

    // Output: 1 2

    // frequency are as below:-
    // 1->3    (freq(3) is max also key(1) is minimum number among all max)
    // 2->1    (freq(1) is min also key(2) is minimum number among all min)
    // 3->1
    // 4->1

    vector<int> Prob={1,2,3,1,1,4};
    vector<int> Solution;
    Solution = getFrequencies(Prob);
return 0;
}