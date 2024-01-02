#include<iostream>
using namespace std;
int main()
{
    // Completed in 12 minutes.
    // 1 2 3
    // 4 5 6
    // 7 8 9

    int N = 0;
    cout<<"Enter the value of N = ";
    cin>>N;

    int count=1;
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=N;j++)
        {
            if(j>1)
            {
            cout<<" "<<count;
            }else{
                cout<<count;
            }
            count++;
        }
        cout<<endl;
    }
    return 0;
}