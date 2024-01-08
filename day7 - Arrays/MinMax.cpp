#include<iostream>
#include<climits>
using namespace std;

int Mini(int A[],int Size)
{
    int minimum = INT_MAX;
    for(int i=0; i<Size; i++)
    {
        if(minimum>=A[i])
        {
            minimum = A[i];
        }
    }
    return minimum;
}

int Maxi(int A[],int Size)
{
    int maximum = INT_MIN;
    for(int i=0; i<Size; i++)
    {
        if(maximum<=A[i])
        {
            maximum = A[i];
        }
    }
    return maximum;
}

int main()
{
    int N;
    cout<<"Enter the Size of Array = ";
    cin>>N;

    int myArray[100]={};
    
    cout<<"Enter the Elements in a Array = ";
    
    for(int i = 0; i < N; i++)
    {
        int Value;
        cin>>Value;
        myArray[i] = Value;
    }
    for(int i = 0; i < N; i++)
    {
       
       cout<<myArray[i]<<" ";
    }
     int MinAnswer  = Mini(myArray, N);
    cout<<endl<<"Min value is "<<MinAnswer;
    int MaxAnswer  = Maxi(myArray, N);
    cout<<endl<<"Max value is "<<MaxAnswer;
    return 0;
}