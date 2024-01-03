#include<iostream>
using namespace std;
int main()
{
    // A
    // B C
    // C D E
    // D E F G

    int N=0;
    cout<<"Enter the value of N = ";
    cin>>N;
char ch='A';
    for(int i=1;i<=N;i++)
    {
        for(int j=1;j<=i;j++)
        {
            char newch=(((i+j)-1) -1)+'A';
            cout<<newch;
        }
        cout<<endl;
    }
    return 0;
}