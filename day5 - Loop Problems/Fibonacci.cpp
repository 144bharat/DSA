// 0    1   1   2   3   5   8   13  21  ....... ........
#include<iostream>
using namespace std;
int main()
{
    int a = 0;
    int b = 1;
    int N;
    cout<<"enter the size of Fibonnaci Series = ";
    cin>>N;
    cout<< a<<" "<<b;
    for(int i=0;i<N;i++)
    {
        long int sum = a + b;
        a = b;
        b = sum;
        cout<<" "<<sum;
    }
    return 0;
}