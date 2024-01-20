#include <iostream>
#include <vector>
using namespace std;
int peakIndexInMountainArray(vector<int> &arr)
{
    int s = 0, e = arr.size() - 1, mid = s + (e - s) / 2;
    while (s < e)
    {
        if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
int main()
{
    vector<int> arr = {0, 2, 1, 0};
    return 0;
}