#include<iostream>
#include<vector>
using namespace std;
int largestElement(vector<int> &arr, int n) {
    // Brute Force
    // sort(arr.begin(),arr.end());
    // return arr[n-1];

    // Optimal Solution
    int largest = arr[0];
    for(int i=1;i<arr.size();i++)
    {
        if(largest<arr[i])
        {
            largest=arr[i];
        }
    }
    return largest;
}
int main()
{
    vector<int> problem={4,3,5,6,7,1};
    int n=6;
    largestElement(problem,n);
return 0;
}