#include<iostream>
#include<vector>
using namespace std;

int findunique(vector<int>& arr){
    int ans = 0;
    for(int i =0;i<arr.size();i++){
        ans = arr[i]^ans;
    }

    return ans;
}

int main()
{
    vector<int> arr = {2,3,4,2,4};
    cout<<findunique(arr);
}