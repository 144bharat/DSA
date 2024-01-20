#include<iostream>
#include<vector>
using namespace std;
int count(vector<int>& arr, int n, int x) {
	int pehla=-1,akhri=-1;
	int s=0,s2=0,e=n-1,e2=n-1,mid=s+(e-s)/2,mid2=s2+(e2-s2)/2;
	while(s<=e)
	{
		if(arr[mid] == x)
		{
			pehla=mid;
			e=mid-1;
		}else if(arr[mid] > x)
		{
			e=mid-1;
		}else{
			s=mid+1;
		}
		mid=s+(e-s)/2;
	}

	while(s2<=e2)
	{
		if(arr[mid2] == x)
		{
			akhri=mid2;
			s2=mid2+1;
		}else if(arr[mid2] > x)
		{
			e2=mid2-1;
		}else{
			s2=mid2+1;
		}
		mid2=s2+(e2-s2)/2;
	}
	int count=0;
	if(akhri == -1 && pehla == -1)
	{
	}else{
		count=akhri-pehla+1;
	}
return count;
}
int main()
{
    vector<int> arr={1,2,3,3,3,4,5,6,6,7,7,8,9,10};
    int n=15;
    int x=6;
    int answer=0;
    answer = count(arr,n,x);
    cout<<"6 Appears "<<answer<<" Times in sorted Array";
return 0;
}