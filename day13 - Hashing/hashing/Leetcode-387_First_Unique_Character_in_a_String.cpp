#include <iostream>
#include <string>
using namespace std;
int firstUniqChar(string s)
{
    int strArr[26] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        int pos = s[i] - 'a';
        strArr[pos]++;
    }
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = 0; j < 26; j++)
        {
            int newpos = s[i] - 'a';
            if (strArr[newpos] == 1)
            {
                return i;
            }
        }
    }
    return -1;
}
int main()
{
    string Prob = "Leetcode";
    firstUniqChar(Prob);
    return 0;
}