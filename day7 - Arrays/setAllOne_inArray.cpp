#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    // To intialize every block with value 0.
    int allZeroArray[10] = {0};

    // To intialize every block with value 1.
    int allOneArray[10] = {};
    fill_n(allOneArray,10,1);    

    for(int i=0;i<10;i++)
    {
        cout<<"i --> "<<allOneArray[i]<<endl;
    }
    return 0;
}