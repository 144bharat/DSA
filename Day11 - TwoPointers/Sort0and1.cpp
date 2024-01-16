#include<iostream>
#include<algorithm>
using namespace std;
void sortZeroesAndOne(int input[], int size)
{
    int i=0;
    int  j=size-1;
    while(i<j)
    {
        if(input[i] == 0)
        {
            i++;
        }else if(input[j] == 1)
        {
            j--;
        }
        else if(input[i] == 1 && input[j] == 0)
        {
            swap(input[i],input[j]);
            i++;
            j--;
        }
    }
}
int main()
{
    int ProblemArray[]={0,1,1,0,0,1,0,0};
    int Size = 8;
    sortZeroesAndOne(ProblemArray,Size);
    return 0;
}