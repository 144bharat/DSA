#include<iostream>
#include<vector>
using namespace std;
vector<int> countFrequency(int n, int x, vector<int> &nums){
    //12:21 - 12:41
    vector<int> HashArr(n);
    for(int i=0;i<n;i++)
    {
        HashArr[nums[i] -1] +=1;
    }
    return HashArr;
}
void printVector(vector<int> v)
{
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}
int main()
{
    int probsize;
    cin>>probsize;
    // prob[element] --> 1 to elementrange
    int elementrange;
    cin>>elementrange;
    vector<int> prob={1,3,4,3,4,1};

    vector<int> solution;
    solution = countFrequency(probsize,elementrange,prob);
    printVector(solution);
return 0;
}