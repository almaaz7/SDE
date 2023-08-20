#include<iostream>
#include<vector>
#include<unordered_set>
#include<algorithm>
using namespace std;
vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int>st;
        vector<int> ans;
        for(auto it : nums1){
            st.insert(nums1[it]);
        }
        for(auto it: nums2){
            if(st.find(it) == st.end()){
                ans.push_back(it);
                st.erase(it);
            }
        }
        return ans;
    }
int main()
{
    vector<int> arr = {1,2};
    vector<int> arr1 = {1,1};

    vector<int> ans = intersection(arr,arr1);
    for(auto it:ans){
        cout<<it<<" ";
    }
}