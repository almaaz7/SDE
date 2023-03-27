#include<iostream>
#include<vector>
using namespace std;
int solve(vector<int> arr,int target)
{
    if(target < 0)
    return INT_MAX;
    if(target == 0)
    return 0;

    int mini = INT_MAX;
    for(int i=0;i<arr.size();i++)
    {
        int ans = solve(arr,target - arr[i]);
        if(ans != INT_MAX)
        mini = min(mini,ans+1);//ans+1 will keep the count
    }
    return mini;
}
int main()
{
    vector<int> arr{1,2,3};
    int target = 5;
    cout<<solve(arr,target);
}