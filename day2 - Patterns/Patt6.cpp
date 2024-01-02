#include<iostream>
using namespace std;
int main()
{
    // Completed in 4 minutes.
    // 1
    // 1 2
    // 1 2 3
    // 1 2 3 4

    int N=0;
    cout<<"Enter the value of N = ";
    cin>>N;

    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(j>1)
            {
                cout<<" "<<j;
            }
            else{
                cout<<j;
            }
        }
        cout<<endl;
    }
    return 0;
}