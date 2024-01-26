#include<iostream>
using namespace std;
int main()
{
    int Prob[6]={1,3,2,1,4,5};

    int HashArr[6]={0};

    for(int i=0;i<6;i++)
    {
        HashArr[Prob[i]]++;
    }// Now after this loop HashArr contains all the frequency count with there respective index value.

    for(int i=0;i<6;i++)
    {
        cout<<i<<" values frequency is "<<HashArr[i]<<endl;
    }
}