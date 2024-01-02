#include<iostream>
using namespace std;
int main()
{
    // Completed in 12 minutes.
    // * * *
    // * * *
    // * * *

    //rows = columns, value = "*"
    int N;
    cout<<"Enter the value of N = ";
    cin>>N;

    for(int i=0;i<N;i++)
    {
        for(int j=0;j<N;j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }    
    return 0;
}
