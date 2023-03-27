#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int findduplicate(vector<int> &nums)
{
    while(nums[0]!=nums[nums[0]]){
        swap(nums[0],nums[nums[0]]);
    }return nums[0];
}

// int findduplicate(vector<int> &nums)
// {
//     //sorting and than findind the duplicate 
//     //time complexity is o(nlogn + n) = o(nlogn)
//     sort(nums.begin(),nums.end());
//     for(int i=0;i<nums.size();i++)
//     {
//         if(nums[i]==nums[i+1]) return nums[i];
//     }
//     return -1;
// }


// int findduplicate(vector<int> &nums)//brute force
// {
//     for(int i=0;i<nums.size();i++)
//     {
//         for(int j=i+1;j<nums.size();j++)
//         if(nums[i]==nums[j])
//         return nums[i];
//     }
//     return -1;
// }

int main()
{
    vector<int> nums{1,3,4,2,2};
    cout<<findduplicate(nums);
}