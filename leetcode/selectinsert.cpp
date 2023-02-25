#include<iostream>
#include<vector>
using namespace std;
int searchindex(vector<int> nums,int target){
    int s = 0;
        int ans = -1;
        int e = nums.size()-1;
        int mid = s+(e-s)/2;
        while( s <= e){
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                s = mid+1;
            }else{
                ans = mid;
                e = mid - 1;
            }
            mid = s+(e-s)/2;
        }
        if(nums[s]<target){
            return nums.size();
        }else{
           return ans; 
        }
}
int main()
{
    vector<int> arr{1,3,5,6};
    int target = 7;
    cout<<searchindex(arr,target);
}