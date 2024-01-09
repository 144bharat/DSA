#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"Enter the Number and Check for Even/Odd = ";
    cin>>N;

    if(N&1)
    {
        cout<<"Odd Number";
    }
    else
    {
        cout<<"even Number";
    }
    return 0;
}