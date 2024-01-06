#include<iostream>
using namespace std;
    int reverse(int x) {
        int xReverse = 0;

        while(x!=0)
        {
            int rem = x % 10; // 3,2,1
            if(xReverse > (INT_MAX / 10) || xReverse < (INT_MIN / 10))
        {
            return 0;
        }
            xReverse = xReverse*10 + rem; // 0*1 + 3 = 3, 3*10 + 2 = 32, 320 +1 = 123
            x = x/10;
        }
            return xReverse;
    }