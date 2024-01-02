#include<iostream>
using namespace std;
int main()
{
    // Completed in 6 minutes.
    // *
    // * *
    // * * *
    // * * * *
    
    int N=0;
    cout<<"Enter the value of N = ";
    cin>>N;

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j>1)
            cout<<" *";
            else
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}