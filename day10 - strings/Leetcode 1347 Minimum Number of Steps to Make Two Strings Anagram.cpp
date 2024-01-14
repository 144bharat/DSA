#include<iostream>
#include<string>
using namespace std;
int minSteps(string s, string t) {
    int ch[26] = {0};
    int ch2[26] = {0};
    for(int i=0;i<s.length();i++)
    {
        //cout<<t[i] - 'a';
         ch[s[i] - 'a']++;
         ch2[t[i] - 'a']++;
    }
    int count = 0;
    for(int i=0;i<26;i++)
    {
        if(ch2[i] != ch[i])
        {
            if(ch[i]>ch2[i])
            {
                count = count + (ch[i] - ch2[i]);
                ch2[i] = ch2[i] +(ch[i] - ch2[i]);
            }
        }
    }
    return count;
}
int main()
{
    // APPROACH
    // 1. make two arrays of length 26.
    // 2. then make a frequency count of both the strings in their respective array.
    // 3. now for both arrays if values at ith  index not equals then if array1[i] > array2[i] then increment by the difference among the two values also make sure to increment the frequency count at array2 to  stop repeation of a step.

    int ans = 0;
    string s = "leetcode";
    string t = "practice";
    ans  = minSteps(s,t);
    return 0;
}