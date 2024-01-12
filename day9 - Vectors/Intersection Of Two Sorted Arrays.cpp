#include <bits/stdc++.h>
using namespace std;
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i=0;
	int j=0;
	vector<int> v;
	while(i<n && j<m)
	{
		if(arr1[i]<arr2[j])
		{
			i++;
		}
		else if(arr1[i] == arr2[j])
		{
			arr2[j] = INT_MAX;
			v.push_back(arr1[i]);
			i++;
			j++;
		}else if(arr1[i]>arr2[j])
		{
			j++;
		}
	}
	return v;
}

int main()
{
    vector<int> arr1 = {1,2,3,3,4};
    int n = 5;
    vector<int> arr2 = {2,3,5};
    int m = 3;

    vector<int> intersectionArray;
    intersectionArray = findArrayIntersection(arr1,n,arr2,m);
    return 0;
}