#include<iostream>
using namespace std;
int main()
{
    int N;
    cout<<"check  your number prime/not prime = ";
    cin>>N;

    bool isPrime = true;
    for(int i=2;i<N;i++)
    {
        if(N%i==0)
        {
            isPrime = false;
        }
    }

    if(isPrime)
    cout<<"your "<<N<<" is a Prime Number :)";
    else
    cout<<"Sorry "<<N<<" not a Prime Number :(";
    return 0;
}