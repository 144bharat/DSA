#include<iostream>
#include <math.h>
using namespace std;
bool isPowerOfTwo(int n) {
        for(int i=0;i<31;i++)
        {
            int PowOf2 = pow(2,i);
            if(n == PowOf2)
            {
                return true;
            }
        }
        return false;
    }

int main()
{
    int N;
    cout<<"Enter the Number and check whether it is a power of 2 or not = ";
    cin>>N;

    isPowerOfTwo(N);
    return 0;
}