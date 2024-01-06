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