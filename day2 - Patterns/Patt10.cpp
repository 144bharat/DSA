#include<iostream>
using namespace std;
int main()
{
    // completed in 8  minutes.
    // A
    // B C
    // C D E
    // E F G H
    int N=0;
    cout<<"Enter the value of N = ";
    cin>>N;

    char ch = 'A';
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=i;j++)
        {
            if(i>2 && j==1)
            {
                ch--;
                
            }
            cout<<ch;
            ch++;
        }
        cout<<endl;
    }
    return 0;
}