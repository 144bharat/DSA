#include<iostream>
#include <cstdint>
using namespace std;

int hammingWeight(uint32_t n) {
        // 0000000....0000101 -> total 32 digits.
        // check last digit if 1 then add in sum then right shift by one.
        
        int Sum = 0;
        while(n!=0)
        {
            int rem = n%10;
            if(rem&1)
            {
                Sum +=1;
            }
            n = n>>1;
        }
        return Sum;
    }
int main()
{
    unsigned int n;
    cout<<"Please Enter the (32 bits long)binary representation of decimal value = ";
    hammingWeight(n);
}