int findUnique(int *arr, int size)
{
    // XOR --> 2 ^ 2 --> 0 , it means same element XOR is 0
    int myUnique = 0;
    for(int i = 0; i<size; i++)
    {
        myUnique = (myUnique ^ arr[i]);
    }
    return myUnique;
}

#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {1,3,2,1,3};
    int ans = findUnique(arr,5);
    cout<<ans;
    return 0;
}