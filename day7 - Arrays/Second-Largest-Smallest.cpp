#include <iostream>
#include <vector>
using namespace std;
vector<int> getSecondOrderElements(int n, vector<int> a)
{
    // sort then find second largest --> O(N*log N)
    // better approach would be O(N)
    int Largest = INT_MIN;
    int Smallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (Largest < a[i])
        {
            Largest = a[i];
        }
        if (Smallest > a[i])
        {
            Smallest = a[i];
        }
    }
    int SecLargest = INT_MIN;
    int SecSmallest = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (SecLargest < a[i] && a[i] < Largest)
        {
            SecLargest = a[i];
        }

        if (SecSmallest > a[i] && a[i] > Smallest)
        {
            SecSmallest = a[i];
        }
    }
    vector<int> ans;
    ans.push_back(SecLargest);
    ans.push_back(SecSmallest);
    return ans;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int N = 5;
    getSecondOrderElements(N,arr);
    return 0;
}