#include<iostream>
#include<string>
using namespace std;
bool halvesAreAlike(string s) {
        int i=0;
        int j = s.length() /2;
        int count1=0;
        while(i<((s.length())/2))
        {
            if(s[i] == 'a' || s[i] == 'A' || s[i] == 'e' || s[i] == 'E' || s[i] == 'i' || s[i] == 'I' || s[i] == 'o' || s[i] == 'O' || s[i] == 'u' || s[i] == 'U')
            {
                count1++;
            }
            i++;
        }

        int count2=0;
        
        while(j<(s.length()))
        {
            if(s[j] == 'a' || s[j] == 'A' || s[j] == 'e' || s[j] == 'E' || s[j] == 'i' || s[j] == 'I' || s[j] == 'o' || s[j] == 'O' || s[j] == 'u' || s[j] == 'U')
            {
                count2++;
            }
            j++;
        }
        if(count1 == count2)
        {
            return true;
        }else{
            return false;
        }
}

int main()
{
// 1. iterate through two while loop, first loop till size/2 and other loop start from size/2 till total size.
// 2. count vowels if present like for first loop count1 variable is used to calculate the total vowels present. similarly count2 will count all the vowels present in loop2.
// 3. then finally you have to compare both the count values and if count1 == count2 then return true otherwise return false.
string s = "Book";
cout<<halvesAreAlike(s);
return 0;
}