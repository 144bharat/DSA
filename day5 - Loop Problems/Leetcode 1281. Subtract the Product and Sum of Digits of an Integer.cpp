#include <iostream>
using namespace std;
int subtractProductAndSum(int n)
    {
        int NProduct = 1;
        int NSum = 0;

        //    234%10 = 4
        //    NProduct = 4xNProduct
        //    NSum = 4+NSum
        //    N = 234/10

        while (n > 0)
        {
            int Rem = n % 10;
            NProduct *= Rem;
            NSum += Rem;
            n /= 10;
        }
        int Result = NProduct - NSum;
        return Result;
    }
    
int main()
{
    int N;
    cout<<"Enter the value of N = ";
    cin>>N;
    subtractProductAndSum(N);
}