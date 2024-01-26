#include<iostream>
using namespace std;
int main()
{
    // a to z --> total 26 letters
    // in range 0 to 25
    // suppose to store c frequency so, c-a = 2
    string str="abcaab";
    int HashArr[26]={0};
    for(int i=0;i<str.length();i++)
    {
        HashArr[str[i]-'a']++;
    }

    for(int i=0;i<26;i++)
    {
        cout<<(i+'a')<<"-->"<<HashArr[i]<<endl;
    }
}