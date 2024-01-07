#include<iostream>
using namespace std;

 int bitwiseComplement(int n) {
    //     5 -> 000000....0000 101
    //     ~5 -> 11111....1111 010
    //     mask -> 000....0000 111 (in 0 left shift to 1 then OR with 1 till n==0)
    //    ~5 & mask -> 0000....0000 010 --> 10
    if (n==0) return 1;
       int mask = 0;
       int DupliOfN=n;
       while(DupliOfN != 0)
       {
            mask = (mask << 1) | 1;
            DupliOfN = DupliOfN >> 1;
       }
       return (~n) & mask;
    }

int main()
{
    int N;
    cout<<"Enter the Number and find it's Complement of Base 10  = ";
    cin>>N;

    bitwiseComplement(N);
return 0;
}