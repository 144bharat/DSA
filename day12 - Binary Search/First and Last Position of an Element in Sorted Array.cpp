#include<iostream>
#include<vector>
using namespace std;
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    //[0,1,1,5]
    // 1
    pair<int,int> p;
    int firstNo=-1;

    int start=0;
    int end=n-1;
    int mid = start + ((end-start)/2);
    while(start<=end)
    {
        if(arr[mid] == k)
        {
            firstNo = mid;
            end=mid-1;
        }else if(arr[mid]>k)
        {
            end=mid-1;
        }else{
            start=mid+1;
        }
        mid = start + ((end-start)/2);
    }

    int secondNo=-1;
    int start2=0;
    int end2=n-1;
    int mid2 = start2 + ((end2-start2)/2);
    while(start2<=end2)
    {
        if(arr[mid2] == k)
        {
            secondNo = mid2;
            start2=mid2+1;
        }else if(arr[mid2]>k)
        {
            end2=mid2-1;
        }else{
            start2=mid2+1;
        }
        mid2 = start2 + ((end2-start2)/2);
    }
    p.first=firstNo;
    p.second=secondNo;
    return p;
}

int main()
{
    vector<int> arr={1,2,2,3,4,4,5,6,7,8};
    int n=10;
    int k=4;

    firstAndLastPosition(arr,n,k);
return 0;
}