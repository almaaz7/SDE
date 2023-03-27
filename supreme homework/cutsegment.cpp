#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int> arr,int target)
{
    if(target == 0) return 0;
    if(target < 0) return INT_MIN;

    int maxi = INT_MIN;
    for(int i=0;i<arr.size();i++)
    {
        cout<<maxi;
        int ans = solve(arr,target-arr[i]);
        if(ans != INT_MIN)
        maxi = max(maxi,ans+1);
    }
    return maxi;
}
int main()
{
    vector<int> arr{5,2,2};
    int target = 7;
    cout<<solve(arr,target);
}