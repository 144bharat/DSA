#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
bool closeStrings(string word1, string word2) {
    int arr1[26]={0};
    int arr2[26]={0};
    int count1 = 0;
    int count2 = 0;
    string s1="";
    string s2="";
    
    if(word1.length() == word2.length())
    {
        for(int i=0;i<word1.length();i++)
        {
            arr1[word1[i] - 'a']++;
            arr2[word2[i] - 'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(arr1[i])
            {
                char ch1 = i+'a';
                s1 = s1+ch1;
            }
            if(arr2[i])
            {
                char ch2 = i+'a';
                s2 = s2+ch2;
            }
            count1 = count1+arr1[i];
            count2 = count2+arr2[i];
        }

        if(s1 == s2)
        {
            sort(arr1,arr1+26);
            sort(arr2,arr2+26);
            for(int i=0;i<26;i++)
            {
                if(arr1[i] != arr2[i])
                {
                    return 0;
                }
            }
                return 1;
        }else
        {
            return 0;   // if chars among both are not equals.
        }
    }else
    {
        return 0;   // if length not equals.
    }
}
int main()
{
    string str1 = "abcdd";
    string str2 = "abbcd";
return 0;
}