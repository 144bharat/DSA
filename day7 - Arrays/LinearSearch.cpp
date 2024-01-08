#include<iostream>
using namespace std;
bool LinSearch(int A[],int n)
{
    for(int i=0; i<5; i++)
    {
        if(A[i] == n)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int LinearArray[5] = {3,4,2,5,1};
    int SearchingNumber = 5;
    bool isPresent = LinSearch(LinearArray,SearchingNumber);
    if(isPresent)
    {
        cout<<"Searching Number is Present in a Array :)";
    }
    else
    {
        cout<<"Searching Number is not Present in a Array :(";
    }
    return 0;
}