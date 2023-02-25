#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int mindev(vector<int> &nums)
{
    int n = nums.size()-1;
    auto it = std::minmax_element(nums.begin(), nums.end());
    int min_idx = std::distance(nums.begin(), it.first);
    int max_idx = std::distance(nums.begin(), it.second);
    cout<<min_idx<<endl;
    cout<<max_idx<<endl;
    if(nums[max_idx]%2==0)
    return 0;
}
int main()
{
    vector<int> arr {1,2,3,4};
    cout<<mindev(arr);
}