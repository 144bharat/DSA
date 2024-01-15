#include <iostream>
#include <algorithm>
#include <vector>
#include<unordered_map>
using namespace std;
vector<vector<int>> findWinners(vector<vector<int>> &matches)
{
    unordered_map<int, int> losser_map;
    for (int i = 0; i < matches.size(); i++)
    {
        int myloss = matches[i][1];
        losser_map[myloss]++;
    }
    vector<int> zeroloss;
    vector<int> oneloss;

    for (int i = 0; i < matches.size(); i++)
    {
        if (losser_map.find(matches[i][0]) == losser_map.end())
        {
            zeroloss.push_back(matches[i][0]);
            losser_map[matches[i][0]] = 2;
        }
        if (losser_map[matches[i][1]] == 1)
        {
            oneloss.push_back(matches[i][1]);
        }
    }
    sort(zeroloss.begin(), zeroloss.end());
    sort(oneloss.begin(), oneloss.end());

    vector<vector<int>> v;
    v.push_back(zeroloss);
    v.push_back(oneloss);
    return v;
}
int main()
{
    vector<vector<int>> mymap={{1,2},{2,4}};
    vector<vector<int>> ans;
    ans = findWinners(mymap);
return 0;
}