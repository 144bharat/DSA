#include<iostream>
using namespace std;
int main()
{
    // Completed in 30 minutes.
    // A B C
    // A B C
    // A B C
    
    int N=0;
    cout<<"Enter the value of N = ";
    cin>>N;

    for(int i=1;i<=N;i++)
    {
        char ch = 'A';

        for(int j=1;j<=N;j++)
        {
            if(j>1)
            {cout<<" "<<ch;}
            else
            {cout<<ch;}
            ch++;
        }
        cout<<endl;
    }
    return 0;
}