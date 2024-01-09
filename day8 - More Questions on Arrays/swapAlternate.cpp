// [1,45,5,32,6]

// size --> even --> swap(A[i],A[i+1]) till i+1<N;     increment(i) = i+2;
// size --> odd --> swap(A[i],A[i+1]) till i+1<N;     increment(i) = i+2;
#include<iostream>
using namespace std;
void swapAlternate(int Arr[], int Size)
{
    for(int i=0;i<Size;i=i+2)
    {
        if(i+1 < Size)
        {
            swap(Arr[i],Arr[i+1]);
        }
    }    
}

void printArray(int Arr[], int Size)
{
    for(int i=0;i<Size;i++)
    {
        cout<<Arr[i]<<" ";
    }
}
int main()
{
    int swapOddArray[5] = {1,45,5,32,6};
    int swapEvenArray[10] = {1,45,5,32,6,78,9,22,4,56};

    swapAlternate(swapOddArray,5);
    swapAlternate(swapEvenArray,10);
    
    // printArray(swapOddArray,5);
    printArray(swapEvenArray,10);
    return 0;
}
