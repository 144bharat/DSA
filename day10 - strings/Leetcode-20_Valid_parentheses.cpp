#include <iostream>
#include <vector>
#include <string>
using namespace std;
bool isValid(string s)
{
    vector<int> str;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '[' || s[i] == '{')
        {
            str.push_back(s[i]);
        }
        else
        {
            if (str.empty())
            {
                return false;
            }
            if (str.back() == '(' && s[i] == ')' || str.back() == '{' && s[i] == '}' || str.back() == '[' && s[i] == ']')
            {
                str.pop_back();
            }
            else
            {
                return false;
            }
        }
    }
    if (str.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string s = "()(())))";
    cout<<isValid(s);
return 0;
}