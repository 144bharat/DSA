#include<iostream>
using namespace std;
int main()
{
    // Completed in 7 minutes.
    // 1
    // 2 1
    // 3 2 1
    // 4 3 2 1

    int N=0;
    cout<<"Enter the value of N = ";
    cin>>N;

    for(int i=1;i<=N;i++)
    {
        for(int j=i;j>=1;j--)
        {
            if(j==i)
            {
                cout<<j;
            }else{
                cout<<" "<<j;
            }
        }
        cout<<endl;
    }
    return 0;
}