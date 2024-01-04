#include<iostream>
using namespace std;
int main()
{
    // A1 = [1,5]
    // A2 = [3,2,1]

    int A1[2]={1,5};
    int  A2 [3]={3,2,1};
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            if(A1[i]!=A2[j] && j==(3-1))
            {
                cout<<A1[i]<<" != "<<j;
            }
        }
    }
    return 0;
}