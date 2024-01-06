#include<iostream>
#include <math.h>
using namespace std;
int main()
{
    //      N = 7 --> 111

    //     if N & 1 --> N = 0000....001001 , 1 = 00000000....0000001
    
    //     0000....001001
    // AND 0000....000001
    //     0000....000001 = if last digit N ke binary number ki 1 hai then AND result to 1 then 0
    //      uske baad N ko right shift krdena hai by 1 till N==0
    //  because N = 0 --> means 00000......00000000


    // 2
    // 2&1 = 0,1
    // result = (bin)0*1 + result(0) --> result = 0;
    // result = (bin)1*10 + result(0) --> result = 10;
int BinaryOfN = 0;
int N;
int Bin;
cout<<"Enter the Decimal Number and Find your Binary Output = ";
cin>>N;
int i = 0;
while(N!=0)
{
    Bin = N&1;

    BinaryOfN = Bin * pow(10,i) + BinaryOfN;
    N = N >>1;
    i++;
}
cout<<"Binary number of a Decimal is "<<BinaryOfN;

return 0;
}