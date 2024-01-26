#include<iostream>
#include<vector>
using namespace std;
int isSorted(int n, vector<int> a) {
    for(int i=1;i<n;i++)
    {
        if(a[i-1]<=a[i])
        {

        }else
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    vector<int> Prob={1,2,3,4,5,5};
    int Solution;
    int n;
    cin>>n;
    Solution = isSorted(n,Prob);
return 0;
}