#include<iostream>
using namespace std;
int main()
{
    int A=2;
    int B=3;

    cout<<"OR Operator of "<<A<<" OR "<<B<<" -> "<<(A|B)<<endl;

    cout<<"AND Operator of "<<A<<" AND "<<B<<" -> "<<(A&B)<<endl;

    cout<<"NOT Operator of "<<A<<" -> "<<(~A)<<endl;

    cout<<"XOR Operator of "<<A<<" XOR "<<B<<" -> "<<(A^B)<<endl;

    return 0;
}