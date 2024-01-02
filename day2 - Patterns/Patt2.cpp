#include<iostream>
using namespace std;
int main()
{
    // completed in 5 minutes.
    // 1 1 1
    // 2 2 2
    // 3 3 3

    // rows = columns but values at rows = row number
    int N=0;
    cout<<"Enter the value of N = ";
    cin>>N;
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0;
}